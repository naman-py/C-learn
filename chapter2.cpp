//CONDITIONALS
//IF-ELSE STATEMENT
//EXAMPLE - Take a positive integer iput and tell if it is even or odd
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    if(x%2==0){
        cout<<"It is even ";
    }
    else{
        cout<<"It is odd";
    }
}
*/
//Quiz - Take positive integer input and tell if it is divisible by 5 or not.
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    if(x%5==0){
        cout<<"It is divisible by 5";
    }
    else {
        cout<<"It is not divisible by 5";
    }
}
*/
//Quiz - Take integer input and print the absolute value of that integer 
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    if(x<0){
        cout<<"absolute value of "<<x<<" is "<<-x;
    }
    else {
        cout<<"absolute value of "<<x<<" is "<<x;
    }
}
*/
//Quiz - If cost price and selling price of an item is input through the keyword, write a program to determine whether the seller has made profit or lossor no profit or no loss. Also determine how much profit he made or loss he incurred
/*
#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter Selling price : ";
    cin>>sp;
    float tp = (float)(sp - cp);
    if (tp<0){
        cout<<"Shopkeeper is in loss of Rs."<<-tp;
    }
    if (tp==0){
        cout<<"There is no loss or no profit of shopkeeper";
    }
    if (tp>0){
        cout<<"Shopkeeper gain a profit of Rs."<<tp;
    }
}
*/
//Quiz - Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greaater than its parameter.
/*
#include<iostream>
using namespace std;
int main(){
    float l, b;
    cout<<"Enter length - ";
    cin>>l;
    cout<<"Enter Breadth - ";
    cin>>b;
    float area = (float)l*b;
    float perimeter = (float)2*(l+b);    
    if (area>perimeter){
        cout<<"Area is greater than perimter ";
    }
    else if(perimeter>area){
        cout<<"Perimeter is greater than area "; //by using 'else if' if the condition is true than compiler are not compile second line 
    }
    else {
        cout<<"Area is equal to perimeter ";
    }
}
*/
 
//MULTIPLE CONDITIONS USING && AND ||
//Example - Take positive integer input and tell if it is a three digit number or not
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    if (x>99 && x<1000){
        cout<<"It is a three digit number";
    }
    else{
        cout<<"It is not a three digit number";
    }
} 
*/ 
//Quiz - Take a positive integer input and tell if it is divisible by 5 and 3.
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number - ";
    cin>>x;
    if (x%5==0 and x%3==0){  //we can also write 'and' instead of '&&'
        cout<<"Number is divisible by both 5 and 3";
    }
    else{
        cout<<"Number is not divisible by both 5 and 3";
    }
}
*/

//Quiz - Take positive integer input and tell if it is divisible by 5 or 3.
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter number : ";
    cin>>x;
    if (x%5==0 or x%3==0){   //we can also write 'or' instead of '||'
        cout<<"Divisible by 5 or 3.";
    }
    else {
        cout<<"Not divisible by 5 or 3.";
    }
}
*/

//Quiz - Take 3 numbers input and tell if they can be the sides of a triangle 
/*
#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter first side - ";
    cin>>a;
    cout<<"Enter second side - ";
    cin>>b;
    cout<<"Enter third side - ";
    cin>>c;
    if (a+b>c && b+c>a && a+c>b){
        cout<<"These lines are the sides of triangle ";
    }
    else {
        cout<<"These lines are not the sides of triangle";
    }
}
*/

//Quiz - Take 3 positive intgers input and print the greatest of them 
/*
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter x - ";
    cin>>x;
    cout<<"Enter y - ";
    cin>>y;
    cout<<"Enter z - ";
    cin>>z;
    if(x>y && x>z){
        cout<<"x is greater than y and z";
    }
    else if(y>x && y>z){
        cout<<"y is greater than x and z";
    }
    else if(z>y && z>x){
        cout<<"z is greater than y and x";
    }
}
*/
//Quiz - Take 3 positive integers input and print the least of them
/*
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter x - ";
    cin>>x;
    cout<<"Enter y - ";
    cin>>y;
    cout<<"Enter z - ";
    cin>>z;
    if(x<y && x<z){
        cout<<"x is lesser than y and z";
    }
    else if(y<x && y<z){
        cout<<"y is lesser than x and z";
    }
    else if(z<y && z<x){
        cout<<"z is lesser than y and x";
    }
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x - ";
    cin>>x;
    if((x%3==0 || x%5==0) && x%15!=0){
        cout<<"x is divisible by 5 or 3 but not divisible by 15";
    }
    else{
        cout<<"x is not divisible by 5,3 and 15";
    }
}
*/

