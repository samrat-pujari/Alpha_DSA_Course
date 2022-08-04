/*
Title: Print even numbers from 9-100

Output: All even numbers
*/
#include<iostream>
using namespace std;

void EvenNum(int start, int end){
    
    for(int i=start;i<end;i++){
        if (i%2==0){
            cout<<i<<" ";
        }                
    }
}

int main(){
    EvenNum(9,100);
}