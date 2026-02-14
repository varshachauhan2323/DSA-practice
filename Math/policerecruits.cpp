#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int availablepolice=0;
    int untreatedcrimes=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x; 
    if(x==-1){
        if(availablepolice>0) availablepolice--;
        else untreatedcrimes++;
    }
    else availablepolice+=x;
    }
    cout<<untreatedcrimes;
    return 0;
}