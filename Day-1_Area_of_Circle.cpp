/*
Title: Print Area of Circle
Input: Radius
Output: Area of Circle  formula = 3.14*r*r
*/
#include<iostream>
using namespace std;

float CircleArea(float radius){
    float area=3.14*radius*radius;
    return area;
}

int main(){
    int radius=0;
    cout<<"Enter Radius: ";
    cin>>radius;
    cout<<"Area of Circle is: "<<CircleArea(radius);
}