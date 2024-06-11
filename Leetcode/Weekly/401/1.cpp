//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
int numberOfChild(int n, int k) {
        if(k==0)
            return 0;
        if(n==1)
            return 0;
        int i=0;
        i++;
        bool right=true;
        k--;
        while(k--){
            if(i==0){
                right=true;
            }else if(i==n-1){
                right=false;
            }
            if(right){
                i++;
            }
            else{
                i--;
            }
        }
        return i;
        
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cout<<numberOfChild(1,1)<<endl;
}