#include<iostream>
using namespace std;
int main(){

    int x = 2;
    int y = 5;
    int exp1 = (x * y / x);
    int exp2 = (x * (y / x));

    cout  << exp1 << endl;
    cout  << exp2 << endl;
    
    return 0;
}