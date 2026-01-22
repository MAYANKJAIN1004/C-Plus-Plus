#include<iostream>
using namespace std;

void EndOfProg()
{
    cout<<"End Of Main!";
}

void Swap(int &i, int &j){
    cout<<"InSide Swap!\n";
    int tmp = i;
    i=j;
    j=tmp;
}

void PassingFptrAsParm(void (*Fptr)(int&,int&),int& a,int& b){
    cout<<"InSide PassingFptrAsParm!\n";
    Fptr(a,b);
}

int Add(int i,int j){
    return i+j;
}
int Sub(int i,int j){
    return i-j;
}

//typedef int (*RetFptr)(int,int);

int (*ReturningFunPointer(int i))(int,int){
    cout<<"ReturningFunPointer!\n";
    if(i==1)
        return Add;
    else
        return Sub;
}
int Check(const void* i,const void* j){
    int l = *(const int*)i;
    int r = *(const int*)j;
    return l>r;
}
int main(){
    cout<<"Main Satart!\n\n";
    atexit(EndOfProg);
    auto a = 10;
    auto b = 20;
    cout<<"a = "<<a<<" b = "<<b<<endl;
//1. Function Pointer
    void(*Fptr)(int&,int&) = Swap;//Same as void(*Fptr)(int&,int&) = &Swap;   
    (*Fptr)(a,b); //Same as Fptr(a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
//2. Passing Function Pointer as a variable to a function
    PassingFptrAsParm(Swap,a,b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
//3. Return Function Pointer from a Function
    int (*RecvFPtr)(int,int);
    RecvFPtr = ReturningFunPointer(1);
    cout<<"Add : "<<RecvFPtr(a,b)<<endl;
    RecvFPtr = ReturningFunPointer(2);
    cout<<"Sub : "<<RecvFPtr(a,b)<<endl;
//4. Array of Function Pointers
    int (*FptrArr[2])(int,int) = {Add,Sub};
    cout<<"FptrArr[0] : "<<FptrArr[0](a,b)<<endl;
    cout<<"FptrArr[1] : "<<FptrArr[1](a,b)<<endl;
//5. Use of Function Pointer
    int arr[5]{10,20,70,90,30};
    qsort(arr,(sizeof(arr)/sizeof(arr[0])),sizeof(arr[0]),Check);

    for(int &x : arr)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}