// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    cin>>x;
    int sum=0;
    int i=1;
    int num=1;
    while(2*i<=x){
        sum+=2*i;
        i++;
    }
    if(x>sum){
        cout<<x<<"\n";
    }else{
        cout<<2<<"\n";
    }
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