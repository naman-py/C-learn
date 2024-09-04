//PATTERN PROBLEMS 
/*
********
********
********
*/

#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the length of the rectangle : ";
    cin>>l;
    cout<<"Enter the width of the rectangle : ";
    cin>>b;
    for(int i =1;i<=b;i++){
        for(int j = 1;j<=l;j++){
            cout<<" + ";
        }
        cout<<endl;
    }
}

/*
Print tha square 
**
**
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the square : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
*/
/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4*/
/*
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the length of the square : ";
    int m;
    cin>>m;
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=m;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}
*/
/*
1 1 1
2 2 2
3 3 3
*/
/*
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the length of the square : ";
    int m;
    cin>>m;
    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=m;j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
}
*/
/*
A B C D
A B C D
A B C D
A B C D*/
/*
#include<iostream>
using namespace std;
int main(){
    char ch = 'A';
    cout<<"Enter the length : ";
    int l;
    cin>>l;
    for(int i = 1;i<=l;i++){
        for(int j = 1;j<=l;j++){
            cout<<" "<<ch++<<" ";
        }
        ch = 'A';
        cout<<endl;
    }
}
*/
/*
* 
* * 
* * *
* * * *
*/
/*
#include<iostream>
using namespace std;
int main(){
    int o;
    cin>>o;
    for(int i = 1;i<=o;i++){
        for(int j = 1;j<=i;j++) cout<<" * ";
        cout<<endl;
    }
}
*/
/*
* * * * * *
*         *
* * * * * *
*/
/*
#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the length : ";
    cin>>l;
    cout<<"Enter the width : ";
    cin>>b;
    for(int i = 1;i<=b;i++){
        for (int j = 1;j<=l;j++){
            if (i==1 || i==b){
                cout<<" *";
            }
            else{
                if (j==1 || j==l){
                    cout<<" *";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }   
}
*/
/*
1
1 2
1 2 3
1 2 3 4*/
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    for (int i = 1;i<=p;i++){
        for (int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
*/
/*
A 
A B
A B C
A B C D*/
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    char ch = 'A';
    for (int i = 1;i<=p;i++){
        for (int j = 1;j<=i;j++){
            cout<<ch++<<" ";
        }
        ch = 'A';
        cout<<endl;
    }

}
*/
/*
1
A B 
1 2 3
A B C D*/
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    char ch = 'A';
    for(int i = 1;i<=p;i++){
        for(int j = 1;j<=i;j++){
            if (i%2==0){
                cout<<ch++<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        ch = 'A';
        cout<<endl;
    }
}*/
/*
* * * *
* * *
* *
*
*/
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    for(int i = p;i>=1;i--){
        for(int j = 1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
*/
/*
1 2 3 4
1 2 3
1 2
1
*/
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    for(int i = p;i>=1;i--){
        for(int j = 1; j<= i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
*/
/*
1 1 1 1
2 2 2
3 3
4 */
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    int x = 1;
    for(int i = p;i>=1;i--){
        for(int j = 1; j<= i;j++){
            cout<<x<<" ";
        }
        x++;
        cout<<endl;
    }
    
}*/
/*
4
4 3
4 3 2
4 3 2 1*/
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    int x = p;
    for(int i = 1;i<=p;i++){
        for(int j = 1; j<= i;j++){
            cout<<x--<<" ";
        }
        x = p;
        cout<<endl;
    }
    
}
*/
/*
1 
1 3 
1 3 5
1 3 5 7 
*/
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    for(int i = 1;i<=p;i++){
        for(int j = 0; j<i;j++){
            cout<<2*j+1<<" ";
        }
        cout<<endl;
    }
    
}
*/
/*
1
2 3
4 5 6
7 8 9 10
*/
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    int x = 1;
    for(int i = 1;i<=p;i++){
        for(int j = 1; j<=i;j++){
            cout<<x++<<" ";
        }
        cout<<endl;
    }
    
}
*/
/*
1
0 1
1 0 1
0 1 0 1 */
/*
#include<iostream>
using namespace std;
int main(){
    int p;
    cin>>p;
    for(int i = 1;i<=p;i++){
        for(int j = 1; j<=i;j++){
            if (i%2!=0){
                if (j%2!=0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            else{
                if (j%2!=0){
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
        }
        cout<<endl;
    }
    
}
*/
/*
     *    
     *     
 * * * * *
     *    
     * 
*/
/*
#include<iostream>
using namespace std;
int main(){
    int h;
    cout<<"Enter the odd number : ";
    cin>>h;
    int w = (h+1)/2;
    for(int i =1;i<=h;i++){
        for(int j = 1;j<=h;j++){
            if (i==w){
                cout<<"* ";
            }
            else{
                if (j==w){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}
*/
/*
*       *
  *   *
    *
  *   *
*       *
*/
/*
#include<iostream>
using namespace std;
int main(){
    int l;
    cout<<"Enter the length - ";
    cin>>l;
    int d = l;
    int mid = (l+1)/2;
    for(int i = 1;i<=l;i++){
        for(int j=1;j<=l;j++){
            if (i==mid and j==mid){
                cout<<"* ";
                break;
            }
            else{
                if (j==i || j==d){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        d--;
        cout<<endl;
    }
}

*/
/*
      *
    * *
  * * *
* * * * 
 */
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //METHOD 1
    
    for(int i = n;i>=1;i--){
        for(int j = 1;j<=n;j++){
            if (j>=i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    
   //METHOD 2
   //USING TWO LOOPS IN ONE LOOP
   
   int h = 1;
   for (int i = n;i>=1;i--){
    for(int j = 1;j<=i;j++){
        cout<<"  ";
    }
    for(int j = 1;j<=h;j++){
        cout<<"* ";
    }
    h++;2
    cout<<endl;
   }
}
*/
