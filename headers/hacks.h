#ifndef HACKS_H_INCLUDED
#define HACKS_H_INCLUDED

#include<iostream>
#include<limits>

using namespace std;

#include "../include/HackStack.h"

void testProgram();
// Datatypes hack
void hackDataTypes();
template<typename T> void printSizeOf(string text,T t);

// stacks
void hackStacks();

// Allocations.
void hackCAllocations();

template<typename T> void printArray(T * array, int size){
    for (int i=0;i<size;i++){
        cout<<"Element at position ( "<<i<<" ) =>"<<array[i]<<endl;
    }
}

#endif // HACKS_H_INCLUDED
