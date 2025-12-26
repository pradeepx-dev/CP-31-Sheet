#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        
        vector<int> maxRunA(2*n + 2, 0), maxRunB(2*n + 2, 0);
        
        int count = 0;
        for (int i = 0; i < n; i++){
            if(i == 0 || a[i] == a[i-1]){
                count++;
            } else {
                maxRunA[a[i-1]] = max(maxRunA[a[i-1]], count);
                count = 1;
            }
        }
        if(n > 0)
            maxRunA[a[n-1]] = max(maxRunA[a[n-1]], count);
        count = 0;
        for (int i = 0; i < n; i++){
            if(i == 0 || b[i] == b[i-1]){
                count++;
            } else {
                maxRunB[b[i-1]] = max(maxRunB[b[i-1]], count);
                count = 1;
            }
        }
        if(n > 0)
            maxRunB[b[n-1]] = max(maxRunB[b[n-1]], count);
        int ans = 0;
        for (int x = 1; x <= 2*n; x++){
            ans = max(ans, maxRunA[x] + maxRunB[x]);
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}