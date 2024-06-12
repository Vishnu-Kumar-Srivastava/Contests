// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a ;
    string b;
    cin>>a>>b;
    char temp= a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<"\n";
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