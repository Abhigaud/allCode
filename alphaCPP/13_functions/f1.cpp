#include <iostream>
#include<cmath>

using namespace std;
void sayHello(){
    cout << "Hello : )\n";
}

int sumAb(int a, int b){
    int sum = a+b;
    return sum;
}

double sumAb(double a, double b){
    double sum = a+b;
    return sum;
}

int product (int a, int b){
    return a*b;
}

void OddEven(int a){
    if (a%2==0)
    {
        cout<<"even"<<endl;   
    }else{
        cout<<"odd"<<endl;   
    }
}

int factorial(int a){
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact*i;
    }
    return fact;
    
}
bool primeOrNot(int n){
    if(n==1){
        return false;
    }
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int binCoeff(int n, int r){
    int nCr = factorial(n)/(factorial(r) * factorial (n-r));

    return nCr;
}

void primeInRange(int range){
    for (int i = 2; i <=range; i++)
    {
        if(primeOrNot(i)){
            cout << i<< " ";
        }
    }
    cout<<endl;
    
}
int main(){
    // sayHello();
    
    int a = 5, b = 6;
    int sum = sumAb(a, b);
    // cout << sum<<endl;
    
    // product(a, b);
    // OddEven(a);
    // cout<<factorial(a);    
    // cout<<primeOrNot(a)<<endl;    
    // cout<<primeOrNot(b)<<endl;    
    // cout<<binCoeff(4,2)<<endl;    
    // cout<<sumAb(1.3, 4.3)<<endl;    
    primeInRange(30);
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}