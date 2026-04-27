#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
fstream fout("data.txt",ios::out);
fout << "This is file handling in c++\n";
fout<< "this is file handling in c++ where ios::out truncates the file";
 fout.close();
cout<< "data written successfully\n";
ifstream fin("./data.txt");
string line;

// getline(fin,line);//use while to display the text of whole file
// cout<<line;
while(getline(fin,line)){
    cout << line << endl;
}
fin.close();
    return 0;
}