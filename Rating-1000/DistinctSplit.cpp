#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> map1,map2;
    int var=0;
    for(auto i:s)map1[i]++;
    for(int i=0;i<n-1;i++){
        map2[s[i]]++;
        map1[s[i]]--;
        if(map1[s[i]]==0)map1.erase(s[i]);
        int len1=map1.size();
        int len2=map2.size();
        var=max(var,len1+len2);
    }
    cout<<var<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}