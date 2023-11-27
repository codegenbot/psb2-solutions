#include <string>

int findClosestInteger(std::string value){
    double num = stod(value);
    int roundedNum = round(num);
    int floorNum = floor(num);
    int ceilNum = ceil(num);
    
    if (abs(num - roundedNum) < abs(num - floorNum) && abs(num - roundedNum) < abs(num - ceilNum)){
        return roundedNum;
    } else if (abs(num - floorNum) < abs(num - roundedNum) && abs(num - floorNum) < abs(num - ceilNum)){
        return floorNum;
    } else {
        return ceilNum;
    }
}