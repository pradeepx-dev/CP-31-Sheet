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
        int n;
        int a=0,b=0;
        cin >>n;
        if(n%2==0){
            a=n/2;
            b=n/2;
        }
        else{
            for(int i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    a=max(i,n/i);
                    b=n-a;
                    break;
                }
            }
        }
        if(a==0 || b==0){
            a=1;
            b=n-a;
        }
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}