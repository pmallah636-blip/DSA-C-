// // #include <iostream>
// // using namespace std;
// // int main(){
// //     for(int i=1; i<=5;
// //     i++){
// //         cout<<"heloo ashu"<<endl;
// //     }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// int main(){
//     int a = 0;
//     while(a<9){
//         cout<<"hello"<<endl;
//         a++;
//     }
// }

#include <iostream>
using namespace std;
int main(){
   for(int i=0; i<4; i++){
       cout<< "* * * * *" <<endl;
   }
}


#include <iostream>
using namespace std;
int main(){ int n;
cin>>n;
   for(int i=n; i>0; i--){
       cout<< i <<endl;
       
   }
}

// practice questions
#include <iostream>
using namespace std;
int main(){ 
    
    
int n=10829;
int lastdig;
int sum=0;
while(n>0){
    
    lastdig=n%10;
   if(lastdig%2!=0){
        sum+=lastdig;
    }
    n=n/10;
    cout<<sum<<endl;
}
}

//reverse of number usin loop
#include <iostream>
using namespace std;
int main(){ 
    
    
int n=10829;
int lastdig;

while(n>0){
    
    lastdig=n%10;
   
    n=n/10;
    cout<<lastdig<<endl;
}
}
//reverse and add
#include <iostream>
using namespace std;
int main(){ 
    
    
int n=10829;
int lastdig;
int res=0;

while(n>0){
    
    lastdig=n%10;
    res=res*10 + lastdig;
    n=n/10;
  
}
  cout<<res<<endl;
}

//do while loop
#include <iostream>
using namespace std;
int main(){ 
int i=0;
do{
    cout<<i<<endl;
    i++;
    
}
while(i<=5);
cout<<endl;
return 0;

}


// break statment 
#include <iostream>
using namespace std;
int main(){ 
    int n;
    
    do{
        cout<<"Enter a number :"<<endl;
        cin>>n;
        if(n%10== 0){
break;
        } cout<<"enterd number: "<<n<<endl;
    }while(true);

}


//continue statement
#include <iostream>
using namespace std;
int main(){ 
    int i=0;
   for(int i=0; i<=10; i++){
    if (i==3){
        continue;
    }
    cout<<i<<endl;
   }
}


//practice  sheet
#include <iostream>
using namespace std;

int sumdigit(int n ){
     int lastdigit;
     int sum=0;
    while(n>0){
       
        lastdigit=n%10;
        sum += lastdigit;
        n=n/10;
        
    }
    return sum;


}
int main(){
    cout<<sumdigit(3456);
    return 0;
}

//2 Q
#include <iostream>
using namespace std;

int add(int a , int b){
   
     return (a*a)+ (b*b)+ (2*a*b);

}

int main(){
    cout<<add(1,2);
    return 0;
}

// Q3
#include <iostream>
using namespace std;

int largest(int a, int b, int c) {
   
    if (a >= b && a >= c) {
        cout << "a is the largest" << endl;
    } 
   
    else if (b >= a && b >= c) {
        cout << "b is the largest" << endl;
    } 
  
    else {
        cout << "c is the largest" << endl;
    }
    
    return 0; 
}

int main() {
    largest(9,3,6); 
    return 0;
}
