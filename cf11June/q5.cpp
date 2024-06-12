// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
     long long l, w, h, divisor;
    cin >> l>> w >> h >> divisor;

    long long maxVol = 0;
    for (long long lIndex = 1; lIndex <= l; lIndex++) { 
        for (long long wIndex = 1; wIndex <= w; wIndex++) {
            if (divisor % (lIndex * wIndex) == 0 && (divisor / (lIndex * wIndex)) <= h) {
                
                maxVol = max(maxVol, (l- lIndex + 1) * (w - wIndex + 1) * (h - (divisor / (lIndex * wIndex)) + 1));
            }
        }
    }
    cout << maxVol<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}