#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int cnt=0;
    while(x>=5){
        x-=5;
        cnt++;
    }
     while(x>=4){
        x-=4;
        cnt++;
    }
     while(x>=3){
        x-=3;
        cnt++;
    }
     while(x>=2){
        x-=2;
        cnt++;
    }
     while(x>=1){
        x-=1;
        cnt++;
    }
    cout<<cnt;
    return 0;
}