#include<iostream>
using namespace std;

//function

// int sum(int ,int);
// int main(){
//     int a,b;
//     cout<<"enter num 1 and 2"<<endl;
//     cin>>a>>b;
//     cout<<"sum is :"<<sum(a,b);
    
//     return 0;
// }
// int sum(int a,int b){
//     return a+b;
// }

//call by value 
// void swap_var(int a,int b){
//     int temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     int a=4,b=7;
//     cout<<"before swap a "<<a<<" b "<<b<<endl;
//     swap_var(a,b);
//     cout<<"after swap a "<<a<<" b "<<b<<endl;
//     return 0;
// }

//call by pointer
// void swap_ptr(int* a,int* b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=4,b=7;
//     cout<<"before swap a "<<a<<" b "<<b<<endl;
//     swap_ptr(&a,&b);
//     cout<<"after swap a "<<a<<" b "<<b<<endl;
//     return 0;
// }

//call by reference
// void swap_ref(int& a,int& b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

// int& ref_return(int& a,int& b){                                     
//     return a;
// }

// int main(){
//     int x=4,y=7;
//     // cout<<"before swap a "<<x<<" b "<<y<<endl;
//     // swap_ref(x,y);
//     // cout<<"after swap a "<<x<<" b "<<y<<endl;
//     ref_return(x,y)=33;                                            //we return reference (a) which refer (x) so in directly we assign 33 in (x) 
//     cout<<"x is "<<x<<" y is "<<y<<endl;                        //it will print x is 33 and y is 7
//     return 0;
// }

//inline function
// inline sum(int a,int b){                                            
//     return a+b;
// }
// int main(){
//     int x=2,y=3;
//     cout<<"sum is : "<<sum(x,y)<<endl;                              //it reduce the execution time
//     cout<<"sum is : "<<sum(x,y)<<endl;
//     cout<<"sum is : "<<sum(x,y)<<endl;
//     cout<<"sum is : "<<sum(x,y)<<endl;
//     cout<<"sum is : "<<sum(x,y)<<endl;
//     return 0;
// }

// default function
// int value(int a,int b=2){                                             //function use default value if we don't input value
//     return a+b;
// }
// int main(){
//     int x=7;
//     cout<<"sum is : "<<value(x)<<endl;                              
//     cout<<"sum is : "<<value(x,5)<<endl;                              
//     return 0;
// }

// condtant function
// int strlen(const char *p){

// }

//recursion
// int fact(int n){
//     if(n<=1){
//         return 1;
//     }
//     else {
//         return n*fact(n-1);
//     }
// }

// int fib(int n){
//     if(n<=1){
//         return n;
//     }
//     else {
//         return fib(n-1) + fib(n-2);
//     }
// }

// int main(){
//     int num;
//     cout<<"enter num"<<endl;
//     cin>>num;
//     cout<<"your factorial of "<<num<<" is "<<fact(num)<<endl;

//     // Step by step calculation of factorial(4)
//     // factorial(4) = 4 * factorial(3); 
//     // factorial(4) = 4 * 3 * factorial(2);
//     // factorial(4) = 4 * 3 * 2 * factorial(1);
//     // factorial(4) = 4 * 3 * 2 * 1;
//     // factorial(4) = 24;


//     cout<<"your fibonacci of "<<num<<" is "<<fib(num)<<endl;

//     return 0;
// }

//overloading                                                               //make more then one function with same name but different parameters
// int volume(int a){
//     return (a*a*a);
// }
// int volume(int r,int h){
//     return (3.14*r*r*h);
// }
// int volume(int a,int b,int c){
//     return (a*b*c);
// }
// int main(){
//     cout<<"volume of cube is: "<<volume(2)<<endl;
//     cout<<"volume of cylinder is: "<<volume(2,3)<<endl;
//     cout<<"volume of cuboid is: "<<volume(2,3,4)<<endl;

//     return 0;
// }