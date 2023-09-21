// Online C++ compiler to run C++ program online
//example 4 

/* order of function calling matters for n = 5
	printFun(5) will return 54321
	where as 
	printFun2(5) will return 12345
	

*/
#include <iostream>
void printFun(int n ){
    if(n==1){
       std::cout<<1;
    }else{
       std::cout<<n;
	   printFun(n-1);
	   
    }
}

void printFun2(int n ){
    if(n==1){
       std::cout<<1;
    }else{
        printFun2(n-1);
       std::cout<<n;
	   
	   
    }
}

int main() {
    // Write C++ code here
   // printFun(5);
 printFun2(5);
    return 0;
}