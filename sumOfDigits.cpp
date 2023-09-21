// Online C++ compiler to run C++ program online
//sum of Digits
#include <iostream>

int sumOfDigits(int num){
    if(num<10){
        return num;
    }else{
       return (num%10) + sumOfDigits(num/10);
    }
}

int main() {
    // Write C++ code here
    std::cout<<sumOfDigits(152);

    return 0;
}