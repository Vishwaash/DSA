#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    // inputing the numbers from the user
    for(int i = 0 ; i<n;i++){
        cout<<"enter a number"<<endl;
        cin>>arr[i];
    }
    // outputing the array
     cout<<"The Elements of the array are "<<endl;
    for(int i = 0;i<n;i++){
        cout<<" "<<arr[i]<<" ";
    }
    int largest_element = arr[0];
        for(int i= 0; i<n; i++){
        if(arr[i]<arr[i+1]){
            largest_element = arr[i+1];
        }
        else{
            largest_element = arr[i];
        }
    }
    cout<<"The largest element of the array is "<<largest_element<<endl;
    return 0;
}