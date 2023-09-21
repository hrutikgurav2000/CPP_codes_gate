// Online C++ compiler to run C++ program online

//program to find power of function where a is number and n is power

#include <iostream>

int power(int a,int n ){
    if(n==1){
       return a;
    }else{
       return a * power(a,n-1);
    }
}

int main() {
    // Write C++ code here
    std::cout<<power(5,1);

    return 0;
}