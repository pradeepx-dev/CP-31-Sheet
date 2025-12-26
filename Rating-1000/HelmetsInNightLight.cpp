#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, p;
        cin >> n >> p;

        vector<pair<ll, ll>> items(n);
        for (ll i = 0; i < n; i++) cin >> items[i].second;
        for (ll i = 0; i < n; i++) cin >> items[i].first;

        sort(items.begin(), items.end());

        ll sum = p;
        n= n-1;
        for (int i=0; i<items.size(); i++) {
            if (items[i].first >= p) break;

            if (items[i].first < p) {
                if (items[i].second <= n) {
                    sum += items[i].second * items[i].first;
                    n -= items[i].second;
                }else {
                    sum += n * items[i].first;
                    n = 0;
                    break;
                }
            }
        }
        if (n > 0) sum += n * p;
        cout << sum << endl;
    }
    return 0;
}