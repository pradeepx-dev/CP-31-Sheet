#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> m(n);
        for(int i=0;i<n;i++){
            int a; cin>>a;
            m[i]= {-1*(a%k==0?k:a%k),i+1};
        }
        sort(m.begin(), m.end());
        for(int i=0;i<n;i++){
            cout<<m[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}