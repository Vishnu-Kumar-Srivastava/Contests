// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    long long k;
    cin>>n>>k;
    vector<long long>arr;
    long long summ=0;
    for(long long i=1;i<=n;i++){
        summ+=abs(i-(n-i+1));
        arr.push_back(i);
    }
    if(summ<k || k%2==1){
        cout<<"no"<<"\n";
    }else{
        cout<<"yEs"<<"\n";
        long long i=0;
        long long bigN=n;
        while(k>(bigN-1)*2)
        {
            swap(arr[n-i-1],arr[i]);
            k-=(bigN-1)*2;
            bigN-=2;
            i++;
        }
        k=k/2;
        swap(arr[i+k],arr[i]);
        for(long long i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";


            // cout<<"ye hai arr i"<<endl;

        }
        cout<<"\n";

    }
 }
 
int  main()
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