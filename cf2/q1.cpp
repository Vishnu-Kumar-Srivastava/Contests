// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int minmax = INT_MAX;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int maxof = max(arr[i], arr[i + 1]);
        minmax = min(minmax, maxof);
    }
    cout << minmax - 1 << "\n";
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