//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    if( n==k && n==1)
    {
        cout<<"YES"<<"\n";
        return;
    }
    int x =k*(k + 1);
    
    int req = x/2;
    req+=k-1;

    if(n>=req){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
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