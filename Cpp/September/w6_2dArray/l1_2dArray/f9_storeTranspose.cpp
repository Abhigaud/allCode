#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"enter number of rows :"<< endl;
    cin >> m;
    cout<<"enter number of columns :"<< endl;
    cin >> n;
    int arr[m][n];
    cout<<"input your matrix : "<< endl;
    for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    cout << endl;
    // print 
    for(int i=0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout << endl;

    // store transpose
    int t[n][m];
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            t[i][j] = arr[j][i];
        }
    }

    // print transpose matrix
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << t[i][j]<<" ";
        } 
        cout<<endl;
    }
    cout << endl;
}

