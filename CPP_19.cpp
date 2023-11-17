/*
Input is a space-delimited string of numberals from "zero" to "nine".
Valid choices are "zero", "one", 'two", 'three", "four", "five", 'six", 'seven", "eight" and "nine".
Return the string with numbers sorted from smallest to largest
>>> sort_numbers('three one five")
"one three five"
*/
#include<stdio.h>
#include<string>
#include<map>
using namespace std;
string sort_numbers(string numbers){
    map<string, int> num_map;
    num_map["zero"] = 0;
    num_map["one"] = 1;
    num_map["two"] = 2;
    num_map["three"] = 3;
    num_map["four"] = 4;
    num_map["five"] = 5;
    num_map["six"] = 6;
    num_map["seven"] = 7;
    num_map["eight"] = 8;
    num_map["nine"] = 9;
    int num_array[10] = {0};
    int i = 0;
    string temp = "";
    for(i = 0; i < numbers.length(); i++){
        if(numbers[i] != ' '){
            temp += numbers[i];
        }
        else{
            num_array[num_map[temp]]++;
            temp = "";
        }
    }
    num_array[num_map[temp]]++;
    string result = "";
    for(i = 0; i < 10; i++){
        if(num_array[i] > 0){
            for(int j = 0; j < num_array[i]; j++){
                result += to_string(i) + " ";
            }
        }
    }
    result.pop_back();
    return result;
}
