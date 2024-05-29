// take 3 positive integer input and print the greates of them

#include <iostream>

using namespace std;
int main(){
    int x,y,z;
    cout<<"enter first no: ";
    cin>>x;
    cout<<"enter second no: ";
    cin>>y;
    cout<<"enter third no: ";
    cin>>z;
    if(x>y and x>z){
        cout<<x<<" is greatest";
    }
    else if (y>x and y>z){
        cout<<y<<" is  greatest";
    }
    else {
        cout<<z<<" is greatest";
    }    
    }