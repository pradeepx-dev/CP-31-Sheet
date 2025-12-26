#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    int max2=2, t=n;
    while(max2*2<n) max2*=2; 

    vector<int> res;
    for(int i=n-1; i>=max2; i--) res.push_back(i);
    res.push_back(0);
    for(int i=1; i<max2; i++) res.push_back(i);
    for(auto x: res) cout<<x<<" ";
    cout<<"\n";
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