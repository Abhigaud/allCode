
#include<iostream>
using namespace std;
int factorial(int n){
    int facto =1;
    for(int i=1; i<=n; i++){
        facto *=i;
    }
    return facto;
}
int combination(int n, int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n ;
    cout<<"enter value of n : "<<endl;
    cin>>n;
    for(int i =0; i<=n; i++){
        for(int j =0; j<=i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<< endl;
    }
}