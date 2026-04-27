#include <iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin("data.txt");
    string line;

    while(fin>>line)
//while(getline(fin.line))
{
    cout<<line<<endl;
}

fin.close();
}
