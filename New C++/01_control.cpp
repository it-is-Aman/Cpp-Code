#include<iostream>

using namespace std;

// int main(){

//     if - else if - else
//     int num;
//     cout<<"enter your number"<<endl;
//     cin>>num;
//     if(num==1){
//         cout<<"AWESOME!"<<endl;
//     }
//     else if(num==2){
//         cout<<"HMM!"<<endl;
//     }
//     else{
//         cout<<"NOPE!"<<endl;
//     }

//     switch case
//     int num;
//     cout<<"enter your number"<<endl;
//     cin>>num;
//     switch(num){
//         case 1:cout<<"AWESOME"<<endl;
//         break;
//         case 2:cout<<"HMM"<<endl;
//         break;
//     default:cout<<"NOPE"<<endl;
//     }

//     loop

//     while loop
//     int i=1;
//     while(i<=10){                                    
//         cout<<2*i<<endl;
//         i++;
//     }

//     int i=1;
//     while(true){                                     //for infinite loop write true or 1 in condition
//         cout<<i<<endl;
//         i++;
//     }

//     do while loop
//     int i=1;
//     do{                                             //execute at least once
//         cout<<2*i<<endl;
//         i++;
//     }while(i<=10);

//     for loop
//     for(int i=1;i<=10;i++){
//         cout<<2*i<<endl;
//     }


//     continue  and break
//     for(int i=0;i<=10;i++){
//         if(i==2){
//             continue;
//         }
//         else if(i==8){
//             break;
//         }
//         cout<<i<<endl;
//     }


//     pointers
//     int a=4;
//     int* b=&a;
//     int** c=&b;

//     cout<<"value of a is: "<<a<<endl;
//     cout<<"value of a is: "<<*b<<endl;
//     cout<<"value of a is: "<<**c<<endl;

//     cout<<"address of a is: "<<&a<<endl;
//     cout<<"address of a is: "<<b<<endl;
//     cout<<"address of a is: "<<*c<<endl;
//     cout<<"address of b is: "<<&b<<endl;
//     cout<<"address of b is: "<<c<<endl;

//     cout<<"address of c is: "<<&c<<endl;

//     Array
//     int math[3]={1,5,4};
//     for(int i=0;i<3;i++) {
//         cout<<math[i]<<endl;
//     }       
//                                                     the name of the array is an address of the first index of an array
//                                                     (*ptr = &math) wrong but (*ptr = math) right 

//     int *ptr=math;                      
//     for(int i=0;i<3;i++){
//         cout<<*(ptr+i)<<endl;
//     }                                    

//     structure and union and emu

//     typedef struct army{                                 //use typedef so you don't need to write struct army a1,a2 just use (ar a1,a1) 
//         int num;
//         char name;
//     }ar;

//     typedef union army{                                      //Unions use shared memory so only 1 variable can be used at a time
//         int num;
//         char name;
//     }ar;

//      //int main(){

//         structure
//         struct army a1,a2;                                 //already use typedef so don't need to write this      
//         ar a1,a2;
//         a1.num=20;
//         a1.name='a';
//         a2.num=10;
//         a2.name='q';
//         cout<<"army 1 :"<<a1.num<<a1.name<<endl;
//         cout<<"army 2 :"<<a2.num<<a2.name<<endl;

//         union
//         ar a1,a2;
//         a1.num=2;
//         // a1.name='a';                                 //give garbage value if use omly 1 variable used at a time
//         cout<<"union of army 1 num :"<<a1.num<<endl;

//         enum
//         enum arm{qwe,asd,zxc};                              //it convert string(word) writen in enum into integer(num)
//         arm a=qwe,e=zxc;
//         cout<<a<<endl;
//         cout<<e<<endl;
//         cout<<qwe<<endl;
//         cout<<asd<<endl;
//         cout<<zxc<<endl;

//      //      return 0;
//      //  }

//     return 0;
// }