// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct student{
    char name[20];
    int roll;
};
int main() {
    // Write C++ code here
    struct student s1;
    s1 = {"hrutik",7};
    cout << s1.roll<<"\n";
    cout << s1.name;

    return 0;
}