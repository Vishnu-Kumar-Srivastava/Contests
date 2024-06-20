//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;
    int form =0;
    for(int i=1;i<=n;i++){
        
        a.push_back(i);
    }
    b=a;
    int z= (n+1-1+2-2+1)/2;
    vector<int>c(b.begin()+z,b.end());
    c.insert(c.end(),b.begin(),b.begin()+z);
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(int i=0;i<a.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<"\n";
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