#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout <<"Enter base : ";
    cin >> a;
    cout <<"Enter exponent : ";
    cin >> b;
    int power = 1;
    for(int i=1; i<=b; i++){
        power*=a;
    }
    cout << a << " raised to the power "<<b<<" is "<<power;
}