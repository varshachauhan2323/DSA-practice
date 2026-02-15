#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string c;
    cin>>c;
    int i=0;
    int j=0;
    while(i<s.length()){
        if(tolower(s[i])<tolower(c[j])) {cout<<-1;
        return 0;}
        else if(tolower(s[i])>tolower(c[j])){
            cout<<1;
            return 0;
        }
        i++;
        j++;
    }
    cout<<0;
    return 0;
    
}