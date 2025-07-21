#include<iostream>
#include "sum.h"
#include "ComProb.h"
using namespace std;
int main(){
    //checking sum class
    sum s;
    cout<<s.sumOfDigits(1238)<<endl;
    cout<<s.sumOfFirstN(20)<<endl;
    //checking ComProb class
    ComProb cp;
    cout<<"5 is even?: "<<cp.isEven(5)<<"\n10 is even? "<<cp.isEven(10)<<endl;
    cout<<"10 is prime?: "<<cp.isPrime(10)<<"\n5 and 2 are prime "<<cp.isPrime(5)<<" "<<cp.isPrime(2)<<" respectively"<<endl;

    return 0;
}