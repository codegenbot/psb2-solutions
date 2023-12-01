#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_array(vector<int> array){
    if(array.size() == 0){
        return array;
    }
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0){
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}