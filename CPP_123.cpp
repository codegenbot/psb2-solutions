#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
  return std::vector<int>(a) == std::vector<int>(b);
}

std::vector<int> get_odd_collatz(int n) {
  std::vector<int> collatz_seq;
  collatz_seq.push_back(n);
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = (3 * n) + 1;
    }
    collatz_seq.push_back(n);
  }
  std::vector<int> odd_collatz_seq;
  for (int i = 0; i < collatz_seq.size(); i++) {
    if (collatz_seq[i] % 2 != 0) {
      odd_collatz_seq.push_back(collatz_seq[i]);
    }
  }
  std::sort(odd_collatz_seq.begin(), odd_collatz_seq.end());
  return odd_collatz_seq;
}

std::vector<int> expected = {1};
std::vector<int> result = get_odd_collatz(1);
if (issame(result, expected)) {
  std::cout << "Output is correct" << std::endl;
} else {
  std::cout << "Output is incorrect" << std::endl;
}