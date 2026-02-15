#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    string c;
    for(char ch:s){
        char lower=tolower(ch);
        if(lower!='a'&&lower!='e' &&lower!='i'&&lower!='o'&&lower!='u'&& lower!='y'){
            c+='.';
            c+=lower;
        }
        
        
    }
    cout<<c;

    
    
    
    
    
    return 0;
}