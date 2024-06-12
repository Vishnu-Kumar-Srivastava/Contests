// This code is made by Vishnu
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>arr(n, vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            arr[i][j]=x;
        }
    }
    // cout<<"The array is: "<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<arr[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }
    pair<int,int> initialmaxPoint={0,0};
    pair<int,int> finalmaxPoint={0,0};
    int maxcount=0;
    for(int i=0;i<n;i++){
        pair<int,int>tempInitial={i,0};
        pair<int,int>tempFinal={i,0};
        int mxcount=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]=='#')
            {
                // cout<<"yaha aaye kya: "<<i<<" "<<j<<" "<<mxcount<<endl;
                if(mxcount==0)
                {
                    // cout<<"i and j for initial are: "<<i<<" "<<j<<endl;
                    tempInitial={i,j};

                }
                tempFinal={i,j};
                mxcount++;
            }
        }
        if(mxcount>maxcount){
            maxcount=mxcount;
            initialmaxPoint=tempInitial;
            finalmaxPoint=tempFinal;
        }
    }
    int y = initialmaxPoint.second + (finalmaxPoint.second - initialmaxPoint.second)/2;
    y++;
    int x = initialmaxPoint.first +1;
    cout<<x<<" "<<y<<"\n";
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

