// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    double x;
    cin>>x;
    vector<double> arr;
    for(double i=0;i<x;i++){
        double y;
        cin>>y;
        arr.push_back(y);
    }
    double s=0;
    double g=0;
    double count=0;
    for(auto &elm: arr){
        s+=elm;
        g=max(g,elm);
        if(s-g==g){
            count++;
        }
    }
    cout<<count<<"\n";
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

