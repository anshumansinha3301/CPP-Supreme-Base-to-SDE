// take 3 number input and tell if they can be the sides of triangle

#include <iostream>

using namespace std;
int main(){
    int x,y,z;
    cout<<"enter first side: ";
    cin>>x;
    cout<<"enter second side: ";
    cin>>y;
    cout<<"enter third side: ";
    cin>>z;
    if(x+y>z and y+z>x and x+z>y){
        cout<<"valid triangle";
    }
    else {
        cout<<"invalid triangle";
    }

}