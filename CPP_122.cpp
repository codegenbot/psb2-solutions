#include<stdio.h>
#include<vector>
using namespace std;

int add_elements(vector<int> arr, int k) {
    int sum = 0;
    int count = 0;

    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] < 100) {
            sum += arr[i];
            count++;
        }
    }

    return sum;
}