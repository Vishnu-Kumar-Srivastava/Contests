// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    long long a;
    long long b;
    cin>>n>>a>>b;
    long long totalans;
    long long usualans,lastprice;
    
    if(b<a){
        cout<<n*a<<"\n";
    }else{
        totalans = min(n,b-a);
        usualans= n-totalans;
        lastprice=b-totalans;
        long long ans = usualans*a+(b*(b+1)/2)-(lastprice*(lastprice+1)/2);

         cout<<ans<<"\n";
    }

}
int main()
{
    ios_base::sync_with_stdio(false);

    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {

        solve();
    }
}