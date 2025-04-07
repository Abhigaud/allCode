#include<iostream>
using namespace std;
void printArr(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

void reverseArr(int *arr, int n){
   
    int start = 0, end = n-1;
   while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end ] = temp;
        start++;
        end--; 
    }
    
    // printArr(arr, n);
}

int main(){
    int arr[] = {5, 4, 3, 9, 2, 7};
    int n = sizeof(arr)/sizeof(int);
    
    
    reverseArr(arr, n);
    printArr(arr, n);
    
    return 0;
}