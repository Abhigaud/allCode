#include <iostream>
using namespace std;
int main() {
    float pencil, pen, eraser;
    cout << "enter cost of pencil :"<< endl;
    cin >> pencil;
    
    cout << "enter cost of pen :"<< endl;
    cin >> pen;
    
    cout << "enter cost of eraser :"<< endl;
    cin >> eraser;

    float totalBill = pencil + pen + eraser;
    cout << totalBill << endl;

    float GST = (totalBill * 18)/100;
    cout << "total bill with GST :" <<totalBill+ GST<<endl; 
    return 0;
}