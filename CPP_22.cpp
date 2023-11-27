#include <vector>
#include <list>
#include <boost/any.hpp>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    // Function body
}

vector<int> filter_integers(list_any<int> values){
    vector<int> result;
    for(auto value : values){
        if(value.type() == typeid(int)){
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}