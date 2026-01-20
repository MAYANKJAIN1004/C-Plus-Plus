#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int &ref = x;//x is referent and ref is reference

    cout<<"Address of x : "<<&x<<endl;
    cout<<"Address of ref : "<<&ref<<endl;
    cout<<"Value of x : "<<x<<endl;
    cout<<"Value at ref : "<<ref<<endl;

    ref = 20;
    cout<<"Address of x : "<<&x<<endl;
    cout<<"Address of ref : "<<&ref<<endl;
    cout<<"Value of x : "<<x<<endl;
    cout<<"Value at ref : "<<ref<<endl;

    x = 30;
    cout<<"Address of x : "<<&x<<endl;
    cout<<"Address of ref : "<<&ref<<endl;
    cout<<"Value of x : "<<x<<endl;
    cout<<"Value at ref : "<<ref<<endl;

    int y = 40;
    ref = y;

    cout<<"Address of x : "<<&x<<endl;
    cout<<"Address of ref : "<<&ref<<endl;
    cout<<"Value of x : "<<x<<endl;
    cout<<"Value at ref : "<<ref<<endl;

    return 0;
}