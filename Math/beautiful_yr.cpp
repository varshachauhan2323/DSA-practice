#include<iostream>
using namespace std;

bool distinct(int year){
    int d1 = year % 10;
    int d2 = (year / 10) % 10;
    int d3 = (year / 100) % 10;
    int d4 = (year / 1000) % 10;

    if(d1!=d2 && d1!=d3 && d1!=d4 &&
       d2!=d3 && d2!=d4 &&
       d3!=d4)
        return true;

    return false;
}

int main(){
    int j;
    cin>>j;

    for(int i=j+1;i<=9999;i++){
        if(distinct(i)){
            cout<<i;
            break;
        }
    }
    return 0;
}