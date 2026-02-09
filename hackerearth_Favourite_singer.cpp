/*#include<iostream>
using namespace std;
int main()
{int N, track[1000],count[1000];
 int maxfreq=0;

cout<<"Enter the Number of Tracks:";
cin>>N;

for(int i=0; i<N; i++)
{
cout<< "Enter ID of the Track "<<i+1<<":";
cin>>track[i];
for(int j=0;j<N;j++)
      {
       if (track[i]==track[j]){
         count[i]++;}
      }
}

 int maxFreq = 0;
    for(int i = 0; i < N; i++)
    {
        if(count[i] > maxfreq)
            maxfreq = count[i];
    }
    cout<<"favourite singer is"<<maxfreq;

    return 0;
}*/

#include <iostream>
using namespace std;
int main() {
	int num;
	int scode[1000];
	cin >> num;  
	int fre[1000]= {0};
	for (int i =0;i<num ; i++){
		cin>>scode[i];
		
		fre[scode[i]]++;
	}
	int maxfreq = 0;
	for(int i =0 ; i<1000 ; i++){ 
	if(fre[i]>maxfreq){
		maxfreq = fre[i];
	 }
	}
	int count = 0;
	for(int i = 0 ; i<1000; i++){
		if(fre[i]==maxfreq){
			count++;
		}

	}
	cout<<count;
	return 0;
}