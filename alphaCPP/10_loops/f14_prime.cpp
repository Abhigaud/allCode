#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int num ;    
    cout <<"enter number : "<<endl;
    cin >> num;
    bool isPrime = true;

    for (int i = 2; i < sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime == true)
    {
        cout << "prime";
    }else{
        cout << "not prime";
    }
    
    
        
    
    
    return 0;
          
}