#include <string>
#include <cassert>

std::string generateSequence(int n){ 
    std::string result = ""; 
    for(int i=0; i<=n; i++){
        result += std::to_string(i) + " "; 
    } 
    return result; 
}

int main(){ 
    assert (generateSequence(10) == "0 1 2 3 4 5 6 7 8 9 10"); 
    return 0;
}