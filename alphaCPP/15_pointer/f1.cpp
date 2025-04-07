#include<iostream>
using namespace std;

void changes(int a){
    a= 20;
    cout << a<<endl;
}

void changeA(int *ptr){
    *ptr= 20;
    cout << *ptr <<endl;
}

void changeB(int &a){
    a= 20;
    cout << a <<endl;
}

int main(){
    // int a =10;
    // cout << &a << "\n";
    // ----------------------------
    // int *ptr = &a;
    // int *ptr1 = NULL;
    
    // int **pptr = &ptr;
    // cout << ptr << "\n";
    // cout << *ptr << "\n";
    // cout << ptr1 << "\n";
    // cout << pptr << "\n";
    
    //------------------------------------
    int a =10;
    // changes(a);
    // changeA(&a);
    changeB(a);
    cout << a<<endl;
    
    //------------------------------------
    
    
    
    
    
    
    
    
    return 0;
}