/* if cost price and selling price of an item is input through the keyboard, write a program to determine whether
the seller has made profit or incurred lost or no profit no loss. Also determing how much profit he made
or loss he incurred*/

#include <iostream>

using namespace std;
int main(){
    int cp;
    cout<<"enter cost price: ";
    cin>>cp;
    int sp;
    cout<<"enter selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit is "<<sp-cp;
    }
    if(sp<cp){
        cout<<"loss is "<<cp-sp;
    }
    if(sp==cp){
        cout<<"no profit no loss"<<endl;
    }
}