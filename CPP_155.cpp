/*
Given an integer. return a vector that has the number of even and odd digits respectively.

 Example:
    even_odd_count(-12) ==> {1, 1}
    even_odd_count(123) ==> {1, 2}
*/
#include<stdio.h>
#include<math.h>
#include<string>
#include<vector>
    vector<int> result;
    int even = 0;
    int odd = 0;
    if (num < 0)
        num = -num;
    while (num > 0) {
        if (num % 2 == 0)
            even++;
        else
            odd++;
        num /= 10;
    }
    result.push_back(even);
    result.push_back(odd);
    return result;
}
int main(){
    vector<int> result = even_odd_count(-12);
    printf("%d %d\n", result[0], result[1]);
    return 0;
}
using namespace std;
vector<int> even_odd_count(int num){
