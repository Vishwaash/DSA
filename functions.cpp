#include<iostream>
using namespace std;
double myFunction(double a, double b,string fname = "sum"){
    if(fname == "sum"){
        return a+b;
    }
    else if(fname == "subtract"){
        if(a>b){
            return a-b;
        }
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
    double z = myFunction(3.14, 3.45, "multiply");
    cout<<z;
    return 0;
}