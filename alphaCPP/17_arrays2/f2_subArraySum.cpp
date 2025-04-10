#include<iostream>
#include <climits>
using namespace std;
int main(){
     int arr[] = {2, -3, 6, -5, 4, 2};
     int n = sizeof(arr)/sizeof(int);

     int maxSum = INT_MIN;

     for (int start = 0; start < n; start++)
     {
        for (int end = start; end < n ; end++)
        {
            int currSum =0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout<<currSum<<", ";
            maxSum = max(maxSum, currSum);
        }
        cout<<endl;
     }

     cout << "maximum subarray sum = "<< maxSum << endl;
     
}