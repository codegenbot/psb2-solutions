#include <vector>
#include <cassert>

int add(std::vector<int> lst){
    int sum = 0;
    for(int i = 1; i < lst.size(); i += 2){
        if(lst[i] % 2 == 0){
            sum += lst[i];
        }
    }
    return sum;
}

int main(){
    assert (add(std::vector<int>{4, 4, 6, 8}) == 12);
    // More test cases
    return 0;
}