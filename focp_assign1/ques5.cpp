#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The rotated matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}