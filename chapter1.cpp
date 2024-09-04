/*#include<iostream>
using namespace std;
int main(){
    cout<<"my name is pranjal jain"<<endl<<"Good morning"; //'endl' this keyword is for next line like '\n'
    //cout<<endl;
    //cout<<"Good morning";
}*/
// this is comment 
//VARIABLES AND THEIR DECLARATION 
/*
#include<iostream>
using namespace std;
int main(){
    int x = 5; //Declaration and giving value to store
    int y = 10;
    cout<<x+y;
}*/
 
 // UPDATION OF VARIABLES 
/*
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<x<<endl;
    //x = 8;
    x = x + 7;  // x = 12 we can also write it as 'x += 7'
    cout<<x<<endl;
    // now the value of x is 12
    x = x - 10; // x = 2 we can also write it as 'x -= 10'
    cout<<x<<endl;
}*/

// ARITHMATIC OPERATORS
/*
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 10;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl; // answer iss 0.5 but computer prints only '0' which is integral part and '.5' which is decimal part
}*/

//FLOAT DATA TYPES
/*
#include<iostream>
using namespace std;
int main(){
    float x = 5;
    float y = 10;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
}
*/

//INCREAMENT AND DECREAMENT OPERATORS
/*
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<x<<endl;
    x++; // '++' increament operator and there is a post increament which means first we can use the value of x and then increase
    cout<<x<<endl;                   
    x--; // '--' decrement operator and there is a post decreament which means first we can use the value of x and thenn decrease 
    cout<<x<<endl;           
    ++x; // in this line it was a pre increament which means first we can increase the value of x and then use it
    cout<<x<<endl;
    --x; // in this line it was pre decreament which means first we can decrease the value of x and then use it
    cout<<x<<endl;
    cout<<++x<<endl; //example of pre increament 
} 
*/

//Quiz - Calculating area of circle 
/*
#include<iostream>
using namespace std;
int main(){
    float radius = 4;
    float area = 3.14*(radius*radius);
    cout<<"Area of the circle is "<<area<<" having a radius 4cm"<<endl;
}*/
//Quiz - Calculating Simple interest
/*
#include<iostream>
using namespace std;
int main(){
    float p = 15000;
    float r = 8;
    float t = 3;
    float interest = (p*r*t)/100;
    cout<<"Simple interest is "<<interest<<"\n";
    cout<<"Thank you for using visual studio code";
}
*/
//Quiz - Calculate Volume of sphere 
/*
#include<iostream>
using namespace std;
int main(){
    float r = 4;
    float vol = ((4*3.141592*r*r*r)/3);
    cout<<"Volume of circle having radius "<<r<<" is "<<vol;
}
*/
//VARIABLE NAMING RULES
//1 - Variables can start from an alphabet or underscore _ or $
//2 - Special characters except _ and $ are not allowed
//3 - Some particular keywords are not allowed
//4 - Commas or blanks are not allowed 

//TAKING INPUT 
/*
#include<iostream>
using namespace std;
int main(){
    int s;
    cout<<"Enter a Number - ";
    cin>>s;
    cout<<"Square of a number is "<<s*s;
}
*/

//QUIZ - sum of two numbers by taking user input
/*
#include<iostream>
using namespace std;
int main(){
    float x, y;
    cout<<"Enter first number - ";
    cin>>x;
    cout<<"Enter second number - ";
    cin>>y;
    float sum = x+y;
    cout<<"Sum of these two numbers - "<<sum;
}
*/
//Quiz - Take 3 numbers input from user and print their sum
/*
#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    cout<<"Enter first number - ";
    cin>>x;
    cout<<"Enter second number - ";
    cin>>y;
    cout<<"Enter third number - ";
    cin>>z;
    float sum = x+y+z;
    cout<<"Sum of these number - "<<sum;
}
*/
//MODULUS OPERATOR(%)
//It gives the remainder
//SOME IMPORTANT POINTS ABOUT THIS OPERATOR 
//1. a%b = a [if a<b]
//2. a%a = 0
//3. a%(-b) = a%b
//4. (-a)%b = -[a%b]
/*
#include<iostream>
using namespace std;
int main(){
    int x = 8, y = 3;
    cout<<x%y;// it gives remainder of 8/3 which is 2
} 
*/
//TYPECASTING 
//It means changing of data type 6
//EXAMPLE - take integer 'x' as input and print half of the number 
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number - ";
    cin>>x;
    float y = (float)x; //Typecast
    cout<<"half of the number - "<<y/2;
}
*/

//CHAR DATA TYPE
/*
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    cout<<ch;
}
*/

//ASCII VALUES
// a - 97; A - 65; 0(as a character) - 48
/*
#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    cout<<(int)ch; //We can print ASCII value by using typecasting 
}
*/
//INT TO CHAR (BY USING ASCII VALUE)
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    cout<<(char)x; //Output is 'A' if x = 65.
}
*/
