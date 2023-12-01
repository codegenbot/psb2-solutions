#include <iostream>
#include <string>

int calculateScore(const std::string& bowls) {
    int score = 0;
    int frame = 1;
    std::size_t bowlIndex = 0;

    while (frame <= 10 && bowlIndex < bowls.length()) {
        char bowl = bowls[bowlIndex];

        if (bowl == 'X') {
            if (frame == 10) {
                score += 10 + (int)(bowls[bowlIndex + 1] - '0') + (int)(bowls[bowlIndex + 2] - '0');
                if(bowlIndex + 2 < bowls.length() && bowls[bowlIndex + 1] == 'X')
                    score += 10;
                bowlIndex += 2;
            } else {
                score += 10 + (int)(bowls[bowlIndex + 1] - '0') + (int)(bowls[bowlIndex + 2] - '0');
                bowlIndex++;
            }
        } else if (bowl == '/') {
            score += 10 - (int)(bowls[bowlIndex - 1] - '0') + (int)(bowls[bowlIndex + 1] - '0');
            if (frame == 10 && bowlIndex + 1 < bowls.length()) {
                score += (int)(bowls[bowlIndex + 1] == 'X' ? 10 : (bowls[bowlIndex + 1] - '0'));
            }
            bowlIndex++;
        } else {
            score += (int)(bowl - '0');
        }

        frame++;
        bowlIndex++;
    }

    return score;
}

int main() {
    std::string bowls = "52618-34334/36812163";

    int score = calculateScore(bowls);
    std::cout << score << std::endl;

    return 0;
}