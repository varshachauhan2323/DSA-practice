#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int y,w;
    cin>>y>>w;
    int maxi=max(y,w);
    int favourable=6-maxi+1;
    int total=6;
    int gcdd=__gcd(favourable,total);
    cout<<(favourable/gcdd)<<"/"<<(total/gcdd);
    return 0;
}