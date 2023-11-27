#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    if(a.size() != b.size()) return false;
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(const std::vector<int>& l){
    std::vector<int> result = l;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    std::vector<int> expected_output = {0, 2, 3, 5, 9, 123};
    
    std::vector<int> output = remove_duplicates({5, 3, 5, 2, 3, 3, 9, 0, 123});
    
    assert(issame(output, expected_output) == true);
    
    std::cout << "Output is correct" << std::endl;
    
    return 0;
}