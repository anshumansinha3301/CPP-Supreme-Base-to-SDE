/* take input percentage of a student and print the grade according to marks
1) 81-100 very good
2) 61-80 good
3)41-60 Average
4)<=40 fail*/
// else if ladder

#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter marks: ";
    cin>>n;
    if (n>=81 and n<=100) {
        cout<<"very good";
    }
    else if (n>=61){
        cout<<"good";
    }
    else if(n>=41){
        cout<<"average";
    }
    else {
        cout<<"fail";
    }
}

