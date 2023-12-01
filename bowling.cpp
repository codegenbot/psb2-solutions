#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    int bowlIndex = 0;

    while (frame <= 9 && bowlIndex < bowls.length() - 2) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            if (bowls[bowlIndex + 1] == '/') {
                score += 20;
            } else {
                score += (10 + (bowls[bowlIndex + 1] - '0') + (bowls[bowlIndex + 2] - '0'));
            }
            bowlIndex++;
        } else if (bowl == '/') {
            score += (10 + (bowls[bowlIndex + 1] - '0'));
            bowlIndex++;
        } else {
            score += (bowl - '0');
        }

        frame++;
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