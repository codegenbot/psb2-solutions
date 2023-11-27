#include <vector>
#include <string>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        std::string str = std::to_string(num);
        int firstDigit = str[0] - '0';
        int lastDigit = str[str.length() - 1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    assert (specialFilter({}) == 0);
    // Add more test cases if needed
    return 0;
}