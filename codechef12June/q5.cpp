//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int target;
    cin>>target;
    vector<bool>isPrime(100001,true);
    for (int curr = 2; curr * curr <= 100000; ++curr)
    {
        if (isPrime[curr])
        {
            for (int multiples = curr * curr; multiples <= 100000; multiples += curr)
            {
                isPrime[multiples] = false;
            }
        }
    }
    vector<int> primes;
    for (int curr = 2; curr <= 100000; ++curr)
    {
        if (isPrime[curr])
        {
            primes.push_back(curr);
        }
    }
    vector<int>squares;
    for(auto elm: primes){
        int sq= elm*elm;
        if(sq<target){
            squares.push_back(sq);
        }
    }
    int n = squares.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (squares[i] + squares[j] + squares[k] == target)
                {
                    cout<<"Yes"<<"\n";
                    return;
                }
            }
        }
    }
    cout<<"No"<<"\n";
    return;

    
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