//for checking if it a no. is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool primeornot=1;//we take primeornot variabe true
    for(int i=2;i<n;i++)//condition
    {
        if(n%i==0){//we take condition for prime
            primeornot=0;//if remeinder is 0 then primeornot is false
            break;}//if it is false then break the loop else continue it until i<n
    }
     if(primeornot==0)//if primeornot is false print not a prime number
     {        
    cout<<n<<"not a  prime number"<<endl;//else print it is 
         
     }
    else
    {
    cout<<n<<"is a prime no."<<endl;
        
    }
}
