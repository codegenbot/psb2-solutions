#include <iostream>
#include <vector>
using namespace std;

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j]-'0')%2 != 0){
                count++;
            }
        }
        string temp = "the number of odd elements " + to_string(count) + " in the string " + to_string(i+1) + " of the input.";
        result.push_back(temp);
    }
    return result;
}

int main() {
    assert (issame(odd_count({"271", "137", "314"}) , {
        "the number of odd elements 2 in the string 1 of the input.",
        "the number of odd elements 3 in the string 2 of the input.",
        "the number of odd elements 2 in the string 3 of the input."
    }));
  
    cout << "Test case passed!";
  
    return 0;
}