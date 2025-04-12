// leetcode 33
#include <iostream>
using namespace std;

int linearSearch(int *nums, int n , int target){
    for (int i = 0; i < n; i++)
    {
        if (target == nums[i])
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int nums[] = {4,5,6,7,0,1,2};
    int n = sizeof(nums)/sizeof(int);
    int target = 1;
    cout << linearSearch(nums, n , target);
    cout<<endl;
}