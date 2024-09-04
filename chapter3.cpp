//LOOPS
//FOR LOOP
//Example - print hello world n times. take n as a user input 
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter - ";
    cin>>x;
    for(int i = 1;i<=x;i++){
        cout<<"Hello world\n";
    }
}
*/
//quiz - print even numbers between 1 to 100
/*
#include<iostream>
using namespace std;
int main(){
    cout<<"Even numbers between 1 to 100 :- \n";
    //method 1
    for (int i = 1;i<=100;i++){
        (i%2==0) ? cout<<i<<endl : cout<<"";
    }
    *//*
    // method 2
    for (int i = 2;i<=100;i=i+2){
        cout<<i<<endl;
    }
}
*/
//Quiz - print the table of n. take n as a user input
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number - ";
    cin>>x;
    int m = x*10;
    for(int i = x;i<=m;i = i+x){
        cout<<i<<endl;
    }
}
*/
//Quiz - print this AP - 1,3,5,7,9...upto n terms. Take n as a user input 
//METHOD 1
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter - ";
    cin>>x;
    for (int i = 1;i<=x;i++){
        int ap = 1+(i-1)*2;
        cout<<ap<<endl;
    }
} 
*/
//now the ap is 4,7,10,...n
//METHOD 2
/*
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter - ";
    cin>>x;
    for (int i = 4;i<=1+(3*x);i=i+3){
        cout<<i<<endl;
    }
}
*/
//display gp - 1,2,4,8...n
/*
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter - ";
    int n;
    cin>>n;
    int a = 1;
    for(int i = 1;i<=n;i++){
        cout<<a<<endl;
        a *= 2;
    }
}
*/
// write a program to find out the highest factor of any number 
/*
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no. - ";
    int n;
    cin>>n;
//method 1
    int fc;
    for(int i = 1;i<n;i++){
        if(n%i==0){
            fc=i;
        }
    }
    cout<<"Highest factor of "<<n<<" is "<<fc<<"\n";
//method 2
    cout<<"Highest factor of "<<n<<" is "<<n/2;
}
*/
//check composite number
//BREAK STATEMENT 
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter : ";
    cin>>n;
    for (int i = 2;i<=n/2;i++){
        if (n%i==0){
            cout<<"composite";
            break;
        }
    }
}
*/
//CONTINUE STATEMENT
//Print numbers 1 to 20 except 3 & 8
/*
#include<iostream>
using namespace std;
int main(){
    for (int i = 1;i<=20;i++){
        if (i==3 or i==8){
            continue;
        }
        cout<<i<<endl;
    }
}
*/
// WHILE LOOP
/*
#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i<=10){
        cout<<i<<endl;
        i++;
    }
}
*/
//Another syntax of for loop just like while loop
/*
#include<iostream>
using namespace std;
int main(){
    int i=1;
    for(;i<=10;){
        cout<<i<<endl;
        i++;
    }
}
*/
//D0-WHILE LOOP
/*
#include<iostream>
using namespace std;
int main(){
    int i = 1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=10);
}
*/
//write a program to count the number of digits in given number
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter : ";
    cin>>n;
    int x = 10;
    int g = 1;
    if(n<10){
        cout<<"it has only "<<g<<" digit.\n";
    }
    else{
        for(int i = 1;i<=n;i++){
            if(i==x){
                x *= 10;
                g++;
                continue;
            }
        }
        cout<<"it has "<<g<<" digits.";
    }
}
*/
//method 2
/*
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    int count = 0;
    while(n!=0){
        n = n/10;
        count++;
    }
    cout<<"It has "<<count<<" digits.";
} 
*/
//Write a program to print a sum of digits of a given number
/*
#include<iostream>
using namespace std;
int main(){
    int d;
    int n;
    int sum = 0;
    cout<<"Enter a number : ";
    cin>>n;
    while (n!=0)
    {
        d = n%10;
        n = n/10;
        sum = sum + d;
    }
    cout<<"Sum of digits are "<<sum;
        
}
*/
// write a program to print the revers of a number 
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int h = n;
    int sum = 0;
    int d;
    while(n!=0){
        d = n%10;
        sum *= 10;
        sum += d;
        n /= 10;
    }
    cout<<h<<" : "<<sum;
}
*/
//Print the factorial of a given number
/*
#include <iostream>
using namespace std;
main(){
   int n;
   cout<<"Enter : ";
   cin>>n;
   int product = 1;
   for(int i = 1;i<=n;i++){
    product *= i;
   }
   cout<<product;
}
*/
//Print the factorial of first n numbers
/*
#include <iostream>
using namespace std;
main(){
   int n;
   cout<<"Enter : ";
   cin>>n;
   int product = 1;
   for(int i = 1;i<=n;i++){
    product *= i;
    cout<<i<<"! = "<<product<<endl;
   }
}
*/
//Write a program to print all the ascii values of 26 alphabets using while loop
/*
#include<iostream>
using namespace std;
int main(){
    cout<<"ASCII value of capital letters : \n";
    char w = 'A';
    while(w<='Z'){
        cout<<"ASCII value of "<<w<<" is "<<int(w)<<endl;
        w++;
    }
    cout<<"ASCII value of small letters : \n";
    char ch = 'a';
    while(ch<='z'){
        cout<<"ASCII value of "<<ch<<" is "<<int(ch)<<endl;
        ch++;
    }
}
*/
