//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    int p=1;
    if(x==y){
        cout<<0<<"\n";
    }else{
        
        while(true){
            // cout<<"x and y are: "<<x<<" "<<y<<endl;
            float q= 10*y +y*p;
            // cout<<"q at first stage: "<<q<<endl;
            q=q-10*x;
            // cout<<"q at second stage: "<<q<<endl;
            q=q/p;
            // cout<<"q is: "<<q<<endl;
            if(q>=0 && q<=100){
                cout<<p<<"\n";
                break;
            }
            p++;
        }
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