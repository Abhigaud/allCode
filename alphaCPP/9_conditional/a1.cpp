// Question1: Write a C++ program to get a number from the user and print whether it's positive, negative or zero.
#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"enter number : ";
    cin >> a;

    if (a > 0){
        cout << "positive number!"<<endl;
    }
    else if (a < 0){
        cout << "negetive number!"<<endl;
    }else{
        cout << "zero!"<<endl;
    }
    return 0;
    
}