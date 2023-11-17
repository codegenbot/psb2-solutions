/*
Return the number of times the digit 7 appears in integers less than n which are divisible by 11 or 13.
>>> fizz_buzz(50)
0
>>> fizz_buzz(78)
2
>>> fizz_buzz(79)
3
*/
#include<stdio.h>
using namespace std;
int fizz_buzz(int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(i%11 == 0 || i%13 == 0){
            int temp = i;
            while(temp > 0){
                if(temp%10 == 7)
                    count++;
                temp /= 10;
            }
        }
    }
    return count;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fizz_buzz(n));
    return 0;
}
