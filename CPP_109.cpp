/*
We have a vector "arr" of N integers arr[1], arr[2], ..., arr[N].The
numbers in the vector will be randomly ordered. Your task is to determine if
it is possible to get a vector sorted in non-decreasing order by performing 
the following operation on the given vector:
    You are allowed to perform right shift operation any number of times.

One right shift operation means shifting all elements of the vector by one
position in the right direction. The last element of the vector will be moved to
the starting position in the vector i.e. 0th index. 

If it is possible to obtain the sorted vector by performing the above operation
then return true else return false.
If the given vector is empty then return true.

Note: The given vector is guaranteed to have unique elements.

For Example:

move_one_ball({3, 4, 5, 1, 2})==>true
Explanation: By performing 2 right shift operations, non-decreasing order can
             be achieved for the given vector.
move_one_ball({3, 5, 4, 1, 2})==>false
Explanation:It is not possible to get non-decreasing order for the given
            vector by performing any number of right shift operations.
            
*/
#include<stdio.h>
#include<vector>
using namespace std;
bool move_one_ball(vector<int> arr){
    int i,j,n,temp,k=0;
    n=arr.size();
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                k++;
            }
        }
    }
    if(k==0||k==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
