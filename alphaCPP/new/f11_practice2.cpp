#include<iostream>
using namespace std;
int main(){
    int n = 10829;
    int sum = 0;
    int result = 0;
    while (n > 0)
    {
        int ld= n%10;
        result = result*10+ ld;
        n/=10;
    }

    cout <<result;

          
}