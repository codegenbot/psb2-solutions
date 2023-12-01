#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length() - 1) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            score += (10 + (bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] - '0'));
            frame++;
        } else if (bowl == '/') {
            score += (10 + (bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] - '0'));
            frame++;
            bowlIndex += 2;
        } else {
            score += (bowl - '0');
            frame++;
        }
        
        bowlIndex++;
    }

    return score;
}

int main() {
    std::string bowls;
    std::cin >> bowls;

    int score = calculateScore(bowls);
    std::cout << score << std::endl;

    return 0;
}