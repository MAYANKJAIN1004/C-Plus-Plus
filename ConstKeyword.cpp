#include<iostream>
using namespace std;

int main(){
    cout<<"Main Start!\n";
//     const float PI=3.14f;
//     /*
//     PI=2.14;//not allowed - Can not modify const variable's values
//     float *ptr = &PI;//Only const pointers can point to const variables 
//     *ptr = 2.14f;//to avoid modification using *ptr = 2.14
//     */
//    const float *ptr = &PI;
//    float xPI = 3.1432f;
//    ptr = &xPI;//Allowed bcs only *ptr is const not ptr

//    const float *const cptr = &PI;
//    /*
//    cptr = &xPI; // Not allowed bcs *cptr and cptr both const
//    *cptr = 10.5f;
//    */

//    //Try to modify x1 & x2 and see the compilation output
    int x = 5;
    const int MAX = 12 ;
    int &ref_x1 = x ;
    const int &ref_x2 = x ;
    ref_x1 = MAX;
    // XX -->> ref_x2 = MAX;
    
    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;
    const int * const ptr3 = &x ;
    ptr1 = &MAX;
    // XX-->> *ptr1=10;
    *ptr2 = 10;
    // XX --> ptr2 = MAX;
    int const*ptr = &MAX;
    
    //Find which declarations are valid. If invalid, correct the declaration
    const int *ptr4 = &MAX ;
    // XX -->> int *ptr4 = &MAX ;
    
    const int &r1 = ref_x1 ;
    // XX -->> int &r2 = ref_x2 ;
    
    // int *(&p_ref1) = ptr1 ;
    // const int*&p_ref2 = ptr2 ;
  cout<<"Main End!\n";
  return 0;
}