#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int i = 0;
    int j = 5;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int k = 0;k<6;k++){
        cout<<arr[k]<<endl;
    }
}