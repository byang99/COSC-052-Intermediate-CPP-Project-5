
#ifndef NEWFILE_H
#define NEWFILE_H
/*cout << endl;
    cout << "entered insert( " << i << ", " << object << " )" << endl;
    cout << "size = " << sz << " capacity = " << cap << endl;
    
    if ( i > sz ) 
    {
        throw out_of_range ("Index is out of range. Cannot insert at specified index.");
    }
    //if size is equal to capacity, increase capacity
    if ( sz == cap )
    {
        cout << "increasing capacity" << endl; // WAW
        this->increaseCapacity();
    }
    
    sz++;
    cout << "increased size..." << endl;
    cout << "size = " << sz << " capacity = " << cap << endl;
    
    
    //if adding to the end of the array
    if(i == sz)
    {
        contents[sz-1] = object;
    }
    else
    {
        cout << "shifting contents to make room..." << endl;
        unsigned long iteration = 0;
        //shift everything up and insert new object at specified index
        for( unsigned index = sz-1; index >= i; index-- )
        {
            cout << "loop iteration " << ++iteration << " index is " << index << endl;
            cout << "shifting " << contents[index] << " from " << index << " to " << index+1;
            cout << endl << flush;
            this->contents[index+1] = this->contents[index];
            cout << "done." << endl << flush;
        }
        
        cout << "assigning " << object << " to index " << i << endl;
        this->contents[i] = object;
    }
    
    cout << "new contents: " << endl;
    for ( unsigned long i = 0; i < sz; i++) { cout << contents[i]; }
    cout << endl;
*/

#endif /* NEWFILE_H */

