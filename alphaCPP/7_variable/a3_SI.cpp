#include <iostream>
using namespace std;
int main(){
    float p,r,t;

    cout << "enter principal :"<< endl;
    cin >> p;

    cout << "enter rate :"<< endl;
    cin >> r;

    cout << "enter time :"<< endl;
    cin >> t;

    float SI = (p*r*t)/100;

    cout << SI <<endl;
    
}