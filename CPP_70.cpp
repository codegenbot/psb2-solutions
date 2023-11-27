#include <vector>
#include <algorithm>

using namespace std;

vector<int> strange_sort_list(vector<int> lst){
    sort(lst.begin(), lst.end()); 
    
    int n = lst.size();
    vector<int> result(n); 
    
    int left = 0; 
    int right = n - 1;
    
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result[i] = lst[left]; 
            left++;
        } else {
            result[i] = lst[right]; 
            right--;
        }
    }
    
    return result;
}