#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a,const std::vector<int>& b){
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}