#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> sum(n, 0);

        int card = k;
        bool forward = true;

        while (card > 0) {

            if (forward) {

                for (int i = 0; i < n && card > 0; i++) {
                    sum[i] += card;
                    card--;
                }

            } else {

                for (int i = n - 1; i >= 0 && card > 0; i--) {
                    sum[i] += card;
                    card--;
                }

            }

            forward = !forward;
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            ans = max(ans, sum[i]);
        }

        cout << ans << endl;
    }

    return 0;
}
