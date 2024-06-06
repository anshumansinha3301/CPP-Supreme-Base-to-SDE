// take integer input and print the absolute value of that integer (absolute value means negative no >> positive )     
    
#include <iostream>

using namespace std;
int main() {
    int n;
    cout<<"enter n: ";
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else {
        cout<<-n;
    }
}
