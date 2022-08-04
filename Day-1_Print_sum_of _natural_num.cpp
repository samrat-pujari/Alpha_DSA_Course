/*
Title: Sum of N Natural numbers 
input- n=5
output- 1+2+3+4+5=15
*/
#include<iostream>
using namespace std;

void PrintSumOfNaturalNum(int n){
    int val=1;
    int sum=0;
    while(val<=n){
        sum=sum+val;
        val=val+1;
    }
    cout<<"sum of "<<n<<" natural number is: "<<sum;
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    PrintSumOfNaturalNum(n);
}