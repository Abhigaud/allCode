#include <iostream>
using namespace std;
int main(){
    int n =4;
    //printing upper section 
    for(int i = 1; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<" *";
        }
        cout<<endl;
    }
    //printing lower section 
    for(int i = 1; i<=n-1; i++){
        for(int j =1; j<=n-i; j++){
            cout<<" *";
        }
        cout<<endl;
    }
}