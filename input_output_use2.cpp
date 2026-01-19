#include<iostream>
using namespace std;
int main()
{
    int rno;
string name;
    
    //printf("Enter roll number: ");
    cout << "Enter Roll Number & Name ";
    
//scanf("%d", &rno);
    cin >>rno>>name;

//printf("Roll number is: %d\n")
    cout <<"Roll number of " <<name<< " is: "<<rno;
    return 0;
}