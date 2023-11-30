#include <vector>
#include <algorithm>

bool issame(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b){
    // Your code for comparing two vectors goes here
}

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x){
    std::vector<std::vector<int>> coordinates;
    
    for(int i = 0; i < lst.size(); i++){
        for(int j = 0; j < lst[i].size(); j++){
            if(lst[i][j] == x){
                std::vector<int> coordinate = {i, j};
                coordinates.push_back(coordinate);
            }
        }
    }
    
    std::sort(coordinates.begin(), coordinates.end(), [](const std::vector<int>& a, const std::vector<int>& b){
        if(a[0] == b[0]){
            return a[1] > b[1];
        }
        return a[0] < b[0];
    });
    
    return coordinates;
}