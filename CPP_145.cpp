#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> order_by_points(const vector<int>& nums){
    vector<int> result;
    vector<pair<int, int>> sums;
    
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = nums[i];
        
        while(num != 0){
            sum += abs(num % 10);
            num /= 10;
        }
        
        sums.push_back(make_pair(sum, i));
    }
    
    sort(sums.begin(), sums.end());
    
    for(auto p : sums){
        result.push_back(nums[p.second]);
    }
    
    return result;
}