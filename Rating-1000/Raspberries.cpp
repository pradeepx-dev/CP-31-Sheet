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
        int n, k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        int val = ((arr[0] % k) == 0)? 0 : k-(arr[0]%k);
        if(k==2 || k==3 || k==5){
            for(int i=1;i<n;i++){
                int a = (arr[i]%k);
                if(a>0) a = k-a;
                else a=0;
                val = min(val, a);
            }
        }
        else{
            for(int i=0;i<n;i++){
                arr[i]=arr[i]%k;
                if(arr[i]==0){
                    val=0;
                }
            }
            int even=0, odd=0;
            for(int i=0;i<n;i++){
                if(arr[i]%2==0) even++;
                else odd++;
            }
            if(even>=2) val=min(val,0);
            else if(even==1 && odd>0) val=min(val,1);
            else val=min(val,2);
            for(int i=0;i<n;i++){
                if(arr[i]==3){
                    val=min(val,1);
                    break;
                }
            }
        }
        cout<<val<<endl;
    }
    return 0;
}