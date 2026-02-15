/* Que-> Implement a modular C++ solution that reads marks for 10 subjects into an array in main() and 
delegates the computation of average, minimum, and maximum scores to a separate method computePerformance() */
#include<iostream>
using namespace std;
void computePerformance(int marks[]);

int main(){
int score[10];

for(int i=0; i<10;i++){
cin>>score[i];}
computePerformance( score);
return 0;
}

void computePerformance(int marks[]){
int min,max,tot=0;
float avg;

for(int i=0; i<10;i++){ // for totaling
tot=marks[i]+tot;
}

avg=tot/10.0; //for average

max=marks[0];
for(int i=1; i<10;i++){ //for max
if(max<marks[i])
{max=marks[i];}
}

min=marks[0];
for(int i=1; i<10;i++){//for min
if(min>marks[i])
{min=marks[i];}
}
cout<<"total is "<<tot<<"\n"<<"average is "<<avg;
cout<<"\nmax marks are "<<max<<"\nmin marks are "<<min<<"\n";
}
