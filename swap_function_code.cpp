#include <iostream>
using namespace std;

void Swap (int &a, int &b);
void Swap (float &x, float &y);

int main()
{int a,b;
    cout<< "enter a=";
    cin>>a;

    cout<<"enter b=";
    cin>>a;

    float x,y;
     cout<< "enter x=";
    cin>>x;

     cout<< "enter y=";
    cin>>y;
cout<<"Before Swap\n";
    Swap (a, b);  
    Swap (x, y); 

    cout<<"After Swap\n";
    cout<< a <<" "<< b << "\n";   
    cout<< x << " "<< y << endl; 
    return 0;
}

void Swap(int &a, int &b){ 
        int t = a;
        a = b;
        b = t;
        cout << a << " " << b << endl;
    }

void Swap(float &x, float &y){ 
        float t = x;
        x = y;
        y = t;
        cout << x << " " << y << endl;
    }