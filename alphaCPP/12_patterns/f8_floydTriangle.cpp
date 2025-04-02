#include<iostream>
using namespace std;
int main(){
    int n = 4;
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++){
            cout<<f<<"  ";
            f++;
        }
        cout<<endl;
    }
    
    return 0;
}