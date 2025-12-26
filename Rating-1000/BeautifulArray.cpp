#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define popb pop_back

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        vector<ll> ans;
        if (s < k*b || s > k*b + (k-1)*n) {
            cout << -1 << "\n";
            continue;
        }

        else {
            ll a = k * b;
            if(s>= a+k-1){
                ans.pb(a+k-1);
                s=s-(a+k-1);
            }
            else{
                ans.pb(a);
                s=s-a;
            }
            n--;
            while(n>0){
                if(s>0 && s>=k-1){
                    ans.pb(k-1);
                    s=s-(k-1);
                }
                else ans.pb(s), s=0;
                n--;
            }
        }
        for(auto x: ans) cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}