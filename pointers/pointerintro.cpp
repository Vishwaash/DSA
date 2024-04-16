#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<a<<endl;
    cout<<&a<<endl;
    int *ptr1 = &a;
    cout<<ptr1<<endl;
    float c = 3.13;
    float *ptr2 = &c;
    cout<<c<<endl;
    int d = 50;
    int *ptr = &d;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}