#include <vector>
#include <cassert>

std::vector<int> f(int n){
    std::vector<int> result;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            int factorial = 1;
            for(int j=1; j<=i; j++){
                factorial *= j;
            }
            result.push_back(factorial);
        }
        else{
            int sum = 0;
            for(int j=1; j<=i; j++){
                sum += j;
            }
            result.push_back(sum);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

int main(){
    assert(issame(f(3), {1, 2, 6}));
    
    return 0;
}