

#include "../headers/hacks.h"
#include <stdlib.h>

void hackCAllocations(){

    cout<<"C++ while testing c.."<<endl;
    const int size =5;

    int * array;
    //array = (int *) calloc(size,sizeof(int));
    array = (int *) malloc(size * sizeof(int));
    cout<<"Before populating the array . . "<<endl;
    printArray(array, size);

    for (int i=0;i<size;i++){
    array[i]=i+10;
    }
    cout<<"After populating the array . . "<<endl;
    printArray(array, size);

    cout<<"reallocating the array . . . to size =>"<<2*size<<endl;
    array = (int *) realloc(array,2*size*sizeof(int));

     cout<<"Before populating the array . . "<<endl;
    printArray(array, 2*size);

    for (int i=0;i<2*size;i++){
        array[i]=i+10;
    }
    cout<<"After populating the array . . "<<endl;
    printArray(array, 2*size);

    free(array);
    cout<<"After freeing  the array . . "<<endl;
    printArray(array, 2*size);

}
