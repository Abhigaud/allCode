#include <iostream>
using namespace std;
int main(){
    int a ;
    int b ;
    char op ;

    cout <<"enter value of A : "<< endl;
    cin >> a;
    cout <<"enter value of B : "<< endl;
    cin >> b;
    cout <<"enter operator (+, -, *, /, %) : "<< endl;
    cin >> op;

    switch (op){
        case '+': cout << "a + b = "<< (a+b) <<endl;
            break;
        case '-': cout << "a - b = "<< (a-b) <<endl;
            break;
        case '*': cout << "a * b = "<< (a*b) <<endl;
            break;
        case '/': cout << "a / b = "<< (a/b) <<endl;
            break;
        case '%': cout << "a % b = "<< (a%b) <<endl;
            break;
        
        default:
        cout << "invalid" <<endl;
            break;
        }
    
}