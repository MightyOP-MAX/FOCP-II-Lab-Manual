/*Question of the Day!!
Design a C++ program that simulates a basic Candy Crush game element using class and object creation.
Create a class Candy with the following attributes:
•⁠  ⁠string color (stores the color of the candy)
•⁠  ⁠int points (stores the points awarded)
The class should have the following member functions:
•⁠  ⁠setCandy(string c, int p): Sets the color and points of the candy.
•⁠  ⁠displayCandy(): Displays the color and points of the candy.
In main(), create two Candy objects, set their values using setCandy method, and display them using displayCandy().*/

#include<iostream>
using namespace std;
class Candy
{
    string color;
    int points;
    public:
    void setCandy(string c,int p);
    void displayCandy();
};
void Candy::setCandy(string c, int p)
{
    color=c; points=p;
}
void Candy::displayCandy()
{
    cout<<"\n Color of the Candy : "<<color;
    cout<<"\n Your points are : "<<points;
}
int main()
{
    Candy c1,c2;
    c1.setCandy("Blue",28);
    c1.displayCandy();
    c2.setCandy("Black",23);
    c2.displayCandy();
    return 0;
}