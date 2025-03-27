#include<iostream>
using namespace std;
int main(){
    int n = 153;
    int n1 = n;
    int cube=0;
    while (n>0)
    {
        int ld = n%10;
        cube += (ld*ld*ld);
        n/=10;
    }

    if (cube == n1)
    {
        cout<<"armstrong";
    }else{
        cout<<"not armstrong";
    }
    
    
}