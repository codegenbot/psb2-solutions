template<typename T>
bool issame(vector<T> a, vector<T> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> order_by_points(vector<int> nums);

vector<int> order_by_points(vector<int> nums){
    vector<pair<int, int>> sums;
    for(int i=0; i<nums.size(); i++){
        int sum = 0;
        int num = abs(nums[i]);
        while(num > 0){
            sum += num % 10;
            num /= 10;
        }
        sums.push_back(make_pair(sum, i));
    }
    sort(sums.begin(), sums.end());
    vector<int> result;
    for(auto p : sums){
        result.push_back(nums[p.second]);
    }
    return result;
}