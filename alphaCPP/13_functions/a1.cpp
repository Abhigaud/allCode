#include<iostream>
#include<cmath>
using namespace std;

// Question1 : Write a function to check if a number is a palindrome in C++. (121 is a palindrome, 321 is not)
int reverse(int n ){
    int res =0;
    while (n>0){
        int ld = n %10;
        res = res*10 +ld;
        n= n/10;
    }
    return res;
}

bool isPalindrome(int num){
    int revNum = reverse(num);
    
    return num == revNum;
}

// Question2 : Write a function to calculate the sum of digits of a number
int sumOfDigit(int n){
    int sum =0;
    while(n>0){
        int ld = n%10;
        sum += ld;
        n = n/10;
    }
    return sum;
}

// Question 3 : Write a function which takes 2 numbers as parameters (a&b) and outputs : a^2 + b^2+ 2*ab.
int mathAB(int a, int b){
    int outPut = (a*a) + (b*b) + (2*a*b);
    return outPut;
}

// Question 4 : Write a function that prints the largest of 3 numbers
int largestOf3(int a, int b, int c){
    if (a>b && a>c){
        return a;
    }else if (b>c && b>a){
        return b;
    }else{
        return c;
    }
}

// Question 5 : Write a function that accepts a character (ch) as parameters &returns the character that occurs after ch in the English alphabet. 
// Eg: input = ‘c’ , return value = ‘d’
// Note : for ch = ‘z’, return ‘a’
char getNextChar(char ch){
    if (ch == 'z'){
        return 'a';
    }else{
        return ch +1;
    }
}

int main(){
    // cout<< isPalindrome(12371) <<endl;
    // cout<< sumOfDigit(12357) <<endl;
    // cout<< mathAB(4,5) <<endl;
    // cout<< largestOf3(4,51,7) <<endl;
    cout<< getNextChar('v') <<endl;

}