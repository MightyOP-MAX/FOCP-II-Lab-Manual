/* Que-> Implement a modular C++ solution that reads marks for 10 subjects into an array in main() and 
delegates the computation of average, minimum, and maximum scores to a separate method computePerformance() */
#include<iostream>
using namespace std;
void computePerformance(int marks[], int n);

int main(){
    int n;
    cout<<"enter no. od students";
cin>>n;
int score[n];


cout<<"enter marks of students";
for(int i=0; i<n;i++){
cin>>score[i];}
computePerformance(score,n);
return 0;
}

void computePerformance(int marks[], int n){
int min,max;
float avg,tot=0;

for(int i=0; i<n;i++){ // for totaling
tot=marks[i]+tot;
}

avg=tot/n; //for average

min=marks[0];
max=marks[0];
for(int i=1; i<n;i++){ //for max

if(max<marks[i])
{max=marks[i];}

if(min>marks[i])//fro min
{min=marks[i];}
}

cout<<"total is "<<tot<<"\n"<<"average is "<<avg;
cout<<"\nmax marks are "<<max<<"\nmin marks are "<<min<<"\n";
}