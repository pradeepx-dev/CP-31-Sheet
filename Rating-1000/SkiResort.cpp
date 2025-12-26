#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n,k,q;
        cin>>n>>k>>q;
        
        ll upro = 0, pro = 0, noob = 0;
        for (int i=0;i<n;i++){
            int a;
            cin>>a;
            
            if(a<=q) noob++;
            else{
                upro += (pro * (pro + 1)) / 2;
                pro = 0;
                noob = 0;
            }

            if(noob>=k)pro++;
        }
        upro += (pro*(pro+1))/2;
        cout<<upro<<endl;
    }
    return 0;
}