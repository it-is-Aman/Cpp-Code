// #include<iostream>
// #include<iomanip>

// #include"awesome.h"                                                  //user defined header file

// using namespace std;                                                    //using namespace std;  --->  cout

// int glo=07;

// int main(){                                                             //if not                --->  std::cout

    // int num;
    // std::cout<<"enter any number"<<std::endl;
    // std::cin>>num;
    // std::cout<<"twice is "<<num+num;


    //int num;
    //cout<<"enter any number"<<endl;
    //cin>>num;
    //if(num==7){
    //    cout<<"AWESOME "<<endl;
    //}


    //operator
    // int a=2,b=4;
    // cout<<"a+b "<<a+b<<", a-b "<<a-b<<endl;
    // cout<<"a==b "<<(a==b)<<", a!=b "<<(a!=b)<<endl;
    // cout<<"a==b and a>=b "<<((a==b)&&(a>=b))<<", a!=b or a<=b "<<(( !=b)||(a<=b))<<endl;


    //globle using ::
    // int glo=4;
    // cout<<"local glo is "<<glo<<endl;                                //:: used to print global
    // cout<<"global glo is "<<::glo<<endl;


    //Literals                                                          //change variable datatype by adding f,d in last
    // float a=2.5;
    // long double b=4.5;
    // cout<<"a is "<<a<<endl;
    // cout<<"b is "<<b<<endl;

    // cout<<"size of 2.5 is "<<sizeof(2.5)<<endl;
    // cout<<"size of 2.5f is "<<sizeof(2.5f)<<endl;
    // cout<<"size of 2.5l is "<<sizeof(2.5l)<<endl;
    // cout<<"size of 2.5l is "<<sizeof(2.5l)<<endl;


    //Reference variables                                               //use &b=a
    // int a=4;
    // int &b=a;                                                        //b refer a
    // cout<<"a is "<<a<<endl;
    // cout<<"b is "<<b<<endl;


    //Typecasting                                                       //change variable values
    // int num=12;
    // float flo=33.787;
    // cout<<"num is "<<num<<endl;
    // cout<<"num float is "<<float(num)<<endl;
    // cout<<"num float is "<<(float)num<<endl;

    // cout<<"flo is "<<flo<<endl;
    // cout<<"flo in integer is "<<int(flo)<<endl;                         //change decimal into integer or vice-versa by int(variable name) or (int)variable name
    // cout<<"flo in integer is "<<(int)flo<<endl;

    // cout<<"sum is "<<num + flo<<endl;
    // cout<<"sum is "<<num + int(flo)<<endl;


    //constants                                                         //const used to print constant value
    // int a=4;
    // cout<<"a was: "<<a<<endl;
    // a=6;
    // cout<<"a is: "<<a<<endl;

    // const int b=2;
    // cout<<"b was: "<<b<<endl;
    // // b=6;                                                           //this will give error caus b is constant
    // cout<<"b is: "<<b<<endl;


    //manipulator                                               //endl for next line and setw for specify width stw(3)
    // int a=3,b=43,c=466;
    // cout<<"a is before setw :"<<a<<endl;
    // cout<<"b is before setw :"<<b<<endl;
    // cout<<"c is before setw :"<<c<<endl;

    // cout<<"a is after setw :"<<setw(3)<<a<<endl;
    // cout<<"b is after setw :"<<setw(3)<<b<<endl;
    // cout<<"c is after setw :"<<setw(3)<<c<<endl;


//     return 0;
// }