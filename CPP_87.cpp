#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x){
    std::vector<std::vector<int>> result;
    for(int i=0; i<lst.size(); i++){
        for(int j=0; j<lst[i].size(); j++){
            if(lst[i][j] == x){
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b){
        return a[0] < b[0];
    });
    for(auto& row : result){
        std::sort(row.begin(), row.end(), std::greater<int>());
    }
    return result;
}

bool issame(std::vector<std::vector<int>> lst1, std::vector<std::vector<int>> lst2){
    return lst1 == lst2;
}

int main(){
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    return 0;
}