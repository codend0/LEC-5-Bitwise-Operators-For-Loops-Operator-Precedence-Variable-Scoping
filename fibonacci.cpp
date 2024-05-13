/* FIBONACI SEQUENCE IT IS A SEQUENCE IN EHICH PREVIOUS TWO TERM SUM IS SUM OF NEXT TERM
0 1 1 2 3 5 8 13 21 34 55 89 
*/


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;//starting no. is 0
    int b=1;//and next no. is 1
    cout<<a<<" "<< b<<" " ; //we will print this two 
    for(int i=1;i<=n;i++){//for loop 
    int nextnumber=a+b;//because next term is sum of previous two
    cout<<nextnumber<< ' ';//print next number
    a=b;//now for further continuation of series we first consider b to be first term
    b=nextnumber;//and nextnumber to be second term as such the next term after that will be sum of this two
    
        
    }   

}
