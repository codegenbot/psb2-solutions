#include <iostream>
using namespace std;

int main() {
    double starting_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;
    cin >> starting_height >> first_bounce_height >> num_bounces;
    bounciness_index = first_bounce_height / starting_height;
    total_distance = 0;
    double current_height = starting_height;
    for (int i = 0; i < num_bounces; i++) {
        total_distance += 2 * bounciness_index * current_height;
        current_height *= bounciness_index;
    }
    cout << total_distance << endl;
    return 0;
}