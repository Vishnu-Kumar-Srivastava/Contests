// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a, b, c;
    cin >> a;
    long long b, c;
    if (a == 2)
    {
        b = 4;
        c = 8;
    }
    else
    {
        b = 2 * a;
        c = a * a;
    }
    cout << b << " " << c << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}