#include <iostream>
#include <climits>
using namespace std;

void trapWater(int *arr, int n){

    // calculate left boundry -----
    int leftMax[n] ;
    leftMax[0] = arr[0];
    for (int i = 1; i < n; i++){
        leftMax[i] = max(leftMax[i-1], arr[i-1]);
    }
    
    // calculate right boundry -----
    int rightMax[n] ;
    rightMax[n-1] = arr[n-1];
    for (int i = n-2; i >= 0; i--){
        rightMax[i] = max(rightMax[i+1], arr[i+1]);
    }

    int waterTrapped = 0;
    for (int i = 0; i < n; i++){
        int currWater = min(leftMax[i], rightMax[i]) - arr[i];
        if (currWater > 0){
            waterTrapped += currWater;
        }
    }
    
    
    cout<<waterTrapped<<endl;
    
}



int main(){
    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(arr)/sizeof(int);
    trapWater(arr, n);

}