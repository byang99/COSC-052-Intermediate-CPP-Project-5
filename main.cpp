#include "main.h"


int main() 
{
    
    try
    {    
        cout << "***********************************************************************" << endl;
        cout << "*                            TESTING Vector()                         *" << endl;
        cout << "***********************************************************************" << endl;
        
        //cout << "Printing out contents of v1 using at(): " << endl;
        Vector<int> v1;
        /*cout << "[ " << v1.at(0);
        for (unsigned i = 1; i < v1.size(); i++)
        {
            cout << ", " << v1.at(i);
        }
        cout << " ]" << endl;
        cout << "Printing out contents of v1 using operator[]: " << endl;
        cout << "[ " << v1[0];
        for (unsigned i = 1; i < v1.size(); i++)
        {
            cout << ", " << v1[i];
        }
        cout << " ]" << endl;*/
        cout << "Size: " << v1.size() << endl;
        cout << "Capacity: " << v1.capacity() << endl;
        cout << "Empty: ";
        v1.empty() ? cout << "YES" << endl : cout << "NO" << endl;



        cout << "***********************************************************************" << endl;
        cout << "*                   TESTING Vector( const unsigned )                  *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing Vector( const unsigned )... " << endl;
        cout << "Creating v2 with capacity 19..." << endl;
        Vector<int> v2(19);
        /*cout << "Printing out contents of v2 using at(): " << endl;

        cout << "[ " << v2.at(0);
        for (unsigned i = 1; i < v2.size(); i++)
        {
            cout << ", " << v2.at(i);
        }
        cout << " ]" << endl;
        cout << "Printing out contents of v2 using operator[]: " << endl;
        cout << "[ " << v2[0];
        for (unsigned i = 1; i < v2.size(); i++)
        {
            cout << ", " << v2[i];
        }
        cout << " ]" << endl;*/
        cout << "Size: " << v2.size() << endl;
        cout << "Capacity: " << v2.capacity() << endl;
        cout << "Empty: ";
        v2.empty() ? cout << "YES" << endl : cout << "NO" << endl;


        cout << "***********************************************************************" << endl;
        cout << "*         TESTING Vector( const unsigned, const T& = T() )            *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing Vector( const unsigned, const T& = T() )... " << endl;
        cout << "Creating v3, capacity 5, filled with objects 5..." << endl;
        Vector<int> v3(5,5);
        cout << "Printing out contents of v3 using at(): " << endl;

        cout << "[ " << v3.at(0);
        for (unsigned i = 1; i < v3.size(); i++)
        {
            cout << ", " << v3.at(i);
        }
        cout << " ]" << endl;
        cout << "Printing out contents of v3 using operator[]: " << endl;
        cout << "[ " << v3[0];
        for (unsigned i = 1; i < v3.size(); i++)
        {
            cout << ", " << v3[i];
        }
        cout << " ]" << endl;
        cout << "Size: " << v3.size() << endl;
        cout << "Capacity: " << v3.capacity() << endl;
        cout << "Empty: ";
        v3.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "***********************************************************************" << endl;
        cout << "*                 TESTING Vector( const Vector<T> & )                 *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing Vector( const Vector<T> & )... " << endl;
        cout << "Creating v4 and initializing with contents of v3...Should have 5,5,5,5,5...";
        cout << endl;
        Vector<int> v4(v3);
        cout << "Printing out contents of v4 using at(): " << endl;

        cout << "[ " << v4.at(0);
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4.at(i);
        }
        cout << " ]" << endl;
        cout << "Printing out contents of v4 using operator[]: " << endl;
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        cout << "Size: " << v4.size() << endl;
        cout << "Capacity: " << v4.capacity() << endl;
        cout << "Empty: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;


        cout << "***********************************************************************" << endl;
        cout << "*             TESTING assign( const unsigned, const T& )              *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing assign( const unsigned, const T& )... " << endl;

        cout << "Assigning 1,2,3,4,5 for v4, in that order. Should be [1,2,3,4,5]" << endl;
        v4.assign(0,1);
        v4.assign(1,2);
        v4.assign(2,3);
        v4.assign(3,4);
        v4.assign(4,5);

        cout << "Printing out contents of v4 using at(): " << endl;

        cout << "[ " << v4.at(0);
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4.at(i);
        }
        cout << " ]" << endl;
        cout << "Printing out contents of v4 using operator[]: " << endl;
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        cout << "Size: " << v4.size() << endl;
        cout << "Capacity: " << v4.capacity() << endl;
        cout << "Empty: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "***********************************************************************" << endl;
        cout << "*                   TESTING at( const unsigned )                      *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing at( const unsigned )... " << endl;
        cout << "at(0): " << v4.at(0) << endl;
        cout << "at(1): " << v4.at(1) << endl;
        cout << "at(2): " << v4.at(2) << endl;
        cout << "at(3): " << v4.at(3) << endl;
        cout << "at(4): " << v4.at(4) << endl;
        cout << "Printing out contents of v4 using at(): " << endl;

        cout << "[ " << v4.at(0);
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4.at(i);
        }
        cout << " ]" << endl;
        cout << "Printing out contents of v4 using operator[]: " << endl;
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        cout << "Size: " << v4.size() << endl;
        cout << "Capacity: " << v4.capacity() << endl;
        cout << "Empty: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "***********************************************************************" << endl;
        cout << "*                        TESTING capacity()                           *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing capacity()... " << endl;
        cout << "Capacities should be....v1: 10, v2: 19, v3: 5, v4: 5" << endl;  
        cout << "v1 capacity: " << v1.capacity() << endl;
        cout << "v2 capacity: " << v2.capacity() << endl;
        cout << "v3 capacity: " << v3.capacity() << endl;
        cout << "v4 capacity: " << v4.capacity() << endl;


        cout << "***********************************************************************" << endl;
        cout << "*                   TESTING clear() and empty()                       *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing clear()... " << endl;
        //cout << "Testing empty()... " << endl;

        cout << "Before clearing...  v1: empty...v2: empty.... v3: not empty... v4: not empty";
        cout << endl;

        cout << "v1: ";
        v1.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << "v1 capacity: " << v1.capacity() << endl;

        cout << "v2: ";
        v2.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << "v2 capacity: " << v2.capacity() << endl;

        cout << "v3: ";
        v3.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << "v3 capacity: " << v3.capacity() << endl;

        cout << "v4: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << "v4 capacity: " << v4.capacity() << endl;

        cout << "Calling clear..." << endl;
        v1.clear();
        v2.clear();
        v3.clear();
        v4.clear();

        cout << "After clearing..."<< endl;
        cout << "v1: ";
        v1.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << "v1 capacity: " << v1.capacity() << endl;

        cout << "v2: ";
        v2.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << "v2 capacity: " << v2.capacity() << endl;

        cout << "v3: ";
        v3.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << "v3 capacity: " << v3.capacity() << endl;

        cout << "v4: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << "v4 capacity: " << v4.capacity() << endl;


        cout << "***********************************************************************" << endl;
        cout << "*            TESTING insert( const unsigned, const T& )               *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing insert( const unsigned, const T& )... " << endl;
        cout << "INITIAL VECTOR CONTENTS" << endl;
        v4.push_back(5);
        v4.push_back(7);
        v4.push_back(9);
        v4.push_back(11);
        v4.push_back(13);
        cout << "Printing out contents of v4 using at(): " << endl;

        cout << "[ " << v4.at(0);
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4.at(i);
        }
        cout << " ]" << endl;
        cout << "Printing out contents of v4 using operator[]: " << endl;
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        cout << "Size: " << v4.size() << endl;
        cout << "Capacity: " << v4.capacity() << endl;
        cout << "Empty: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Inserting 0,1,2,3,4,6,8,10,12,14,15 into v4...";
        cout << "should be 0,1,2,3,4,5,6,7,8,9,11,12,13,14,15" << endl;
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        v4.insert(0,4);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        v4.insert(0,3);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        v4.insert(0,2);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        v4.insert(0,1);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;

        v4.insert(0,0);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        
        v4.insert(6,6);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        v4.insert(8,8);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        v4.insert(10,10);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        v4.insert(12,12);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        v4.insert(14,14);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        v4.insert(15,15);
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        
        
        cout << "Printing out contents of v4 using at(): " << endl;

        cout << "[ " << v4.at(0);
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4.at(i);
        }
        cout << " ]" << endl;
        cout << "Printing out contents of v4 using operator[]: " << endl;
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        cout << "Size: " << v4.size() << endl;
        cout << "Capacity: " << v4.capacity() << endl;
        cout << "Empty: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;


        cout << "***********************************************************************" << endl;
        cout << "*              TESTING operator[]( const unsigned )                   *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing operator[]( const unsigned )... " << endl;
        cout << "[0]: " << v4[0] << endl;
        cout << "[1]: " << v4[1] << endl;
        cout << "[2]: " << v4[2] << endl;
        cout << "[3]: " << v4[3] << endl;
        cout << "[4]: " << v4[4] << endl;
        cout << "[5]: " << v4[5] << endl;
        cout << "[6]: " << v4[6] << endl;
        cout << "[7]: " << v4[7] << endl;
        cout << "[8]: " << v4[8] << endl;
        cout << "[9]: " << v4[9] << endl;
        cout << "[10]: " << v4[10] << endl;
        cout << "[11]: " << v4[11] << endl;
        cout << "[12]: " << v4[12] << endl;
        cout << "[13]: " << v4[13] << endl;
        cout << "[14]: " << v4[14] << endl;
        cout << "[15]: " << v4[15] << endl;

        cout << "Printing out contents of v4 using at(): " << endl;

        cout << "[ " << v4.at(0);
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4.at(i);
        }
        cout << " ]" << endl;
        cout << "Printing out contents of v4 using operator[]: " << endl;
        cout << "[ " << v4[0];
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4[i];
        }
        cout << " ]" << endl;
        cout << "Size: " << v4.size() << endl;
        cout << "Capacity: " << v4.capacity() << endl;
        cout << "Empty: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "***********************************************************************" << endl;
        cout << "*                TESTING operator=( const unsigned )                  *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing operator=... " << endl;

        cout << "Printing out contents of v3 using at(): " << endl;

        /*cout << "[ " << v3.at(0);
        for (unsigned i = 1; i < v3.size(); i++)
        {
            cout << ", " << v3.at(i);
        }
        cout << " ]" << endl;*/
        cout << "Size: " << v3.size() << endl;
        cout << "Capacity: " << v3.capacity() << endl;
        cout << "Empty: ";
        v3.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << endl;
        cout << "Printing out contents of v4 using at(): " << endl;

        cout << "[ " << v4.at(0);
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4.at(i);
        }
        cout << " ]" << endl;
        cout << "Size: " << v4.size() << endl;
        cout << "Capacity: " << v4.capacity() << endl;
        cout << "Empty: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Assigning v3 to v4. Both vectors should have 0,1,2,...,15" << endl;
        v3 = v4;
        cout << "Printing out contents of v3 using at(): " << endl;

        cout << "[ " << v3.at(0);
        for (unsigned i = 1; i < v3.size(); i++)
        {
            cout << ", " << v3.at(i);
        }
        cout << " ]" << endl;
        cout << "Size: " << v3.size() << endl;
        cout << "Capacity: " << v3.capacity() << endl;
        cout << "Empty: ";
        v3.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << endl;
        cout << "Printing out contents of v4 using at(): " << endl;

        cout << "[ " << v4.at(0);
        for (unsigned i = 1; i < v4.size(); i++)
        {
            cout << ", " << v4.at(i);
        }
        cout << " ]" << endl;
        cout << "Size: " << v4.size() << endl;
        cout << "Capacity: " << v4.capacity() << endl;
        cout << "Empty: ";
        v4.empty() ? cout << "YES" << endl : cout << "NO" << endl;



        cout << "Assigning v3 to v2. Both vectors should be empty." << endl;
        v3 = v2;
        cout << "Printing out contents of v2 using at(): " << endl;

        /*cout << "[ " << v2.at(0);
        for (unsigned i = 1; i < v2.size(); i++)
        {
            cout << ", " << v2.at(i);
        }
        cout << " ]" << endl;*/
        cout << "Size: " << v2.size() << endl;
        cout << "Capacity: " << v2.capacity() << endl;
        cout << "Empty: ";
        v2.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Printing out contents of v3 using at(): " << endl;

        /*cout << "[ " << v3.at(0);
        for (unsigned i = 1; i < v3.size(); i++)
        {
            cout << ", " << v3.at(i);
        }
        cout << " ]" << endl;*/
        cout << "Size: " << v3.size() << endl;
        cout << "Capacity: " << v3.capacity() << endl;
        cout << "Empty: ";
        v3.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        cout << endl;

        cout << "***********************************************************************" << endl;
        cout << "*                        TESTING push_back()                          *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing push_back()... " << endl;

        cout << "Printing out contents of v5 using at(): " << endl;

        cout << "Capacity:" << "\t" << "Size:" << "\t" << "Empty:" << "\t" << "Elements:" << endl;
        Vector<int> v5(1,0);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;


        v5.push_back(1);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        v5.push_back(2);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;
        v5.push_back(3);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;
        v5.push_back(4);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;
        v5.push_back(5);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;
        v5.push_back(6);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;
        v5.push_back(7);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        v5.push_back(8);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;
        v5.push_back(9);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;
        v5.push_back(10);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        v5.push_back(11);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        v5.push_back(12);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        v5.push_back(13);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        v5.push_back(14);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        v5.push_back(15);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        v5.push_back(16);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        v5.push_back(17);
        cout << v5.capacity() << "\t\t" << v5.size() << "\t";
        v5.empty() ? cout << "YES" << "\t" : cout << "NOT" << "\t";
        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;
        cout << endl;


        cout << "***********************************************************************" << endl;
        cout << "*         TESTING resize( const unsigned, const T& = T() )            *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing resize( const unsigned, const T& = T() )... " << endl;

        cout << "Printing out contents of v5 using at(): " << endl;

        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        cout << "[ " << 1;
        for (unsigned i = 2; i <= v5.size(); i++)
        {
            cout << ", " << i;
        }
        cout << " ]" << endl;

        cout << "Size: " << v5.size() << endl;
        cout << "Capacity: " << v5.capacity() << endl;
        cout << "Empty: ";
        v5.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Testing first condition on v5: size < newSize < capacity." << endl;
        cout << "resize v5 to sz = 25..." << endl;
        v5.resize(25);
        cout << "Printing out contents of v5 using at(): " << endl;

        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;

        cout << "[ " << 1;
        for (unsigned i = 2; i <= v5.size(); i++)
        {
            cout << ", " << i;
        }
        cout << " ]" << endl;


        cout << "Size: " << v5.size() << endl;
        cout << "Capacity: " << v5.capacity() << endl;
        cout << "Empty: ";
        v5.empty() ? cout << "YES" << endl : cout << "NO" << endl;


        cout << "Testing second condition: newSize < size." << endl;
        cout << "resize v5 to sz = 10..." << endl;
        v5.resize(10);
        cout << "Printing out contents of v5 using at(): " << endl;

        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;


        cout << "[ " << 1;
        for (unsigned i = 2; i <= v5.size(); i++)
        {
            cout << ", " << i;
        }
        cout << " ]" << endl;


        cout << "Size: " << v5.size() << endl;
        cout << "Capacity: " << v5.capacity() << endl;
        cout << "Empty: ";
        v5.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Testing third condition: newSize > capacity." << endl;
        cout << "resize v5 to sz = 40..." << endl;
        v5.resize(40);
        cout << "Printing out contents of v5 using at(): " << endl;

        cout << "[ " << v5.at(0);
        for (unsigned i = 1; i < v5.size(); i++)
        {
            cout << ", " << v5.at(i);
        }
        cout << " ]" << endl;


        cout << "[ " << 1;
        for (unsigned i = 2; i <= v5.size(); i++)
        {
            cout << ", " << i;
        }
        cout << " ]" << endl;


        cout << "Size: " << v5.size() << endl;
        cout << "Capacity: " << v5.capacity() << endl;
        cout << "Empty: ";
        v5.empty() ? cout << "YES" << endl : cout << "NO" << endl;


        cout << "***********************************************************************" << endl;
        cout << "*                          TESTING size()                             *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing size()... " << endl;
        cout << "Sizes: v1 - 0    v2 - 0   v3 - 0  v4 - 9   v5 - 40" << endl;
        cout << "Size of v1: " << v1.size() << endl;
        cout << "Size of v2: " << v2.size() << endl;
        cout << "Size of v3: " << v3.size() << endl;
        cout << "Size of v4: " << v4.size() << endl;
        cout << "Size of v5: " << v5.size() << endl;


        cout << "***********************************************************************" << endl;
        cout << "*                          TESTING sort()                             *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing sort()... " << endl;
        cout << "working with vector v1, which has 9,8,7,6,5,4,3,2,1,0" << endl;
        v1.clear();
        v1.push_back(9);
        v1.push_back(3);
        v1.push_back(5);
        v1.push_back(2);
        v1.push_back(4);
        v1.push_back(7);
        v1.push_back(8);
        v1.push_back(2);
        v1.push_back(1);
        v1.push_back(0);
        cout << "Printing out contents of v1 using at(): " << endl;
        cout << "[ " << v1.at(0);
        for (unsigned i = 1; i < v1.size(); i++)
        {
            cout << ", " << v1.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v1.size() << endl;
        cout << "Capacity: " << v1.capacity() << endl;
        cout << "Empty: ";
        v1.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "SORTING... should be 0,1,2,3,4,5,6,7,8,9" << endl;
        v1.sort();
        cout << "Printing out contents of v1 using at(): " << endl;
        cout << "[ " << v1.at(0);
        for (unsigned i = 1; i < v1.size(); i++)
        {
            cout << ", " << v1.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v1.size() << endl;
        cout << "Capacity: " << v1.capacity() << endl;
        cout << "Empty: ";
        v1.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "***********************************************************************" << endl;
        cout << "*                            TESTING sort()                           *" << endl;
        cout << "***********************************************************************" << endl;
        cout << "Testing sort with strings" << endl;
        cout << "working with vector v9... " << endl;
        Vector<string> v9;
        v9.push_back("h");
        v9.push_back("a");
        v9.push_back("e");
        v9.push_back("j");
        v9.push_back("f");
        v9.push_back("d");
        v9.push_back("b");
        v9.push_back("i");
        v9.push_back("g");
        v9.push_back("c");

        cout << "Printing out contents of v9 using at(): " << endl;
        cout << "[ " << v9.at(0);
        for (unsigned i = 1; i < v9.size(); i++)
        {
            cout << ", " << v9.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v9.size() << endl;
        cout << "Capacity: " << v9.capacity() << endl;
        cout << "Empty: ";
        v9.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "SORTING... should be a,b,c,d,e,f,g,h,i,j" << endl;
        v9.sort();
        cout << "Printing out contents of v9 using at(): " << endl;
        cout << "[ " << v9.at(0);
        for (unsigned i = 1; i < v9.size(); i++)
        {
            cout << ", " << v9.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v9.size() << endl;
        cout << "Capacity: " << v9.capacity() << endl;
        cout << "Empty: ";
        v9.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "***********************************************************************" << endl;
        cout << "*                 TESTING remove( const unsigned )                    *" << endl;
        cout << "***********************************************************************" << endl;
        //cout << "Testing remove( const unsigned )... " << endl;

        cout << "working with vector v10... with chars: g r e a t !" << endl;
        Vector<int> v10;
        v10.push_back(0);
        v10.push_back(1);
        v10.push_back(2);
        v10.push_back(3);
        v10.push_back(4);
        v10.push_back(5);
        v10.push_back(6);
        v10.push_back(7);
        v10.push_back(8);
        v10.push_back(9);
        v10.push_back(10);


        cout << "Printing out contents of v10 using at(): " << endl;
        cout << "[ " << v10.at(0);
        for (unsigned i = 1; i < v10.size(); i++)
        {
            cout << ", " << v10.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v10.size() << endl;
        cout << "Capacity: " << v10.capacity() << endl;
        cout << "Empty: ";
        v10.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        /*cout << "remove even numbers in v10..." << endl;
        v10.remove(10);
        v10.remove(8);
        v10.remove(6);
        v10.remove(4);
        v10.remove(2);
        v10.remove(0);
        */
        
        cout << "remove odd numbers in v10..." << endl;
        v10.remove(9);
        v10.remove(7);
        v10.remove(5);
        v10.remove(3);
        v10.remove(1);

        cout << "Printing out contents of v10 using at(): " << endl;
        cout << "[ " << v10.at(0);
        for (unsigned i = 1; i < v10.size(); i++)
        {
            cout << ", " << v10.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v10.size() << endl;
        cout << "Capacity: " << v10.capacity() << endl;
        cout << "Empty: ";
        v10.empty() ? cout << "YES" << endl : cout << "NO" << endl;


        cout << "***********************************************************************" << endl;
        cout << "*                         TESTING deep copy                           *" << endl;
        cout << "***********************************************************************" << endl;

        cout << "Working with empty vectors v1 and v6 for deep copy in copy constructor...";
        cout << endl;    
        v1.clear();
        v1.push_back(9);
        v1.push_back(8);
        v1.push_back(7);
        v1.push_back(6);
        v1.push_back(5);
        v1.push_back(4);
        v1.push_back(3);
        v1.push_back(2);
        v1.push_back(1);
        v1.push_back(0);
        cout << "Printing out contents of v1 using at(): " << endl;
        cout << "[ " << v1.at(0);
        for (unsigned i = 1; i < v1.size(); i++)
        {
            cout << ", " << v1.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v1.size() << endl;
        cout << "Capacity: " << v1.capacity() << endl;
        cout << "Empty: ";
        v1.empty() ? cout << "YES" << endl : cout << "NO" << endl;


        cout << "Initialize v6 with contents of v1..." << endl;


        Vector<int> v6(v1);
        cout << "Printing out contents of v1 using at(): " << endl;
        cout << "[ " << v1.at(0);
        for (unsigned i = 1; i < v1.size(); i++)
        {
            cout << ", " << v1.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v1.size() << endl;
        cout << "Capacity: " << v1.capacity() << endl;
        cout << "Empty: ";
        v1.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Printing out contents of v6 using at(): " << endl;
        cout << "[ " << v6.at(0);
        for (unsigned i = 1; i < v6.size(); i++)
        {
            cout << ", " << v6.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v6.size() << endl;
        cout << "Capacity: " << v6.capacity() << endl;
        cout << "Empty: ";
        v6.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Editing content of v1...remove index 2,assign 0 at index 0, push_back 100...";
        cout << endl;
        v1.remove(2);
        v1.assign(0,0);
        v1.push_back(100);
        cout << "Printing out contents of v1 using at(): " << endl;
        cout << "[ " << v1.at(0);
        for (unsigned i = 1; i < v1.size(); i++)
        {
            cout << ", " << v1.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v1.size() << endl;
        cout << "Capacity: " << v1.capacity() << endl;
        cout << "Empty: ";
        v1.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Printing out contents of v6 using at(): " << endl;
        cout << "[ " << v6.at(0);
        for (unsigned i = 1; i < v6.size(); i++)
        {
            cout << ", " << v6.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v6.size() << endl;
        cout << "Capacity: " << v6.capacity() << endl;
        cout << "Empty: ";
        v6.empty() ? cout << "YES" << endl : cout << "NO" << endl;


        cout << "Working with vectors v7 and v8 for deep copy in overloaded assignment...";
        cout << endl;
        Vector<int> v7;
        Vector<int> v8;

        v7.push_back(9);
        v7.push_back(8);
        v7.push_back(7);
        v7.push_back(6);
        v7.push_back(5);
        v7.push_back(4);
        v7.push_back(3);
        v7.push_back(2);
        v7.push_back(1);
        v7.push_back(0);
        cout << "Printing out contents of v7 using at(): " << endl;
        cout << "[ " << v7.at(0);
        for (unsigned i = 1; i < v7.size(); i++)
        {
            cout << ", " << v7.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v7.size() << endl;
        cout << "Capacity: " << v7.capacity() << endl;
        cout << "Empty: ";
        v7.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Printing out contents of v8 using at(): " << endl;
        /*cout << "[ " << v8.at(0);
        for (unsigned i = 1; i < v8.size(); i++)
        {
            cout << ", " << v8.at(i);
        }
        cout << " ]" << endl;*/

        cout << "Size: " << v8.size() << endl;
        cout << "Capacity: " << v8.capacity() << endl;
        cout << "Empty: ";
        v8.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Assigning v7 to v8... both should have 9,8,7,6,5,4,3,2,1,0" << endl;

        v8 = v7;

        cout << "Printing out contents of v7 using at(): " << endl;
        cout << "[ " << v7.at(0);
        for (unsigned i = 1; i < v7.size(); i++)
        {
            cout << ", " << v7.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v7.size() << endl;
        cout << "Capacity: " << v7.capacity() << endl;
        cout << "Empty: ";
        v7.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Printing out contents of v8 using at(): " << endl;
        cout << "[ " << v8.at(0);
        for (unsigned i = 1; i < v8.size(); i++)
        {
            cout << ", " << v8.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v8.size() << endl;
        cout << "Capacity: " << v8.capacity() << endl;
        cout << "Empty: ";
        v8.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "SORTING v7..." << endl;
        v7.sort();
        cout << "Printing out contents of v7 using at(): " << endl;
        cout << "[ " << v7.at(0);
        for (unsigned i = 1; i < v7.size(); i++)
        {
            cout << ", " << v7.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v7.size() << endl;
        cout << "Capacity: " << v7.capacity() << endl;
        cout << "Empty: ";
        v7.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Printing out contents of v8 using at(): " << endl;
        cout << "[ " << v8.at(0);
        for (unsigned i = 1; i < v8.size(); i++)
        {
            cout << ", " << v8.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v8.size() << endl;
        cout << "Capacity: " << v8.capacity() << endl;
        cout << "Empty: ";
        v8.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        
        cout << "SORTING V8..." << endl;
        v8.sort();
        
        cout << "Printing out contents of v7 using at(): " << endl;
        cout << "[ " << v7.at(0);
        for (unsigned i = 1; i < v7.size(); i++)
        {
            cout << ", " << v7.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v7.size() << endl;
        cout << "Capacity: " << v7.capacity() << endl;
        cout << "Empty: ";
        v7.empty() ? cout << "YES" << endl : cout << "NO" << endl;

        cout << "Printing out contents of v8 using at(): " << endl;
        cout << "[ " << v8.at(0);
        for (unsigned i = 1; i < v8.size(); i++)
        {
            cout << ", " << v8.at(i);
        }
        cout << " ]" << endl;

        cout << "Size: " << v8.size() << endl;
        cout << "Capacity: " << v8.capacity() << endl;
        cout << "Empty: ";
        v8.empty() ? cout << "YES" << endl : cout << "NO" << endl;
        
        //unit test


        string ans = "";
        cout << "test " << "SPECIAL_01" << ": Vector::push_backs, inserts, at: " << flush;
        cout << "output should be the word \"great\"" << endl;
        Vector<char> v;
        v.push_back( 'a' );
        v.push_back( 't' );
        v.insert( 0, 'e' );
        v.insert( 0, 'r' );
        v.insert( 0, 'g' );
            
        for ( unsigned long i = 0; i < v.size(); i++ )
        cout << v.at(i);
        cout << endl;
        
        
        cout << "TESTING EXCEPTIONS" << endl;
        Vector<char> vec;
        cout << "THROW OUT OF RANGE IN ASSIGN FUNCTION" << endl;
        //vec.assign(6,0);
        
        /*
        ***void increaseCapacity() throw ( bad_alloc );

        public:
            ***Vector();
            ***Vector( const unsigned ) throw ( bad_alloc );
            ***Vector( const unsigned, const T& = T() ) throw ( bad_alloc );
            ***Vector( const Vector<T> & ) throw ( bad_alloc );
            ***~Vector();
            ***void assign( const unsigned, const T& ) throw ( out_of_range );
            ***T& at( const unsigned ) const throw ( out_of_range );
            ***unsigned capacity() const;
            ***void clear();
            ***bool empty() const;
            ***void insert( const unsigned, const T& ) throw ( bad_alloc, out_of_range );
            ***T& operator[]( const unsigned ) const throw ( out_of_range );
            ***const Vector<T> &operator=( const Vector<T>& ) throw ( bad_alloc );
            ***void push_back( const T& ) throw ( bad_alloc );
            ***void resize( const unsigned, const T& = T() ) throw ( bad_alloc );
            ***unsigned size() const;
            ***void sort();
            ***void remove( const unsigned ) throw ( out_of_range );
        */
    }
    catch(out_of_range &e)
    {
        cout << e.what() << endl;
    }
    catch (bad_alloc &e)
    {
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "Unknown exception caught in main." << endl;
    }
    
    return 0;
}


//
//  main.cpp
//  COSC052Spring2019-Vector-v1
//
//  experimenting with vector template class library
//
/*
#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdexcept>
#include <exception>

// use preprocessor directives to conveniently control what test code runs
// make any of the defines below a comment and that code will not be
// compiled or run until uncommented

#define CONSTRUCTOR_DEFAULT
#define CONSTRUCTOR_WITH_PARAMETERS_1
#define CONSTRUCTOR_WITH_PARAMETERS_2
#define CONSTRUCTOR_COPY
#define ASSIGN
#define EMPLACE
#define INSERT
#define RESIZE

using namespace std;

int main(int argc, const char * argv[])
{

    
    // test vector behavior
    cout << "TESTING VECTOR TEMPLATE CLASS" << endl << endl;
    
    
    
    try
    {
        
#ifdef CONSTRUCTOR_DEFAULT
        
        cout << "testing default constructor..." << endl;
        
        vector<char> v1;
        
        cout << "vector v1 - size: " << v1.size() << " capacity: " << v1.capacity() << endl;
 
        cout << "vector contents:" << endl;
        for ( unsigned long i = 0; i < v1.size(); i++ )
        {
            cout << v1.at(i) << " ";
        }
        cout << endl;
        
        cout << "IMPORTANT NOTE: default constructor for Project 5 is different." << endl;
        cout << endl << endl;
        
#endif

#ifdef CONSTRUCTOR_WITH_PARAMETERS_1

        cout << "testing constructor with parameters #1..." << endl;
        
        vector<char> v2(8);
        
        cout << "vector v2 - size: " << v2.size() << " capacity: " << v2.capacity() << endl;
        
        cout << "vector contents:" << endl;
        for ( unsigned long i = 0; i < v2.size(); i++ )
        {
            cout << v2.at(i) << " ";
        }
        cout << endl;
        
        cout << "IMPORTANT NOTE: constructor with one parameter for Project 5 is different, ";
        cout << "make the array empty (sz=0)." << endl;
        cout << endl << endl;
        
#endif
        
        
#ifdef CONSTRUCTOR_WITH_PARAMETERS_2
        
        cout << "testing constructor with parameters #2..." << endl;
        
        vector<char> v3(8, 'a');
        
        cout << "vector v3 - size: " << v3.size() << " capacity: " << v3.capacity() << endl;
        
        cout << "vector contents:" << endl;
        for ( unsigned long i = 0; i < v3.size(); i++ )
        {
            cout << v3.at(i) << " ";
        }
        
        cout << endl << endl;
        
#endif
        
#ifdef CONSTRUCTOR_COPY
        
        cout << "testing copy constructor..." << endl;
        
        vector<char> v4(8, 'a');
        
        cout << "vector v4 - size: " << v4.size() << " capacity: " << v4.capacity() << endl;

        vector<char> v5(v4);
        
        cout << "vector v5 - size: " << v5.size() << " capacity: " << v5.capacity() << endl;
        cout << endl;
        
        cout << "vector contents of the original:" << endl;
        for ( unsigned long i = 0; i < v4.size(); i++ )
        {
            cout << v4.at(i) << " ";
        }
        cout << endl << endl;
        
        cout << "vector contents of the copy:" << endl;
        for ( unsigned long i = 0; i < v5.size(); i++ )
        {
            cout << v5.at(i) << " ";
        }
        cout << endl << endl;
        
        cout << "prove deep copy by clearing the original vector contents..." << endl << endl;
        v4.clear();
        
        cout << "vector contents of the original after call to clear:" << endl;
        for ( unsigned long i = 0; i < v4.size(); i++ )
        {
            cout << v4.at(i) << " ";
        }
        cout << endl << endl;
        
        cout << "vector contents of the copy:" << endl;
        for ( unsigned long i = 0; i < v5.size(); i++ )
        {
            cout << v5.at(i) << " ";
        }
        cout << endl;
        
       
        cout << endl << endl;
        
#endif
        
#ifdef EMPLACE
        
        cout << "testing emplace method..." << endl;
        
        vector<char> v6(8, 'a');
        
        cout << "vector v6 - size: " << v6.size() << " capacity: " << v6.capacity() << endl;
        
        cout << "vector contents:" << endl;
        for ( unsigned long i = 0; i < v6.size(); i++ )
        {
            cout << v6.at(i) << " ";
        }
        cout << endl << endl;
        
        cout << "calling v6.emplace(v6.begin()" << ", \'" << 'w' << "\');" << endl;
        
        try
        {
            v6.emplace(v6.begin(), 'w');
            
            cout << "vector v6 - size: " << v6.size() << " capacity: " << v6.capacity() << endl;
            
            cout << "vector contents:" << endl;
            for ( unsigned long i = 0; i < v6.size(); i++ )
            {
                cout << v6.at(i) << " ";
            }
            cout << endl << endl;
        }
        catch(...)
        {
            cout << "caught exception in nested try." << endl;
        }
        
        cout << "calling v6.emplace(v6.end()-1" << ", \'" << 'w' << "\');" << endl;
        
        try
        {
            v6.emplace(v6.end()-1, 'w');
            
            cout << "vector v6 - size: " << v6.size() << " capacity: " << v6.capacity() << endl;
            
            cout << "vector contents:" << endl;
            for ( unsigned long i = 0; i < v6.size(); i++ )
            {
                cout << v6.at(i) << " ";
            }
            cout << endl << endl;
        }
        catch(...)
        {
            cout << "caught exception in nested try." << endl;
        }
        
        cout << "calling v6.emplace(v6.end()" << ", \'" << 'w' << "\');" << endl;
        
        try
        {
            v6.emplace(v6.end(), 'w');
            
            cout << "vector v6 - size: " << v6.size() << " capacity: " << v6.capacity() << endl;
            
            cout << "vector contents:" << endl;
            for ( unsigned long i = 0; i < v6.size(); i++ )
            {
                cout << v6.at(i) << " ";
            }
            cout << endl << endl;
        }
        catch(...)
        {
            cout << "caught exception in nested try." << endl;
        }

        cout << "IMPORTANT NOTE: I thought emplace would be like Project #5 assign, ";
        cout << "but it is not. ";
        cout << "emplace appears to be the same as the vector class insert (see next)." << endl;
        cout << "IMPORTANT NOTE: There is no vector class method similar to the Project #5 ";
        cout << "assign method. " << endl;
        cout << endl << endl;
        
#endif
        
       
#ifdef INSERT
        
        cout << "testing insert method..." << endl;
        
        vector<char> v7(8, 'a');
        
        cout << "vector v7 - size: " << v7.size() << " capacity: " << v7.capacity() << endl;
        
        cout << "vector contents:" << endl;
        for ( unsigned long i = 0; i < v7.size(); i++ )
        {
            cout << v7.at(i) << " ";
        }
        cout << endl << endl;
        
        cout << "calling v7.insert(v7.begin()" << ", \'" << 'w' << "\');" << endl;
        
        try
        {
            v7.insert(v7.begin(), 'w');
            
            cout << "vector v7 - size: " << v7.size() << " capacity: " << v7.capacity() << endl;
            
            cout << "vector contents:" << endl;
            for ( unsigned long i = 0; i < v7.size(); i++ )
            {
                cout << v7.at(i) << " ";
            }
            cout << endl << endl;
        }
        catch(...)
        {
            cout << "caught exception in nested try." << endl;
        }
        
        cout << "calling v7.insert(v7.end()-1" << ", \'" << 'w' << "\');" << endl;
        
        try
        {
            v7.insert(v7.end()-1, 'w');
            
            cout << "vector v7 - size: " << v7.size() << " capacity: " << v7.capacity() << endl;
            
            cout << "vector contents:" << endl;
            for ( unsigned long i = 0; i < v7.size(); i++ )
            {
                cout << v7.at(i) << " ";
            }
            cout << endl << endl;
        }
        catch(...)
        {
            cout << "caught exception in nested try." << endl;
        }
        
        cout << "calling v7.insert(v7.end()" << ", \'" << 'w' << "\');" << endl;
        
        try
        {
            v7.insert(v7.end(), 'w');
            
            cout << "vector v7 - size: " << v7.size() << " capacity: " << v7.capacity() << endl;
            
            cout << "vector contents:" << endl;
            for ( unsigned long i = 0; i < v7.size(); i++ )
            {
                cout << v7.at(i) << " ";
            }
            cout << endl << endl;
        }
        catch(...)
        {
            cout << "caught exception in nested try." << endl;
        }
        
        cout << "IMPORTANT NOTE: The vector class insert uses iterators instead of indexes: ";
        cout << endl;
        cout << "\tbegin() is equivalent to 0" << endl;
        cout << "\tend()-1 is equivaluent to size()-1" << endl;
        cout << "\tend() is equivalent to size()" << endl;
        cout << "Both the iterator in the vector class and the index in Project #5 point to the ";
        cout << "element in front of which this object shall be inserted. " << endl;
        cout << "IMPORTANT NOTE: For the vector class end() is valid so for autolab, ";
        cout << "size() should ";
        cout << "be valid, but it is not." << endl;
        cout << "If you use 0 to size() as the valid range for insert I will give back the ";
        cout << "autolab deduction for case 51." << endl;
        cout << endl << endl;
        
#endif
 
        
        
#ifdef RESIZE
        
        cout << "testing resize..." << endl;
        
        vector<char> v8(15, 'a');
        
        cout << "vector v8 - size: " << v8.size() << " capacity: " << v8.capacity() << endl;
        
        cout << "vector contents:" << endl;
        for ( unsigned long i = 0; i < v8.size(); i++ )
        {
            cout << v8.at(i) << " ";
        }
        
        cout << endl << endl;
        
        cout << "calling v8.resize(8,'w') to make capacity available..." << endl;
        
        v8.resize(8,'w');
        
        cout << "vector v8 - size: " << v8.size() << " capacity: " << v8.capacity() << endl;
        
        cout << "vector contents:" << endl;
        for ( unsigned long i = 0; i < v8.size(); i++ )
        {
            cout << v8.at(i) << " ";
        }
        
        cout << endl << endl;
        
        cout << "so far everything is as expected and consistent with the ";
        cout << "Project #5 resize method." << endl;
        cout << "The question is did the previous contents of element 8 through element 14 ";
        cout << "actually get deleted? " << endl;
        cout << "In class we talked about that not being necessary.  The size is less than ";
        cout << "capacity so it really does not matter what is in those locations " << endl;
        cout << "since they will be overwritten by the next call to push_back or other such ";
        cout << "method call." << endl << endl;
        cout << "Using .at or [] we cannot see what is past size()-1, but with iterators we can.";
        cout << endl << endl;
        
        cout << "using an iterator to see what if there are still contents in unused capacity...";
        cout << endl;
        
        vector<char>::iterator itr1 = v8.begin();
        
        for ( int i = 0; i < v8.capacity(); i++ )
        {
            cout << *(itr1 + i) << " ";
        }
        cout << endl << endl;
        
        cout << "Yes.  All available capacity still stores the previous contents." << endl;
        cout << endl;
        
#endif
        
        
    } // END outer try
    catch (...)
    {
        cout << "caught unknown exception testing constructor with unsigned long parameter ";
        cout << "and T parameter" << endl;
    }
    
    
    
    
    
    
    
    
    
    return 0;
}*/




