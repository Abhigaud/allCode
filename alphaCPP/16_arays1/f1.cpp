#include<iostream>
using namespace std;
int main(){
    int marks[10]; //initialised with garbage value
    int marksA[12] = {10, 20, 30, 40}; // other index have '0'
    int marksB[] = {10, 20, 30, 40};

    // cout<<marksB[2]<<endl;
    // cout<<sizeof(marks) / sizeof(int)<<endl;

    // int arr[5] = {7, 5, 2, 1, 3};
    // int length = sizeof(arr)/sizeof(int);
    // for (int i = 0; i < length; i++){
    //     cout<<arr[i]<<" ";
    // }

    //-----------------------------

    int arr[5] ;
    int length = sizeof(arr)/sizeof(int);
    for (int i = 0; i < length; i++){
        cin >> arr[i];
    }
    

    return 0;
}