#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    // implementation of issame function 
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    
    for(auto s : strings){
        if(s.find(substring) != std::string::npos){
            result.push_back(s);
        }
    }
    
    return result;
}

int main(){
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));

    return 0; 
}