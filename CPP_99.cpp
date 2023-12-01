#include <string> 
#include <cmath>
#include <cassert>

int closest_integer(std::string value){
    float num = std::stof(value); // convert string to float
    int floor_num = std::floor(num); // round down to the nearest integer
    int ceil_num = std::ceil(num); // round up to the nearest integer
    
    // calculate the difference between the original number and the rounded numbers
    float diff_floor = std::abs(num - floor_num);
    float diff_ceil = std::abs(num - ceil_num);
    
    // if the difference is the same, round away from zero
    if(diff_floor == diff_ceil){
        if(num > 0){
            return ceil_num;
        }else{
            return floor_num;
        }
    }
    
    // return the closest integer
    if(diff_floor < diff_ceil){
        return floor_num;
    }else{
        return ceil_num;
    }
}

int main(){
    assert (closest_integer("0") == 0);
    // more test cases...
    
    return 0;
}