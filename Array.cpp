#include <iostream>
using namespace std;

int main() {
    int arr[50];
    cout<< arr[4]<<endl;
    return 0;
}

// Size of array
#include <iostream>
using namespace std;

int main() 
{
   int marks[5]={3,5,6,7,8};
   cout<< sizeof(marks)/4 <<endl;
   return 0;
}

// loop
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {7, 6, 4, 9, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    for (int idx = 0; idx < len; idx++) {
        cout << arr[idx] << endl;
    }
    
    return 0;
}
// arry by user
#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int len = sizeof(arr) / sizeof(arr[0]);
    
      for (int idx = 0; idx < len; idx++) {
        cin>> arr[idx]; 
    }
    for (int idx = 0; idx < len; idx++) {
        cout << arr[idx] << endl;
    }
    
    return 0;
}

// max of arrry
#include <iostream>
using namespace std;

int main() {
    int arr[5]={5,7,9,3,2};
    int n = sizeof(arr) / sizeof(int);
    int max=arr[0];

for(int i=0; i<n; i++){
  
    if( arr[i] > max){
       max=arr[i];
       cout<<"asinged value :"<< arr[i] << "max "<< endl;
    }
}
    cout << "max=: "<<max<<endl;
    
    
    return 0;
}


// smallest of arry
#include <iostream>
using namespace std;

int main() {
    int arr[5]={5,7,9,3,2};
    int n = sizeof(arr) / sizeof(int);
    int min=arr[0];

for(int i=0; i<n; i++){
  
    if( arr[i] < min){
       min=arr[i];
       cout<<"asinged value :"<< arr[i] << "min"<< endl;
    }
}
    cout << "min=: "<<min<<endl;
    
    
    return 0;
}

