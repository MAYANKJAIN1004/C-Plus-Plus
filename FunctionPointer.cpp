#include<iostream>
using namespace std;

void EndOfProg()
{
    cout<<"End Of Main!";
}

void Swap(int &i, int &j){
    int tmp = i;
    i=j;
    j=tmp;
    atexit(EndOfProg);
}


int main(){
    cout<<"Main Satart!\n\n";
    void(*Fptr)(int&,int&) = Swap;//Same as &Swap
    auto a = 10;
    auto b = 20;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    Fptr(a,b);
    (*Fptr)(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}