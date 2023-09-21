

/*
recursion example 6

f() >>> 1213121 
*/
#include <iostream>
void f(int n ){
    if(n<1){
       return;
    }else{
      // std::cout<<n;
	   f(n-1);
	   std::cout<<n;
	   f(n-1);
	   
    }
}


int main() {
    // Write C++ code here
 //  3
 f(3);
    return 0;
}