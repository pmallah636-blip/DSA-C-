#include <iostream>
using namespace std;
class car{
    string name; 
    string colour;

    public:

    car( string carname , string colourname){
        cout<<"constructer is called and object is being created"<<endl;
        name= carname;
        colour = colourname;
    }
    void start(){
        cout<<"car is started"<<endl;
    }

    void stop(){
        cout<<"car is stoped"<<endl;
    }

    string getname(){
        return name;
    }
};

int main() 
{
   car c1("ashu 350 cc" , "black");

   cout<<"car name: "<< c1.getname();
    return 0;
}