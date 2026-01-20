#include<iostream>
using namespace std;

int main(int argc,char* argv[])
{
    int i = 10;
    int* iptr = &i;

    cout<<"Address of i : "<<&i<<endl;
    cout<<"Address of iptr : "<<&iptr<<endl;
    cout<<"Address in iptr : "<<iptr<<endl;
    cout<<"Value in i : "<<i<<endl;
    cout<<"Value at iptr : "<<*iptr<<endl;

    int x = *iptr;

    void *vptr = nullptr;

    *iptr = 20;

    cout<<"Value in x : "<<x<<endl;
    cout<<"Value at iptr : "<<*iptr<<endl;

    if(vptr == nullptr)
        cout<<"vptr is null pointer! and Value in vptr is : "<<vptr<<endl;
    return 0;

    /*  Address of i : 0xb6cbbffb9c
        Address of iptr : 0xb6cbbffb90
        Address in iptr : 0xb6cbbffb9c
        Value in i : 10
        Value at iptr : 10
        Value in x : 10
        Value at iptr : 20
        vptr is null pointer! and Value in vptr is : 0 
    */
}