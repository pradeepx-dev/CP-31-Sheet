#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll mini=LONG_LONG_MAX;
        ll mSum=0;
        ll Smini = LONG_LONG_MAX;
        for(ll i=0;i<n;i++){
            ll m;cin>>m;
            vector<ll> v(m);
            for(ll i=0;i<m;i++)cin>>v[i];
            sort(v.begin(),v.end());
            mini=min(mini,v[0]);
            mSum+=v[1];
            Smini =min(Smini,v[1]);
        }
        cout<<mini+mSum-Smini<<endl;
    }
    return 0;
}