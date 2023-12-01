vector<int> sort_third(vector<int> l){
    vector<int> l_prime = l;
    vector<int> indices;
    for(int i=0; i<l.size(); i++){
        if(i % 3 == 0){
            indices.push_back(i);
        }
    }
    sort(indices.begin(), indices.end(), [&](int a, int b){
        return l[a] < l[b];
    });
    for(int i=0; i<indices.size(); i++){
        l_prime[indices[i]] = l[indices[i]];
    }
    return l_prime;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    assert (equal(sort_third({5, 6, 3, 4, 8, 9, 2, 1}).begin(), sort_third({5, 6, 3, 4, 8, 9, 2, 1}).end(), {2, 6, 3, 4, 8, 9, 5, 1}.begin()));
    return 0;
}