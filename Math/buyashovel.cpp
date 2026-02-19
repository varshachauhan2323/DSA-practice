#include<iostream>
using namespace std;
int main(){
    int k;
    int r;
    cin>>k>>r;
    for(int i=1;i<=10;i++){
        int lastdigit=(i*k)%10;
        if(lastdigit==0||lastdigit==r){
            cout<<i;
            break;
        }
    }
    return 0;
}