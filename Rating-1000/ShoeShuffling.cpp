#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int flag=1;
    for(int i=0;i+1<n;i++){
        if(i==0 && a[i+1] != a[i]){
            cout<<-1<<"\n";
            flag=0;
            break;
        }
        if(i!=0 && a[i+1] != a[i] && a[i] != a[i-1]){
            cout<<-1<<"\n";
            flag=0;
            break;
        }
    }
    if((n>=2 && a[n-2] != a[n-1] && flag==1)||n==1){
        cout<<-1<<"\n";
        flag=0;
    }
   if(flag){
        int prev=1;
       for(int i=0;i+1<n;i++){
          if(a[i]==a[i+1]){
            cout<<i+2<<" ";
          }
          else{
            cout<<prev<<" ";
            prev=i+2;
          }
       }
       cout<<prev;
       cout<<"\n";
   } 
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