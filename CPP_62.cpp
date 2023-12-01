#include <vector>
#include <cmath> 

using namespace std;

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}


int main() {
    assert(issame(derivative({1}) , {}));
    
    return 0;
}