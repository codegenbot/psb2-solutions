#include <vector>
#include <cmath>
#include <cassert>

float find_max_element(std::vector<float> l)
{
    float max = l[0];
    for (int i = 1; i < l.size(); i++)
    {
        if (l[i] > max)
        {
            max = l[i];
        }
    }
    return max;
}

int main()
{
    assert(std::fabs(find_max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 124) < 1e-4);
    return 0;
}