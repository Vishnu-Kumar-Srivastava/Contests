//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
long long grtstdivisor(int n){
    long long x = sqrt(n);
    cout<<"x is : "<<x<<endl;
    for(long long i=x;i>=1;i--){
        if(n%i==0)
        return n;
    }
}
void solve(){
    long long ku;
    cin>>ku;
    long long count=0;
    long long sq = ku*ku;
    long long summ=0;
    for(int i=ku+1;i<=sq;i++){
        if(grtstdivisor(i)==ku)
        {
         summ+=i;
         cout<<"aisa hua for: "<<i<<endl;

        }
    }
    cout<<summ<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        solve();
    }

}