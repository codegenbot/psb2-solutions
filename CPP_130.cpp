vector<int> tri(int n){
    vector<int> result;
    result.push_back(3); // tri(1) = 3
    if(n >= 1){
        result.push_back(1 + n / 2); // tri(2) = 1 + (2 / 2) = 2
    }
    if(n >= 2){
        result.push_back(result[1] + result[0] + result[1]); // tri(3) = tri(2) + tri(1) + tri(2) = 2 + 3 + 2 = 7
    }
    for(int i = 3; i <= n; i++){
        if(i % 2 == 0){
            result.push_back(1 + i / 2); // tri(n) = 1 + n / 2, if n is even
        }
        else{
            result.push_back(result[i - 1] + result[i - 2] + result[i + 1]); // tri(n) = tri(n - 1) + tri(n - 2) + tri(n + 1), if n is odd
        }
    }
    return result;
}