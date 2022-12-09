#include<iostream>
using namespace std;
int i=0;
int x=1;
int N=0;

int main(){
    while (x!=0){
    cout << "Enter an integer: ";
    cin >> x;
    x=x;
    
    
    
    if(x%2==0){
    i+=1;
    }
    else{    
    N+=1;
    }        
}
    cout << "#Even numbers = " << i-1 << "\n";
    cout << "#Odd numbers = " << N << "\n";
   return 0;
}