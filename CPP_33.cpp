#include <algorithm>
#include <assert.h>
#include <vector>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> sort_third(vector<int> l){
    vector<int> l_prime(l);
    for(int i=0; i<l_prime.size(); i++){
        if(i%3 == 0){
            sort(l_prime.begin()+i, l_prime.begin()+i+3);
        }
    }
    return l_prime;
}

int main(){
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}