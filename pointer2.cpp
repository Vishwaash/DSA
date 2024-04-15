#include<iostream>
using namespace std;
int main(){
    int arr[5] ={1,2,3,4,5};
    int *ptr = arr;
    //print the address of first element
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    //print the address of first index or second element
    cout<<arr+1<<endl;
    cout<<&arr[1]<<endl;

    //print the value of address 0
    cout<<*arr<<endl;
    cout<<*(arr+0)<<endl;
    cout<<arr[0]<<endl;
    //print all the address
    for(int i=0;i<5;i++){
        cout<<(arr+i)<<endl;
    }
    //print all the values
    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl;
    }
}