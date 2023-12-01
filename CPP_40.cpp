#include <algorithm>

bool triples_sum_to_zero(vector<int> l) {
    sort(l.begin(), l.end());
    
    int n = l.size();
    
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && l[i] == l[i-1]) {
            continue;
        }
        
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            int sum = l[i] + l[left] + l[right];
            
            if (sum == 0) {
                return true;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }
    
    return false;
}