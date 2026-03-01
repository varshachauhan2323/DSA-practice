#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<endl;
        vector<vector<char>>vec(8,vector<char>(8));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>vec[i][j];
            }
        }
        bool redstripe=false;
        for(int i=0;i<8;i++){
                            bool fullrow=true;

            for(int j=0;j<8;j++){
                if(vec[i][j]!='R'){
                    fullrow=false;
                    break;
                }
            }
            if(fullrow){
                redstripe=true;
                break;
            }
        }
        if(redstripe) cout<<"R"<<endl;
        else cout<<"B"<<endl;
    }
    return 0;
}