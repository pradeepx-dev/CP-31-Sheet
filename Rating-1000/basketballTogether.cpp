#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end(), greater<int>());

    int len = n, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) continue;
        int val = static_cast<int>(ceil((d * 1.0) / arr[i]));
        int rem = (d % arr[i]);
        val = (rem==0)? val+1 : val;
        // cout << val << endl;
        if (val <= len && (arr[i] * 1LL * val) > d) {
            len = len - val;
            cnt++;
        } else break;
    }
    cout << cnt << endl;
    return 0;
}
