#include <iostream>
using namespace std;
int main(){
    int capacity;
    cout<<"enter ur water tank capacity";
    cin>>capacity;
    if(capacity>=75 && capacity<=100){
        cout<<"full tank";
    }
    else if(capacity>=50 && capacity<75){
        cout<<"three-fourth full tank";
    }
        else if(capacity>=25 && capacity<50){
        cout<<"half full tank";
    }
        else if(capacity>=0 && capacity<25){
        cout<<"quator full tank";
    }
    else{
        cout<<"invalid";
    }
}