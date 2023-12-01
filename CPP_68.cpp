std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallestValue = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestValue) {
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }

    if (smallestIndex != -1) {
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }

    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
  
    return true;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), std::vector<int>{}));
    assert(issame(pluck({1, 2, 3, 4, 5}), std::vector<int>{2, 1}));
    assert(issame(pluck({2, 4, 6, 8}), std::vector<int>{2, 0}));
    assert(issame(pluck({1, 3, 5, 7, 9}), std::vector<int>{}));
    assert(issame(pluck({}), std::vector<int>{}));

    return 0;
}