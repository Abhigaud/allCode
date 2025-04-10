// little optimised -------------------------

#include<iostream>
#include <climits>
using namespace std;
int main(){
     int arr[] = {2, -3, 6, -5, 4, 2};
     int n = sizeof(arr)/sizeof(int);

     int maxSum = INT_MIN;
     int currSum =0;

     for (int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if (currSum < 0){
            currSum = 0;
        }
     }

     cout << "maximum subarray sum = "<< maxSum << endl;
}