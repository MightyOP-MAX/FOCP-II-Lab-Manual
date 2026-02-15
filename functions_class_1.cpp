/*#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int main(){
   int sum;
   sum= add(10,5);
   cout<<sum;
}
*/


/*#include <iostream>
using namespace std;
void add(int a, int b)
{
    cout << a + b;
}

int main(){
    add(10,5);
}
*/

/*#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int a,b;
    cout<<"enter a & b";
    cin>>a>>b;
   int sum;
   sum= add(a,b);
   cout<<sum;
} */



/* forward declaration*/

/*#include <iostream>
using namespace std;
int add(int a,int b);  // function declaration


int main(){
    int a,b;
    cout<<"enter a & b";
    cin>>a>>b;
   int sum;

   sum= add(a,b); // function call

   cout<<sum;
   return 0;
}

int add(int a, int b){   // function definition
    return a + b;
}*/


/*
#include<iostream>
using namespace std;
int add(int a, int b);
float add(float f1, float f2);
double add(double d1, double d2);

int main(){
cout<<"\nsum of double: "<<add(50.661,60.342);
cout<<"\nsum of int: "<<add(50,60);

cout<<"\nsum of float: "<<add(50.0f,60.0f);    // for float to recognise it add ".0f" 
    return 0;
}

int add(int a, int b){
       cout<<" int ";
    return a+b;
 
}
float add(float f1, float f2){
      cout<<" float ";
    return f1+f2;
  
}
double add(double d1, double d2){
    cout<<" duble ";
    return d1+d2;
    
}*/


#include<iostream>
using namespace std;
void welcome(string="user");
int main()
{
    welcome();
    welcome ("section A");
    return 0;
}
void welcome(string name)
{cout<<"\n welcome"<<name;}
