//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
int valueAfterKSeconds(int n, int k) {
        const int MOD = 1000000007;
        vector<int> a(n, 1);
        
        for (int sec = 0; sec < k; ++sec) {
            vector<int> sum(n, 0);
            sum[0] = a[0];
            
            for (int i = 1; i < n; ++i) {
                sum[i] = (sum[i - 1] + a[i]) % MOD;
            }
            
            for (int i = 1; i < n; ++i) {
                a[i] = sum[i];
            }
        }
        
        return a[n - 1];
    }
int main()
{
    cout<<"ye hai :"<<valueAfterKSeconds(0,4);
}