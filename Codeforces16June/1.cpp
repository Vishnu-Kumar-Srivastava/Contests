// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;
    vector<long long>arr(n,0);
    long long max2=0;
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
    max2=arr[n-1];
    arr[n-1]=-1;
    long long max1= *max_element(arr.begin(),arr.end()-1);
    cout<<max1+max2<<"\n";
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