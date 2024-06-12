// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;

struct Solution {
    long long int i;
    long long int j;
    long long int k;
};

void solve()
{
   long long int bosshealth, nAttack;
        cin >> bosshealth >> nAttack;

        vector<long long int> dmg(nAttack);
        vector<long long int> cdown(nAttack);
        for (int i = 0; i < nAttack; ++i) {
            cin >> dmg[i];
        }
        for (int i = 0; i < nAttack; ++i) {
            cin >> cdown[i];
        }

        priority_queue<pair<long long int, int>, vector<pair<long long int, int>>, greater<pair<long long int, int>>> pq;

        for (int i = 0; i < nAttack; ++i) {
            pq.push(make_pair(1, i)); 
        }

        long long int ans = 0;
        while (bosshealth > 0) {
            ans = pq.top().first; 

            while (!pq.empty() && pq.top().first == ans) {
                int i = pq.top().second;
                pq.pop();

                bosshealth -= dmg[i]; 

                pq.push(make_pair(ans + cdown[i], i));
            }
        }

        cout << ans <<"\n";
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