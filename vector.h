#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>
using namespace std;

template <typename T>
class Vector;

template <typename T>
class Vector
{
    private:
        T* contents;
        unsigned sz;
        unsigned cap;

        void increaseCapacity() throw ( bad_alloc );
        
    public:
        Vector();
        Vector( const unsigned ) throw ( bad_alloc );
        Vector( const unsigned, const T& ) throw ( bad_alloc );
        Vector( const Vector<T> & ) throw ( bad_alloc );
        ~Vector();
        void assign( const unsigned, const T& ) throw ( out_of_range );
        T& at( const unsigned ) const throw ( out_of_range );
        unsigned capacity() const;
        void clear();
        bool empty() const;
        void insert( const unsigned, const T& ) throw ( bad_alloc, out_of_range );
        T& operator[]( const unsigned ) const throw ( out_of_range );
        const Vector<T> &operator=( const Vector<T>& ) throw ( bad_alloc );
        void push_back( const T& ) throw ( bad_alloc );
        void resize( const unsigned, const T& = T() ) throw ( bad_alloc );
        unsigned size() const;
        void sort();
        void remove( const unsigned ) throw ( out_of_range );

}; // END Vector<T> class declaration



//BEGIN MEMBER IMPLEMENTATION


/****************************************************************************
 ****************************************************************************
 *                           PRIVATE FUNCTIONS                              *
 ****************************************************************************
 ****************************************************************************/

/****************************************************************************
 *                      increaseCapacity Function                           *
 ****************************************************************************/
template <typename T>
void Vector<T>:: increaseCapacity() throw ( bad_alloc )
{
    //store current size
    unsigned originalSize = sz;
    
    //call resize function to increase capacity by 2x, size stays the same
    unsigned doubleCapacity = 2 * cap;
    resize(doubleCapacity, T());
    
    //restore current size to original value
    sz = originalSize;
}


/****************************************************************************
 ****************************************************************************
 *                            PUBLIC FUNCTIONS                              *
 ****************************************************************************
 ****************************************************************************/



/****************************************************************************
 *                           default constructor                            *
 *          Default constructor. Constructs an empty vector with            * 
 *          an initial capacity of ten.                                     *
 ****************************************************************************/
template <typename T>
Vector<T>:: Vector()
{
    this->cap = 10;
    this->sz = 0;
    this->contents = new T[cap];
}


/****************************************************************************
 *  Constructor for initializing an empty vector with a specified capacity  *
 ****************************************************************************/
template <typename T>
Vector<T>:: Vector( const unsigned cap ) throw ( bad_alloc )
{
    if( cap == 0 )
    {
        this->cap = 1;
    }
    else
    {
        this->cap = cap;    
    }
    this->sz = 0;
    this->contents = new T[cap];
}

/****************************************************************************
 *     Constructor for initializing a vector to an initial size with its    *
 *                 components initialized with a specified object           *
 ****************************************************************************/
template <typename T>
Vector<T>:: Vector( const unsigned sz, const T& object ) throw ( bad_alloc )
{
    this->sz = sz;
    this->cap = sz;
    this->contents = new T[cap];
    for (unsigned i = 0; i < sz; i++)
    {
        this->contents[i] = object;
    }  
}
        
/****************************************************************************
 *                             copy Constructor                             *
 *                  make a deep copy of the specified vector                * 
 ****************************************************************************/
template <typename T>
Vector<T>:: Vector( const Vector<T>& vector ) throw ( bad_alloc )
{
    //clear the vector
    this->clear();
    //call overloaded assignment operator
    *this = vector;
}


/****************************************************************************
 *                               destructor                                 *
 ****************************************************************************/
template <typename T>
Vector<T>:: ~Vector()
{
    //cout << "Inside destructor..." << endl;
    this->clear();
    delete [] contents;
    this->contents = NULL;
    this->cap = 0;
}

/****************************************************************************
 *                            assign Function                               *
 ****************************************************************************/
template <typename T>
void Vector<T>:: assign( const unsigned i, const T& object ) throw ( out_of_range )
{
    if( i >= sz )
    {
        throw out_of_range("Index is out of range. Cannot assign.");
    }
    
    this->contents[i] = object;    
}


/****************************************************************************
 *                               at Function                                *
 ****************************************************************************/
template <typename T>
T& Vector<T>:: at( const unsigned i ) const throw ( out_of_range )
{
    if( i >= sz )
    {
        throw out_of_range("Index is out of range. Cannot call at(i).");
    }
    
    return this->contents[i];
}


/****************************************************************************
 *                           capacityFunction                               *
 ****************************************************************************/
template <typename T>
unsigned Vector<T>:: capacity() const
{
    return this->cap;
}


/****************************************************************************
 *                             clear Function                               *
 ****************************************************************************/
template <typename T>
void Vector<T>:: clear()
{
    this->sz = 0;
}


/****************************************************************************
 *                              insert Function                             *
 ****************************************************************************/
