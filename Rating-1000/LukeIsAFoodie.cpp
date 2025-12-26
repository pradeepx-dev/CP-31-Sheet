#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int minn=v[0], maxx=v[0];
    int cnt=0;
    for(int i=0;i<n;i++){
        

        if(v[i]<minn) minn=v[i];
        if(v[i]>maxx) maxx=v[i];
        if((maxx-minn)>(2*x)){
            cnt++;
            minn=v[i];
            maxx=v[i];
        }
    }
    cout<<cnt<<endl;
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