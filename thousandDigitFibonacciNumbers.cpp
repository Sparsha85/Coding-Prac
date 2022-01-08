#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;
    int i;
    for (i=2; i < 1000; i++){
        arr[i] = arr[i-1] + arr[i - 2];
    }
    int j;
    for(j=0;j<1000;j++){
        cout << arr[j] << " ";
    }
}