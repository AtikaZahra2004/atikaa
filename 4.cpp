#include <iostream>
using namespace std;
int main(){
    int mrp;
    cout<<"enter mrp";
    cin>>mrp;
    if(mrp==2000){
        int cashback=200;
        cout<<"selling price "<<mrp-cashback;
    }
    else if(mrp>2000){
        int cashback=500;
        cout<<"selling price "<<mrp-cashback;
    }
    else{
        cout<<"invalid";
    }
}