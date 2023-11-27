#include <vector>
#include <list>
#include <boost/any.hpp>
#include <boost/optional.hpp>

using namespace std;
using namespace boost;

vector<int> filter_integers(list<int> values);
bool issame(vector<int> a, vector<int> b);

int main() {
    issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3});
    return 0;
}

vector<int> filter_integers(list<int> values) {
    vector<int> result;
    for(auto value : values) {
        if(value != static_cast<int>('c') && value != static_cast<int>('a') && value != static_cast<int>('b')) {
            result.push_back(value);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}