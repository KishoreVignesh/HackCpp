#include "HackStack.h"
#include<iostream>
#include"../headers/hacks.h"

using namespace std;

template<class T>HackStack<T>::HackStack()
{
    top = NULL;
    cout<<"Stack Initialized top as null"<<endl;
}

template<class T>HackStack<T>::~HackStack()
{
    //dtor
}

template<class T>T HackStack<T>::pop(){
    if (top == NULL){
        return NULL;
        cout<<"pop : null"<<" size : "<<this->totalSize()<<endl;
    }
    else{
        Element<T>* tmp = top;
        top = tmp->previous;
        T result = tmp->value;
        delete tmp;
        cout<<"pop : "<<result<<" size : "<<this->totalSize()<<endl;
        return result;
    }
}

template<class T>void HackStack<T>::push(T t){
    if (t != NULL){
        Element<T>* element = new Element<T>();
        element->value = t;
        element->previous = top;
        top = element;
        cout<<"push : "<<t<<" size : "<<this->totalSize()<<endl;
    }
    else{
        cout<<"push : null"<<" size : "<<this->totalSize()<<endl;
    }
}

template<class T>long HackStack<T>::totalSize(){
    // Travese the stack and find out the size;
    long size=0;
    Element<T>* element = top;
    while(element != NULL){
        size += sizeof(Element<T>);
        element = element->previous;
    }
    size+= sizeof(HackStack<T>);
    return size;
}

void hackStacks(){
    cout<<"Staring to Hack Stacks"<<endl;
    HackStack<int> hackStack;
    cout<<"Initial Size =>"<<hackStack.totalSize()<<endl;
    hackStack.push(23);
    hackStack.push(46);
    hackStack.push(92);
    hackStack.pop();
    hackStack.pop();
    hackStack.pop();
}
