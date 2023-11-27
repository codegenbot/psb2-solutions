#include <vector>
#include <cassert>

bool pairs_sum_to_zero(vector<int> l){
    for(int i=0; i<l.size(); i++){
        for(int j=i+1; j<l.size(); j++){
            if(l[i] + l[j] == 0){
                return true;
            }
        }
    }
    return false;
}

int main(){
    assert (pairs_sum_to_zero({-3, 9, -1, 4, 2, 31}) == false);
    assert (pairs_sum_to_zero({1, -1, 2, -2, 3, -3}) == true);
    assert (pairs_sum_to_zero({-5, -4, 3, 4, 5, -3}) == true);

    return 0;
}