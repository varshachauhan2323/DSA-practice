#include<iostream>
using namespace std;
int main(){
    int n;
    long long d;
    cin>>n>>d;
    long long icecream=d;
    int distressed=0;
    while(n--){
        char ch;
        int x;
        cin>>ch>>x;
        if(ch=='+') icecream+=x;
        else{
            if(x<=icecream){
                icecream-=x;
            }
            else{
                distressed++;
            }
        }
    }
    cout<<icecream<<" "<<distressed;
    return 0;
}