//NESTED IF-ELSE
//QUIZ - Take three positive integer and print the greatest of them.
/*
#include<iostream>
using namespace std;
int main(){
    
    int x,y,z;
    cout<<"Enter x - ";
    cin>>x;
    cout<<"Enter y - ";
    cin>>y;
    cout<<"Enter z - ";
    cin>>z;
    if (x>y){
        if(x>z){
            cout<<"x is greater than y and z.";
        }
    }
    if(y>x){
        if (y>z){
            cout<<"y is greater than x and z.";
        }
    }
     if(z>x){
        if(z>y){
            cout<<"z is greater than x and y.";
        }
    }
    if (x==y){
        if (x==z){
            cout<<"all are equal to each other.";
        }
    }
    
}
*/
//If the ages of Ram,Shyam and Ajay are inpit through the keyboard, write a program to determine the youngest of the three.
/*
#include<iostream>
using namespace std;
int main(){
    int r,s,a;
    cout<<"Enter the age of Ram - ";
    cin>>r;
    cout<<"Enter the age of Shyam - ";
    cin>>s;
    cout<<"Enter the age of Ajay - ";
    cin>>a;
    if (r<s){
        if(r<a){
            cout<<"ram is younger than shyam and ajay.";
        }
        else{
            cout<<"ajay is younger than shyam and ram.";
        }
    }
    else {
        if(s<a){
            cout<<"shyam is younger than ajay and ram.";
        }
        else{
            cout<<"ajay is younger than ram and shyam";
        }
    }
}
*/
//Else if 
//Quiz - Take input percentage of a student and print the grade according to marks 
/*
#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter your percentage - ";
    cin>>x;
    if (x>=81 and x<=100){
        cout<<"Very good! you got an excellent marks";
    } 
    else if(x>=61 and x<=80){
        cout<<"its good";
    }
    else if (x>=41 && x<=60){
        cout<<"its an average";
    }
    else if (x<=40){
        cout<<"You are fail!";
    }
}
*/
//Quiz - Given a point(x,y) write a program to find out if it lies in the 1st Quadrant 
//2nd Quadrant, 3rd Quadrant, 4th Quadrant on the x-axis, y-axis or at the origin viz.(0,0)
/*
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x - ";
    cin>>x;
    cout<<"Enter y - ";
    cin>>y;
    if (x>0){
        if(y>0){
            cout<<"point is in first quadrant ";
        }
        else 
        {
            cout<<"point is in fourth quadrant ";
        }
    }
    else{
        if(y>0){
            cout<<"point is in second quadrant";
        }
        else{
            cout<<"point is in third quadrant";
        }
    }
}
*/
//Ternary operator
//expression 1? expression 2:expression 3;
// Example - take an input and check that it was a even number or not.
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number - ";
    cin>>x;
    
    if (x%2==0)cout<<"It is an even number ";
    else cout<<"It is an odd number";
    //Now using ternary operator
    //(condition) ? if true:if false

    (x%2==0) ? cout<<"even" : cout<<"odd";
}
*/

// SWITCH STATEMENT
//Quiz - Write a program to create a calculator that performs basic arithmatic operations
//(add, substract, multiply, and divide) using switch case .To calculate should 
//input two numbers and an operator from user.
/*
#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x;
    char op;
    cin>>op;
    float y;
    cin>>y;
    switch (op){
        case '+':
        cout<<x+y<<endl;
        break; //If there is no break keyword then computer execute all conditions
        case '-':
        cout<<x-y<<endl;
        break;
        case '*':
        cout<<x*y<<endl;
        break;
        case '/':
        cout<<x/y<<endl;
        break;
        default:
        cout<<"Invalid operator"<<endl;
    }
}
*/
