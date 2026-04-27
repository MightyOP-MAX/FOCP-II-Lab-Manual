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
int count_line =0;
// getline(fin,line);//use while to display the text of whole file
// cout<<line;
while(getline(fin,line)){
    cout << line << endl;
    count_line++;
}

cout<< count_line<<endl;
fin.close();

ifstream fin2("./data.txt");
if (!fin2.is_open())//if(!fin)
{ cout<<"Issue with the file ";//it checks whether there is a file of this name or not
    //it prints 0 if there is no file of this name
}

int count_word =0;
while(fin2>>line){
    cout << line << endl;
    count_word++;
}
cout<<count_word;
fin2.close();
    return 0;
}