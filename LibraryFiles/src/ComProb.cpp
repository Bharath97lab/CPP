#include "ComProb.h"

 bool ComProb::isEven(int n){
        if(n%2==0)
            return true;
        return false;
    }
bool ComProb::isPrime(int n){
        if(n<=1){
            return false;
        }else{
            int count=0;
            for(int i=2;i*i<n;i++){
                if(n%i==0){
                    count++;
                }
            }
            if(count==0){
                return true;
            }else{
                return false;
            }
        }
    }