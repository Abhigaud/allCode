#include <iostream>
#include <climits>
using namespace std;
int maxProfit(int *arr, int n){
    int buyPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++){
        if (buyPrice < arr[i]){
            int profit = arr[i] - buyPrice;
            maxProfit = max(maxProfit, profit);
        }else{
            buyPrice = arr[i];
        }
    }
    return maxProfit;
}

void maxProfito(int *arr, int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for (int i = 0; i < n; i++){
        bestBuy[i] = min(bestBuy[i-1], arr[i-1]);
    }

    int maxProfit = 0;
    for (int i = 0; i < n; i++){
        int currProfit = arr[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit );
    }

    cout<< "max Profit = " << maxProfit << endl;
    
}

int main(){
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(arr)/sizeof(int);
    cout<<maxProfit(arr, n);

}