/*first method*/
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int>& v){
//     int n = v.size();
//     int no0 = 0;
//     int no1 = 0;
//     for(int i =0; i<n; i++){
//         if(v[i] == 0) no0++;
//         else no1++;
//     }
//     // filling elements
//     for(int i =0; i<n; i++){
//         if(i < no0) v[i] = 0;
//         else v[i] = 1;
//     }
// }
// int main(){
//     vector<int> v;
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);

//     for(int i =0; i<v.size(); i++){
//         cout << v[i] <<" ";
//     }
//     cout << endl;
//     // kaam
//     sort01(v);
//     for(int i =0; i<v.size(); i++){
//         cout << v[i] <<" ";
//     } 
// }


// ---------------------------
/* second method */
// #include<iostream>
// #include<vector>
// using namespace std;
// void sort01(vector<int>& v){
//     int n = v.size();
//     int i = 0;
//     int j = n-1;
//     while(i<j){
//         if(v[i]==1 && v[j]==0){
//             v[i] = 0;
//             v[j] = 1;
//             i++;
//             j--;
//         }
//         if(v[i] == 0) i++;
//         if(v[j] == 1) j--;
//     }
// }
// int main(){
//     vector<int> v;
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(1);
    // v.push_back(0);

//     for(int i =0; i<v.size(); i++){
//         cout << v[i] <<" ";
//     }
//     cout << endl;
//     // kaam
//     sort01(v);
//     for(int i =0; i<v.size(); i++){
//         cout << v[i] <<" ";
//     } 
// }

//---------------------try kr raha fir se-----------
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    int n = v.size();
    for(int i =0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sort01(vector<int>& v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i] == 0){
            i++;
        }else if(v[j] == 1){
            j--;
        }else if(v[i] == 1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    display(v);
    sort01(v);
    display(v);
}