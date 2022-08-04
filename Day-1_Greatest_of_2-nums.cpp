/*
Title: Find Greatest of Two numbers
Input: Two number(no1,no2)
output: Greater Number
*/
#include<iostream>
using namespace std;

int GreaterNumber(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    int num1,num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"Greater Number is: "<<GreaterNumber(num1,num2);
}