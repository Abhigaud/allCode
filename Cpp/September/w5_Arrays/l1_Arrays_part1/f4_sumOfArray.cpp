#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of array : ";
    cin >> n;

    cout << "enter elements of array : ";
    int arr[n];
    for(int i = 0; i<n; i++ ){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i<n; i++ ){
        sum += arr[i];
    }
    cout << sum;
}