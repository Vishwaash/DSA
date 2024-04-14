#include<iostream>
using namespace std;
double myFun(double a, int b,string fname = "sum"){
    if(fname == "sum"){
        return a+b;
    }
    else if(fname == "subtract"){
       if(a>b){
            return a-b;}
        else{
            return b-a;
        }
    }
    else if(fname == "multiply"){
        return a*b;
    }    
    else if(fname == "division"){
        if(a>b){
            return a/b;
        }
        else{
            return b/a;
        }
    }
}

int main(){
    int a = 3;
    int b = 6;

    double z = myFun(6.14,3.23423,"subtract" );
    cout<<z;
}