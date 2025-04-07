#include<iostream>
using namespace std;
int findLargest(int arr[], int n){
    
    int max = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    return max;
    
}

int main(){
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) /sizeof(int);
    cout<< findLargest(arr, n);


    // int max = arr[0];
    // for (int i = 0; i < n; i++){
    //     if (arr[i] > max){
    //         max = arr[i];
    //     }
    // }
    // cout<<max;

    return 0;
}