template <typename T>
void Vector<T>:: insert( const unsigned i, const T& object) throw ( bad_alloc, out_of_range )
{   
    if ( i > sz ) 
    {
        throw out_of_range ("Index is out of range. Cannot insert at specified index.");
    }
    //if size is equal to capacity, increase capacity
    if ( sz == cap )
    {
        this->increaseCapacity();
    }
    
    //if array is empty (sz = 0) and i = 0
    if ( this->empty() && i == 0 )
    {
        sz++;
        this->contents[i] = object;
    }
    
    //if array is not empty
    else
    {
        //if adding to the end of the array
        if(i == sz)
        {
            sz++;
            this->contents[sz-1] = object;
        }
        //if adding to the middle of the array
        else
        {
            //shift everything up and insert new object at specified index
            sz++;
            for( unsigned index = sz-1; index > i; index-- )
            {
                this->contents[index] = this->contents[index-1];
            }

            this->contents[i] = object;
        }
    }    
}


/****************************************************************************
 *                             empty Function                               *
 ****************************************************************************/
template <typename T>
bool Vector<T>:: empty() const
{
    bool empty = false;
    
    if( sz == 0 )
    {
        empty = true;
    }
    
    return empty;
}


/****************************************************************************
 *                          operator[] Function                             *
 ****************************************************************************/
template <typename T>
T& Vector<T>:: operator[]( const unsigned i ) const throw ( out_of_range )
{
    if ( i >= sz )
    {
        throw out_of_range("Index is out of range. Cannot call operator[].");
    }
    
    return this->contents[i];
}


/****************************************************************************
 *                     overloaded assignment operator                       *
 ****************************************************************************/
template <typename T>
const Vector<T>& Vector<T>:: operator=( const Vector<T>& vector ) throw ( bad_alloc )
{
    //cout << "inside overloaded assignment operator" << endl;
    //check for self-assignment
    if(this != &vector)
    {
        //make sure any existing contents of the left hand side list are deallocated
        //cout << "calling clear" << endl;
        //cout << "current size: " << sz << endl;
        this->clear();
        //cout << "new size: " << sz << endl;
        
        this->sz = vector.sz;
        this->cap = vector.cap;
        this->contents = new T[cap];
            
        for (unsigned i = 0; i < this->sz; i++)
        {
            contents[i] = vector.contents[i];
        }
    }
    
    return *this;
}


/****************************************************************************
 *                           push_back Function                             *
 ****************************************************************************/
template <typename T>
void Vector<T>:: push_back( const T& object) throw ( bad_alloc )
{
    //if size equals capacity, increase capacity if necessary
    if( sz == cap )
    {
        this->increaseCapacity();
    }
    //increase the size of the vector
    sz++;
    //copy contents in
    this->contents[sz-1] = object;
}


/****************************************************************************
 *                             resize Function                              *
 ****************************************************************************/
template <typename T>
void Vector<T>:: resize( const unsigned newSize, const T& object ) throw ( bad_alloc )
{
    //new size greater than original size but less than capacity
    if( newSize >=  sz && newSize <= cap )
    {
        unsigned startIndex = sz;
        sz = newSize;

        for (unsigned i = startIndex; i < newSize; i++)
        {
            this->contents[i] = object;
        }
    }
    //new size greater than capacity - create new array - new capacity equals new size 
    else if ( newSize > cap )
    {
        //create intermediate vector
        Vector<T> copyMe(newSize,object);

        //increase capacity - new capacity equals new size
        this->cap = newSize;

        //copy everything in current vector to copy vector
        for ( unsigned i = 0; i < this->sz; i++ )
        {
            copyMe.contents[i] = this->contents[i];
        }

        //clear current vector
        this->clear();

        //call overloaded assignment operator to copy contents of copyMe to current vector
        *this = copyMe;
        sz = newSize;
    }
    
    //new size less than original size
    else if ( newSize < sz )
    {
        for( unsigned i = sz-1; i >= newSize; i-- )
        {
            this->remove(i);
        }
        
        sz = newSize;
    }
}


/****************************************************************************
 *                              size Function                               *
 ****************************************************************************/
template <typename T>
unsigned Vector<T>:: size() const
{
    return this->sz;
}


/****************************************************************************
 *                              sort Function                               *
 ****************************************************************************/
template <typename T>
void Vector<T>:: sort()
{
    unsigned startScan;
    unsigned minIndex;
    T minValue;
    
    if( sz == 0 )
    {
        //do nothing...cannot sort empty array
    }
    else
    {
        for(startScan = 0; startScan < sz-1; startScan++)
        {
            minIndex = startScan;
            minValue = this->contents[startScan];

            for (unsigned index = startScan + 1; index < sz; index++)
            {
                if(contents[index] < minValue)
                {
                    minValue = contents[index];
                    minIndex = index;
                }
            }
            contents[minIndex] = contents[startScan];
            contents[startScan] = minValue;
        }
    }
}


/****************************************************************************
 *                             remove Function                              *
 ****************************************************************************/
template <typename T>
void Vector<T>:: remove( const unsigned i ) throw ( out_of_range )
{
    //throws if array is empty - nothing to remove - and if array is not empty but index
    //is not in the interval [0,sz-1]
    if ( i >= sz )
    {
        throw out_of_range ("Index is out of range. Cannot remove at specified index.");
    }
    // if array is not empty and index is valid
    //shift to the left
    for (unsigned index = i; index < sz-1; index++)
    {
        contents[index] = contents[index+1];
    }
    
    sz--;
}

#endif /* VECTOR_H */