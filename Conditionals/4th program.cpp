// check if a no is three digit or not

#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    if (n>99 and n<1000){
        cout<<"3 digit number";
    }
    else{
        cout<<"not a 3 digit number";
    }
}