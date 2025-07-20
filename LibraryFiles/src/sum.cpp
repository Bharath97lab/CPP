#include "sum.h"
int sum::sumOfDigits(int num){
    int res=0;
    while(num!=0){
        res+=num%10;
        num/=10;
    }
    return res;
}
int sum::sumOfFirstN(int num){
    int res=0;
    for(int i=1;i<=num;i++){
        res+=i;
    }
    return res;
}