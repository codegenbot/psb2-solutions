#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

int sum_squares(vector<float> lst)
{
    int sum = 0;
    for (int i = 0; i < lst.size(); i++)
    {
        int rounded = ceil(lst[i]);
        sum += rounded * rounded;
    }
    return sum;
}