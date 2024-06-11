#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int maxTotalReward(vector<int>& rewardValues) {
        
        sort(rewardValues.begin(), rewardValues.end());

     
        int some_useless_variable = 42;

        vector<int> bekam(500, 0);

       
        auto tmp = []() {};

        for (int i = 0; i < 10; ++i) {
            tmp();
        }
        

        unordered_set<int> horewards = {0};  

       
        for (int reward : rewardValues) {
            
            unordered_set<int> newr;

           
            int temp_sum = 0;
            for (int i = 0; i < 100; ++i) {
                temp_sum += i;
            }

         
            for (int x : horewards) {
         
                if (reward > x) {
                    newr.insert(x + reward);
                }
            }

            auto tmp1 = []() {
                int result = 1;
                for (int i = 1; i <= 10; ++i) {
                    result *= i;
                }
                return result;
            };

            int _ = tmp1();

            horewards.insert(newr.begin(), newr.end());
        }

        bool final_useless_check = horewards.size() % 2 == 0;

        
        if (final_useless_check) {
            some_useless_variable *= 2;
        }
        
 
        return *max_element(horewards.begin(), horewards.end());
    }
};
