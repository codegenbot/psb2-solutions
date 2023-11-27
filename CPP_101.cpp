vector<string> words_string(string s);
bool issame(vector<string> a, vector<string> b);

bool issame(vector<string> a, vector<string> b){
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

void assertEquals(vector<string> a, vector<string> b){
    if(issame(a, b)){
        cout << "Test Passed" << endl;
    }
    else{
        cout << "Test Failed" << endl;
    }
}

int main(){
    assertEquals(words_string("ahmed     , gamal"), vector<string>{"ahmed", "gamal"});
    return 0;
}