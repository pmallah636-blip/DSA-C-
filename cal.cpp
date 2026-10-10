#include <iostream>
using namespace std;
int main(){
    int a;
    char op;
    cout<<"enter a number";
    cin>>a;
    int b;
    cout<<"enter a number";
    cin>>b;
    cin>>op;
    //calculater
    if(op == '+'){
        cout<<" sum: "<< a+b <<endl;
    }
    else if(op == '-'){
        cout<<"sub :"<<a-b<<endl;
    }
    return 0;
}