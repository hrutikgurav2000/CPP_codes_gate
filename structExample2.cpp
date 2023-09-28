#include <iostream>
#include <cstring>
using namespace std;


struct date_birth{

    int day;
    char mon[5];
    int year;
};

struct student{

    char name[20];
    struct date_birth dob;
};
int main() {
    // Write C++ code here
    struct student s1 = {"hrutik",{11,"apr",2001}};
    cout<<s1.name<<endl;
    cout<<s1.dob.day<<endl;
    cout<<s1.dob.mon<<endl;
    cout<<s1.dob.year<<endl;
    return 0;
}