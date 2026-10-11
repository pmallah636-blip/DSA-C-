#include <bits/stdc++.h>
using namespace std;

void sayhello(){
    cout<<"hello ashu: "<< endl;
}

int main() {
	// your code goes here
	sayhello();
return 0;
}
// forword decleration

#include <bits/stdc++.h>
using namespace std;

void sayhello();

int main() {
	
	sayhello();
return 0;
}

void sayhello(){
    cout<<"hello ashu: "<< endl;
}

// syntex with parameter
#include <bits/stdc++.h>
using namespace std;

int sum(int a , int b){ // parameters 
    int sum = a+b;
  return sum;
}
 
int main() {
  int s=  sum( 3, 4); // arguments
  cout<<s<<endl;
    return 0;


}

#include <bits/stdc++.h>
using namespace std;

int sum(int a , int b=1 ){
    int sum = a+b;
  return sum;
}
 
int main() {
  int s=  sum( 3);// defalt argument
  cout<<s<<endl;
    return 0;


}
// qwestion 1
#include <bits/stdc++.h>
using namespace std;

int product(int a , int b){
    int product = a*b;
    return product;
}
int main(){
    int p= product(4,5);
    cout<<"product: ="<<p<<endl;
    return 0;
}

// question 2
#include <bits/stdc++.h>
using namespace std;

void fun(int a){
    if(a%2==0){
        cout<<"even no";
    }
    else{
        cout<<"odd no";
}
}
int main(){
    fun(6);
    cout<< "number is "<< fun<< endl;
    
    return 0;
}

// factorial problem
#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
   int fact=1;
   for(int i =1; i<=n; i++){
    fact=fact*i;
   }
  cout<< "factorial("<<n<<")="<< fact <<endl;
   return fact;
   
}
int main(){
    factorial(2);
     factorial(4);
      factorial(6);
       factorial(7);
        factorial(8);
         factorial(9);
   
    return 0;
}

// prime number
#include <iostream>
using namespace std;


bool isprime(int n){
    if(n==1){
        return false;
    }
    for( int i=2; i<n-1; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
  isprime(8);
  cout<<isprime(8);
   
    return 0;
}

// Binomial coefff

#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
        
    }
    return fact;
}

 
 int bincoffie(int n , int r){
    int val1 = factorial(n);
    
    int val2 = factorial(n-r);

    int val3= factorial(r);

    int result= val1/(val2*val3);
    return result;

 }
   
    int main(){
       cout<< bincoffie(4,2);
        
       
    }

    // Function over;oding;
    #include <iostream>
using namespace std;

int sum(int a, int b){
    cout<< (a+b) <<endl;
    return a+b;


}
double sum( double a , double b){
     cout<< (a+b) <<endl;
    return a+b;
}

int main(){
    sum(4,5);
    sum(7,9);
    sum(1.6,1.4);
    return 0;
}