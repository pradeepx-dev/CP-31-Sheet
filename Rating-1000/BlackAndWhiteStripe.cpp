#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin >> s;
    int i=0, j=0;
    int minn=1e6, cnt=0;
    while(j<n){
        if(s[j]=='W') cnt++;
        if(j-i+1==k){
            minn=min(minn, cnt);
            if(s[i]=='W') cnt--;
            i++;
        }
        j++;
    }
    cout << minn << "\n";
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