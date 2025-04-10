// little optimised -------------------------

#include<iostream>
#include <climits>
using namespace std;
int main(){
     int arr[] = {2, -3, 6, -5, 4, 2};
     int n = sizeof(arr)/sizeof(int);

     int maxSum = INT_MIN;

     for (int start = 0; start < n; start++)
     {
         int currSum =0;
        for (int end = start; end < n ; end++)
        {
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
        // cout<<endl;
     }

     cout << "maximum subarray sum = "<< maxSum << endl;
}