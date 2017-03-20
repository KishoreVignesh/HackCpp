#include "../headers/hacks.h"


void hackPointers(){
    cout<<"Hack pointers!"<<endl;
    int a=3;
    int *b;
    int **c;
    b= &a;
    c= &b;
    cout<<"a : "<<a<<" b : "<<b<<" c : "<<c<<endl;
    cout<<"a : "<<a<<" *b : "<<*b<<" **c : "<<**c<<endl;
}
