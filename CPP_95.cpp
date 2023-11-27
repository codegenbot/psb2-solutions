#include <iostream>
#include <map>
#include <string>
#include <cassert>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
  if (dict.empty()) {
    return false;
  }

  bool lowerCase = true;
  bool upperCase = true;

  for (auto it = dict.begin(); it != dict.end(); ++it) {
    std::string key = it->first;

    if (key.empty()) {
      return false;
    }

    if (key[0] >= 'a' && key[0] <= 'z') {
      upperCase = false;
    } else if (key[0] >= 'A' && key[0] <= 'Z') {
      lowerCase = false;
    } else {
      return false;
    }
  }

  return lowerCase || upperCase;
}

int main() {
  assert(check_dict_case({}) == false);

  return 0;
}