    #include<iostream>
    #include<string>
    #include<vector>
    #include<algorithm>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            string s;
            cin>>s;
            vector<int>ans;
            int cnt=0;
            for(char c:s){
                if(c=='1'){
                    cnt++;
                }
                else{
                    if(cnt>0){
                    ans.push_back(cnt);
                    cnt=0;}
                }}
                if(cnt>0 ) ans.push_back(cnt);
                sort(ans.begin(),ans.end(),greater<int>());
                int alice=0;
                for(int i=0;i<ans.size();i+=2){
                    alice+=ans[i];
    
            }
            cout<<alice<<endl;
        }
        return 0;
        
    }