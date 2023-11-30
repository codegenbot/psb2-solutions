#include <string>
#include <cassert>

using namespace std;

string fix_spaces(string text){
    for(int i=0; i<text.length(); i++){
        if(text[i] == ' '){
            text[i] = '_';
            if(i+1 < text.length() && text[i+1] == ' '){
                text[i+1] = '-';
                int j = i+2;
                while(j < text.length() && text[j] == ' '){
                    text[j] = '-';
                    j++;
                }
            }
        }
    }
    return text;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");
    return 0;
}