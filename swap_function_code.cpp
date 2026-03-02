#include <iostream>
using namespace std;

void Swap (int a, int b);
void Swap (float x, float y);

int main()
{int a,b;
    cin>>a>>b;

    float x,y;
    cin>>x>>y;

    Swap (a, b);  
    Swap (x, y); 

    cout<<"After Swap\n";
    cout<< a << " " << b << "\n";   
    cout<< x << " " << y << endl; 
    return 0;
}

void Swap(int a, int b){ 
        int t = a;
        a = b;
        b = t;
        cout << a << " " << b << endl;
    }

void Swap(float x, float y){ 
        float t = x;
        x = y;
        y = t;
        cout << x << " " << y << endl;
    }