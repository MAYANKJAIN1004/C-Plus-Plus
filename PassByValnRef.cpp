#include<iostream>
using namespace std;

void SwapPassByValue(int a=100,int b=200){
    int tmp = a;
    a=b;
    b=tmp;
    cout<<"InSide SwapPassByValue a : "<<a<<"\tb : "<<b<<endl;
}

void SwapPassByPointer(int* p,int* q){
    int tmp = *p;
    *p = *q;
    *q = tmp;
    cout<<"InSide SwapPassByPointer a : "<<*p<<"\tb : "<<*q<<endl;
}

void SwapPassByReference(int &i,int &j){
    int tmp = i;
    i = j;
    j = tmp;
    cout<<"InSide SwapPassByReference a : "<<i<<"\tb : "<<j<<endl;
}

int main(){
    cout<<"InSide Main!\n";
    auto a=10;
    auto b=20;

    cout<<"B4 SwapPassByValue a : "<<a<<"\tb : "<<b<<endl;
    SwapPassByValue(b);
    cout<<"Af SwapPassByValue a : "<<a<<"\tb : "<<b<<endl<<endl;

    cout<<"B4 SwapPassByPointer a : "<<a<<"\tb : "<<b<<endl;
    SwapPassByPointer(&a,&b);
    cout<<"Af SwapPassByPointer a : "<<a<<"\tb : "<<b<<endl<<endl;

    cout<<"B4 SwapPassByReference a : "<<a<<"\tb : "<<b<<endl;
    SwapPassByReference(a,b);
    cout<<"Af SwapPassByReference a : "<<a<<"\tb : "<<b<<endl<<endl;
    return 0;
}

