#include <iostream>
using namespace std;
int main(){
    int age ;
    cout <<"enter Age : "<< endl;
    cin >> age;

    bool isAdult = age >= 18 ? true : false;

    cout << isAdult<< endl;
}