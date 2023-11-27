#include <vector>
#include <cassert>

using namespace std;

vector<int> incr_list(vector<int> l){
    vector<int> result;
    for(int i=0; i<l.size(); i++){
        result.push_back(l[i] + 1);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    assert(issame(incr_list(vector<int>{5, 2, 5, 2, 3, 3, 9, 0, 123}), vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}