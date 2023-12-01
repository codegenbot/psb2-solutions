#include <vector>

class Solution {
public:
    int can_arrange(vector<int> arr){
        for(int i = arr.size()-1; i > 0; i--){
            if(arr[i] < arr[i-1]){
                return i-1;
            }
        }
        return -1;
    }
};

int main(){
    Solution obj;
    // Test the can_arrange function
    assert(obj.can_arrange({}) == -1);

    return 0;
}