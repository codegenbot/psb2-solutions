#include <algorithm>
#include <vector>

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    int tempA = abs(a), tempB = abs(b);
    
    while(tempA > 0) {
        sumA += tempA % 10;
        tempA /= 10;
    }
    
    while(tempB > 0) {
        sumB += tempB % 10;
        tempB /= 10;
    }
    
    if(sumA == sumB) {
        return a < b;
    }
    
    return sumA < sumB;
}

vector<int> order_by_points(vector<int> nums);

int main() {
    // Test the order_by_points function
    vector<int> nums = {123, 45, 678, 9, 0};
    vector<int> ordered_nums = order_by_points(nums);
    
    for(int num : ordered_nums) {
        cout << num << " ";
    }
    
    return 0;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compare);
    return nums;
}