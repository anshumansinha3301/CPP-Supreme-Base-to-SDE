// take positive integer input and tell if it is divisible by 5 or 3

#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    if (n%5==0 or n%3==0){
        cout<<"divisible by 5 or 3";
    }
    else{
        cout<<"not divisible by 5 or 3";
    }
}