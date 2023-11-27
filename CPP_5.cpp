#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter) {
    std::vector<int> result;
    int size = numbers.size();
    for(int i=0; i<size; i++){
        result.push_back(numbers[i]);
        if(i != size-1){
            result.push_back(delimiter);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // implementation of issame function
}

int main() {
    assert(issame(intersperse(std::vector<int>{2, 2, 2}, 2), std::vector<int>{2, 2, 2, 2, 2}));
    return 0;
}