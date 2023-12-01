#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> even_odd_palindrome(int n){
    vector<int> result(2, 0);
    for(int i = 1; i <= n; i++){
        string s = to_string(i);
        int left = 0, right = s.length() - 1;
        bool isPalindrome = true;
        while(left < right){
            if(s[left] != s[right]){
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }
        if(isPalindrome){
            if(i % 2 == 0){
                result[0]++;
            }else{
                result[1]++;
            }
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
 
    vector<int> result = even_odd_palindrome(n);
    cout << result[0] << " " << result[1] << endl;
  
    return 0;
}