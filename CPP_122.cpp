/*
Given a non-empty vector of integers arr and an integer k, return
the sum of the elements with at most two digits from the first k elements of arr.

Example:

    Input: arr = {111,21,3,4000,5,6,7,8,9}, k = 4
    Output: 24 # sum of 21 + 3

Constraints:
    1. 1 <= len(arr) <= 100
    2. 1 <= k <= len(arr)
*/
#include <stdio.h>
#include <vector>
#include <iostream>
  int sum=0;
  for(int i=0;i<arr.size();i++){
     if(arr[i]>=10&&arr[i]<=99){
         sum+=arr[i];
     }
  }
  return sum;
}
int main(){
  vector<int> arr={111,21,3,4000,5,6,7,8,9};
  int sum=add_elements(arr,4);
  cout<<"Sum = "<<sum<<endl;
}
using namespace std;
int add_elements(vector<int> arr,int k){
