// Question 5 : For a positive N,WAP that prints the first N Fibonacci numbers. (Assume N >= 2) Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ....This is a series where each number is a sum of previous 2 numbers in the series. 
// Eg: 1 = 0+1, 
//     2 = 1+1,
//     3 = 1+2,
//     5 = 2+3,
//     8 = 3+5 & so on.

#include<iostream>
using namespace std;
int main(){
    int N = 10;
    int first = 0;
    int second = 1;
    cout << first <<" "<< second <<" ";
    
    for (int i = 2; i <= 10; i++)
    {
        int third = first + second;
        cout << third <<" ";
        first = second;
        second = third;
    }
    
}