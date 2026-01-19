#include<iostream>
int main()
{
    int rno;
    std::string name;
    
    //printf("Enter roll number: ");
    std::cout << "Enter Roll Number & Name ";
    
//scanf("%d", &rno);
    std::cin >> rno;
    std::cin>>name;

//printf("Roll number is: %d\n")
    std::cout <<"Roll number of " <<name<<" is: "<<rno;

    return 0;
}