//This code is made by Vishnu
#include<bits/stdc++.h>
using namespace std;
    string clearDigits(string s) {
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9')
            {
                for(int j=i+1;j<s.size();j++){
                    if(s[j]>='a' && s[j]<='z'){
                        s[j]='*';
                        s[i]='*';
                        break;
                    }
                    
                }
            }
        }
        cout<<s<<endl;
        string ans="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!='*')
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
int findWinner(vector<int>& skills, int k) {
   
    int msIndex = 0;
    int wc = 0;
    
  
    if (k >=skills.size()- 1) {
        return max_element(skills.begin(), skills.end()) - skills.begin();
    }
    
    for (int i = 1; i < n; ++i) {
        if (skills[msIndex] > skills[i]) {
            ++wc;
            if (wc == k) {
                return msIndex;
            }
        } else {
            msIndex = i;
            wc = 1; 
        }
    }
    
    
    return msIndex;
}
int main()
{
    vector<int> s= {4,2,6,3,9};
    int k=2;
    cout<<findWinner(s,k);
}  