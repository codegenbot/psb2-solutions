#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    std::size_t bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length()) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            score += 10 + (int)(bowls[bowlIndex + 1] - '0') + (int)(bowls[bowlIndex + 2] - '0');
        } else if (bowlIndex != 0 && bowl == '/') {
            score += 10 - (int)(bowls[bowlIndex - 1] - '0') + (int)(bowls[bowlIndex + 1] - '0');
        } else {
            score += (int)(bowl - '0');
        }

        if (bowl == 'X' || frame >= 10) {
            bowlIndex++;
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