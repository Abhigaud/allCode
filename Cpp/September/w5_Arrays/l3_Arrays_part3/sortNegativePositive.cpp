/*: Move all negative numbers to beginning and
positive to end with constant extra space.*/
// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>& v){
//     for(int i =0; i<v.size(); i++){
//         cout << v[i] <<" ";
//     }    
// }
// void sortNegative(vector<int>& v){
//     int n = v.size();
//     int i =0;
//     int j =n-1;
//     while (i<j){
//         if(v[i] < 0) i++;
//         else if(v[j] > 0) j--;
//         else if(v[i] >0 && v[j]<0){
//             int temp = v[i];
//             v[i] = v[j];
//             v[j] = temp;
//             i++;
//             j--;
//         }
//     }
    
// }
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(-2);
//     v.push_back(3);
//     v.push_back(-4);
//     v.push_back(-5);
//     v.push_back(6);
//     v.push_back(8);

//     display(v);
//     cout << endl;
//     // kaam
//     sortNegative(v);
//     display(v);    
// }


//-----------------------------
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int>& v){
    int n = v.size();
    int i = 0; 
    int j = n-1;
    while(i<j){
        if(v[i] < 0){
            i++;
        }else if(v[j]>0){
            j--;
        }else if(v[i]>0 && v[j]<0){
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}
void display(vector<int>& v){
    int n = v.size();
    for(int i =0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    display(v);
    sort(v);
    display(v);
}
