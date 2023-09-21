#include <iostream>

void recursion(int num){
    if(num==1 || num==0){
        std::cout<<"hrutik";
    }else{
        std::cout<<"hrutik";
        recursion(num-1);
    }
}

int main() {
    // Write C++ code here
    recursion(0);

    return 0;
}