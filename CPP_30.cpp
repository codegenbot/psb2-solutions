#include <vector>
#include <cassert>

using namespace std;

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(issame(get_positive({}), {}));

    // Add more test cases here
    assert(issame(get_positive({1.2, -3.4, 5.6, -7.8}), {1.2, 5.6}));
    assert(issame(get_positive({-1.0, -2.0, -3.0}), {}));
    assert(issame(get_positive({4.5, 6.7, 8.9, 10.11}), {4.5, 6.7, 8.9, 10.11}));

    return 0;
}