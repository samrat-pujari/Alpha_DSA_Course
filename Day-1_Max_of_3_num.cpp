#include<iostream>
using namespace std;
// print max of three nums 
//input  - a=2 b=5 c=1 
//output - max num = 5

void PrintMax(int a, int b, int c){
    if (a>b){
        if(a>c){
            cout<<"Max num is: "<<c<<endl;
        }
        else{
            cout<<"Max num is: "<<a<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"Max num is:"<<b<<endl;
        }
        else{
            cout<<"Max num is: "<<c<<endl;
        }
    }
}

int main(){
    int a, b, c;
    cout<<"Enter num A ";
    cin>>a;
    cout<<"Enter num B ";
    cin>>b;
    cout<<"Enter num C ";
    cin>>c;
    PrintMax(a,b,c);   
}