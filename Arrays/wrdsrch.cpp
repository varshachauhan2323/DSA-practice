#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>a(n),b(n),c(n);
        unordered_map<string,int>freq;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
                for(int i=0;i<n;i++) cin>>c[i];
                for(auto word:a){
                    freq[word]++;
                }
                  for(auto word:b){
                    freq[word]++;
                }
                  for(auto word:c){
                    freq[word]++;
                }
                int score1=0;
                int score2=0;
                int score3=0;
                for(auto word:a){
                     if (freq[word]==1) score1+=3;
                     else if (freq[word]==2 )score1+=1;
                }
                 for(auto word:b){
                     if (freq[word]==1) score2+=3;
                     else if (freq[word]==2) score2+=1;
                }
                 for(auto word:c){
                     if (freq[word]==1) score3+=3;
                     else if (freq[word]==2) score3+=1;
                }
                 cout<<score1<<" "<<score2<<" "<<score3<<endl;
                 

    }
    return 0;
}