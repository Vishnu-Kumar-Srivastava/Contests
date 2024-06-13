//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    int i=0;
    while(i<n-2){
        cout<<3<<' ';

        i++;
    }
    cout<<2<<' '<<1<<"\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}