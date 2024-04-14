#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of elements in the array"<<" ";
    cin>>n;
    int arr[n];
    int sum = 0;
    float avg;
    cout<<"Enter the elements in the array"<<endl;
    for(int i = 0 ; i<n;i++){
        cout<<"Enter a number"<<" "<<endl;
        cin>>arr[i];}
        cout<<"The elements of the array are:"<<" ";
    for(int i = 0 ; i<n;i++){
            cout<<arr[i];
        }
    //now for the sum of the array
    for(int i = 0;i<n;i++){
        sum+= arr[i] ;
    }
    avg = sum/n;
    cout<<"The sum of the elements of the array is "<<sum<<endl;
    cout<<"The average of the array is "<<avg<<endl;
    return 0;
}