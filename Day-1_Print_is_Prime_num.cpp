#include<iostream>

void CheckPrime(int n){
    int div=2;
    while(div<n){
        if(n%div==0){
            std::cout<<"Number "<<n<<" is not Prime";
            break;
        }
        else{
            div=div+1;
        }
    }
    if(n==div){
        std::cout<<"number "<<n<<" is prime number";
    }    
}

int main(){
    int n;
    using namespace std;
    cout<<"Enter Number to Check is Prime or Not: ";
    cin>>n;

    CheckPrime(n);
}