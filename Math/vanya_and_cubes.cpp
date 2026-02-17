#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int level=0;
    int sum=0;
    while(true){
        level++;
        sum+=(level)*(level+1)/2;
        if(sum>n) break;
    }
    cout<<level-1;
    
    
    
    
    
    return 0;
}