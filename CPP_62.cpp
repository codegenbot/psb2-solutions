#include <vector>
#include <cmath>

using namespace std;

bool issame(vector<float> a, vector<float> b){
    for(int i=0; i<a.size(); i++){
        if (std::abs(a[i]-b[i]) > 1e-4) return false;
    }
    return true;
}

vector<float> derivative(vector<float> xs){
    vector<float> derivative_xs;
    for(int i=1; i<xs.size(); i++){
        derivative_xs.push_back(xs[i] * i);
    }
    return derivative_xs;
}

int main(){
   // rest of the code
   
   return 0;
}