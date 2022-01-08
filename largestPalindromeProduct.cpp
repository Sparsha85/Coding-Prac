#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(long n){
    long r,sum=0,temp;      
    temp=n;    
    while(n>0)    
    {    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
    }    
    if(temp==sum)    
    return true;   
    else    
    return false; 
}

int findProduct(int n){
    int i,j;
    long product, maxP = 0;
    for (i=100; i < 999; i++){
        for (j=100; j< 999; j++){
            product = i * j;
            if(isPalindrome(product)){
                maxP = max(maxP, product);
            }
        }
    }

    return maxP;
}

int main(){
    cout << "Start" << endl;
    cout << "Largest palindrome product is " << findProduct(3);
}