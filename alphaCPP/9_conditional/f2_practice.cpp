#include<iostream>
using namespace std;

int main(){
    int a = 24;
    int b = 124;

    if (a > b){
        cout << "a is greater ";
    }else{
        cout << "b is greater ";
        
    }

    if (a % 2 == 0)
    {
        cout << " and even";
    }else{
        cout << " a is odd";
    }    
    
    return 0;
}