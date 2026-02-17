/*Expected Output (After Fixing)
1 occurs 2 times
2 occurs 2 times
3 occurs 1 time*/


 //Frequency Counter (Avoid Duplicate Printing)
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 2, 3, 1};

    for(int i = 0; i < 5; i++) {
        int count = 0;

        for(int j = 0; j < 5; j++) {
            if(arr[i] == arr[j])
                count++;
        }
     for(int a = 0; a < i; a++) {
            if(arr[i] == arr[a]){
                goto end;}
            }


        cout << arr[i] << " occurs " << count << " times\n";
        end:;
    }

    return 0;
}
