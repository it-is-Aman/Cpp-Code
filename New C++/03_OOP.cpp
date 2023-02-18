//OOPs

// #include<iostream>
// using namespace std;
// class employee{
//         private:
//         char name;
//         int salary;

//         public:
//         char place;
//         int time;

//         void change(char name1,int salary1);               
//         void print(){                                   //function can be written in class itself but for outside use class name (::) function
//             cout<<"name is "<<name<<endl;
//             cout<<"salary is "<<salary<<endl;
//             cout<<"place is "<<place<<endl;
//             cout<<"time is "<<time<<endl;
//         }

// };

// // void employee :: print(){                            //can be written is this                   
// //     cout<<"name is "<<name<<endl;
// //     cout<<"salary is "<<salary<<endl;
// //     cout<<"place is "<<place<<endl;
// //     cout<<"time is "<<time<<endl;
// // }

// void employee :: change(char name1,int salary1){
//         name=name1;
//         salary=salary1;
// }

// int main(){
//     employee a;   
//     a.place='a',a.time=12;
//     // a.name='A',a.salary=20000;                       //give error because name and salary is in private
//     a.change('A',20000);                                
//     a.print();

// /*Public Access Modifier in C++
// All the variables and functions declared under public access modifier will be available for everyone.
// They can be accessed both inside and outside the class.
// Dot (.) operator is used in the program to access public data members directly.

// Private Access Modifier in C++
// All the variables and functions declared under a private access modifier can only be used inside the class.
// They are not permissible to be used by any object or function outside the class.
// */

//     return 0;
// }



                            // OOPs - Classes and objects

                            // C++ --> initially called --> C with classes by stroustroup
                            // class --> extension of structures (in C)
                            // structures had limitations
                            //      - members are public
                            //      - No methods
                            // classes --> structures + more
                            // classes --> can have methods and properties
                            // classes --> can make few members as private & few as public
                            // structures in C++ are typedefed
                            // you can declare objects along with the class declarion like this:
                            /* class Employee{
                                        // Class definition
                                    } harry, rohan, lovish; */
                            // harry.salary = 8 makes no sense if salary is private

                            // Nesting of member functions


// #include<iostream>
// #include<string>
// using namespace std;

// class data{
//     private:
//         string n;                                       //by default it is private
//         void check(void);
//         void display(void);
//     public:
//         void enter(void);
//         void encrypt(void);
//         void decrypt(void);

// };

// void data :: enter(void){
//     cout<<"enter your data less then 10 digit"<<endl;
//     cin>>n;
// }
// // void data :: check(void){                                        //don't know why not work
// //     if(n.length()>10){
// //         cout<<"enter less digits"<<endl;
// //         exit(0);
// //     }
// // }

// void data :: display(void){
//     void check(void);
//     for(int i=0;i<n.length();i++){
//         cout<<n.at(i);
//     }
// }

// void data :: encrypt(void){
//     d1.display();                                
//     for(int i=0;i<n.length();i++){
//         n.at(i)=n.at(i)+92;
//     }
// }

// void data :: decrypt(void){
//     d1.display();                                
//     for(int i=0;i<n.length();i++){
//         n.at(i)=n.at(i)-92;
//     }
// }

// int main(){
//     data d1;
//     d1.enter();
//     cout<<"your data "<<endl;
//     // d1.display();                                        //give error because display() is in private
//     d1.encrypt();                                           // //display () is the private access modifier of the class so we cannot access it directly by using the object, it can be only accessed inside the class or by the member function of the class.                 
//     cout<<"\nyour data after encrypt"<<endl;
//     // d1.display();
//     d1.decrypt();    
//     cout<<"\nyour data after decrypt"<<endl;
//     // d1.display();
    
//     return 0;
// }



//array in classes and edit data

// #include<iostream>
// using namespace std;

// class books{
//     private:
//         int id[100];
//         int price[100];
//         int value;
//     public:
//         void newdata(void){
//             value=0;
//         }
//         void data(void);
//         void display(void);
//         void editprice(void);
// };

// void books :: data(void){
//     cout<<"enter your book id and price"<<endl;
//     cin>>id[value]>>price[value];
//     value++;
// }
// void books :: display(void){
//     for(int i=0;i<value;i++){
//     cout<<"book id "<<id[i]<<" price "<<price[i]<<endl;
// }
// }
// void books :: editprice(void){
//     int op,np,n;
//     cout<<"enter book id"<<endl;
//     cin>>n;
//     for(int i=0;i<value;i++){
//         if(id[i]==n){
//             cout<<"enter new price"<<endl;
//             cin>>np;
//             price[i]=np;
//             break;
//         }
// }
//     cout<<"no book is found"<<endl;
// }

// int main(){
//     books a,b;
//     a.newdata();
//     a.data();
//     a.data();
//     a.data();
//     a.data();
//     a.display();
//     // b.newdata();
//     // b.data();
//     // b.data();
//     // b.display();
//     a.editprice();
//     a.display();
//     return 0;
// }



//static variable and funtion

// #include<iostream>
// using namespace std;

// class number{
//     private:
//         int num=0;
//         int id;
//         static int st_num;                                                                      //if use static then you will have to declare it in outer class also 
//     public:
//         void data(void){
//             cout<<"enter id "<<endl;
//             cin>>id;
//             num++;                                                                              
//             st_num++;                                                                           //independent of class and object ,
//         }
//         void display(void){
//             cout<<"id "<<id<<"      num without static "<<num<<endl;                            //this value is different for every other object like n1,n2,n3
//             cout<<"static num is "<<st_num<<endl;                                               //there is only single copy of the data member which is shared between all the objects of the class
//         }

//         //static function
//         static void dis_static(void){                                                           //static function is used to print only static value
//             // cout<<num;                                                                          //give error as num is not static
//             cout<<"value in static function "<<st_num<<endl;
//         }
// };

// // st+num is the static data member of class number
// int number :: st_num;                                                                           //default value is 0;

// int main(){
//     number n1,n2,n3;
//     n1.data();
//     n1.display();
//     number::dis_static();                                                                         //static function only use class name

//     n2.data();
//     n2.display();
//     number::dis_static();

//     n3.data();
//     n3.display();
//     number::dis_static();


//     return 0;
// }



//array of object

// #include<iostream>
// using namespace std;

// class number{
//     private:
//         int num;
//         static int n;
//     public:
//         void getnum(void){
//             n++;
//             cout<<"enter your "<<n<<" number "<<endl;
//             cin>>num;
//         }
//         void display(void);
// };

// void number :: display(void){
//     cout<<"your number is "<<num<<endl;
// }

// int number :: n;

// int main(){
//     number n[5];
//     for(int i=0;i<5;i++){
//         n[i].getnum();
//         n[i].display();
//     }

//     return 0;
// }



//passing object as function arguments

// #include<iostream>
// using namespace std;

// class number{
//     private:
//         int a;
//         int b;
//     public:
//         void enter_num(int a1,int b1);
//         void sum_num(number x,number y);
//         void display(void);
// };

// void number :: enter_num(int a1,int b1){
//     a=a1;
//     b=b1;
// }

// void number :: sum_num(number x,number y){
//     a=x.a+y.a;
//     b=x.b+y.b;
// }

// void number :: display(void){
//     cout<<"sum of a is "<<a<<" b is "<<b<<endl;
// }

// int main(){
//     number n1,n2,n3;

//     n1.enter_num(1,2);
//     n1.display();

//     n2.enter_num(2,4);
//     n2.display();

//     n3.sum_num(n1,n2);
//     n3.display();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class number{
//     private:
//         int a;
//         int b;
//         static int n;
//     public:
//         void enter_num(void);
//         void sum_num(number x,number y);
//         void display(void);
// };

// int number :: n;

// void number :: enter_num(void){
//     n++;
//     cout<<"enter "<<n<<", a and b"<<endl;
//     cin>>a>>b;
// }

// void number :: sum_num(number x,number y){
//     a=x.a+y.a;
//     b=x.b+y.b;
// }

// void number :: display(void){
//     cout<<"a is "<<a<<", b is "<<b<<endl;
// }

// int main(){
//     number n1,n2,n3;

//     n1.enter_num();
//     n2.enter_num();
//     n3.sum_num(n1,n2);

//     n1.display();
//     n2.display();
//     n3.display();

//     return 0;
// }



//friend functions

// #include <iostream>
// using namespace std;
// class number{
//     private:
//         int a,b;
//     public:  
//         void num(int x,int y){
//             a=x;
//             b=y;
//         }
//         void display(void){
//             cout<<"a is "<<a<<" b is "<<b<<endl;
//         }
//         friend number sum_num(number a,number b);
// };
// number sum_num(number a,number b){
//         number c;
//         c.num((a.a+b.a),(b.b+a.b));
//         return c;
//         }
// int main(){
//     number n1,n2,sum;
//     n1.num(2,4);
//     n1.display();

//     n2.num(5,6);
//     n2.display();

//     sum=sum_num(n1,n2);
//     sum.display();
//     return 0;
// }

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class.  n1.sum_num == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/



//friend class

// #include<iostream>
// using namespace std;
// class number;                                                                   //first declare that number class exist
// class calculator{
//     public:
//         int sum(int x,int y){
//             return x+y;
//         }
//         int sumreal(number,number);
//         int sumimg(number,number);
// };
// class number{
//     private:
//         int a,b;
//     public:
//         void enter(int x,int y){
//             a=x;
//             b=y;
//         }
//         void display(void){
//             cout<<"a is "<<a<<" b is "<<b<<endl;
//         }
//         // //declare individual function as a friend
//         // friend int calculator :: sumreal(number x,number y);
//         // friend int calculator :: sumimg(number x,number y);

//         // //declaring entire class as a friend
//         friend class calculator;
// };
// int calculator :: sumreal(number x,number y){
//             return (x.a+y.a);
//         }
// int calculator :: sumimg(number x,number y){
//             return (x.b+y.b);
// }
// int main(){
//     number n1,n2;
//     n1.enter(1,3);
//     n1.display();

//     n2.enter(2,4);
//     n2.display();

//     calculator sum;
//     int s=sum.sum(3,6);
//     cout<<"sum is "<<s<<endl;
//     int realsum=sum.sumreal(n1,n2);
//     int imgsum=sum.sumimg(n1,n2);
//     cout<<"sum of real is "<<realsum<<" and img is "<<imgsum<<endl;
//     return 0;
// }



//swap number uding friend function

// #include <iostream>
// using namespace std;

// class y;
// class x{
//     int a;
//     friend int sum(x ,y); 
//     friend void rev(x &,y &);
//     public:
//         void enter(int n){
//             a=n;
//         }
//         void display(void){
//             cout<<a<<endl;
//         }
// };

// class y{
//     int b;
//     friend int sum(x ,y); 
//     friend void rev(x &,y &);
//     public:
//         void enter(int n){
//             b=n;
//         }
//         void display(void){
//             cout<<b<<endl;
//         }
// };

// int sum(x x1,y y1){
//     return (x1.a+y1.b);
// }

// void rev(x &x1,y &y1){                                                  //swap using reference
//     int temp;
//     temp=x1.a;
//     x1.a=y1.b;
//     y1.b=temp;
// }

// int main(){
//     x n1;
//     y n2;

//     n1.enter(3);
//     n2.enter(4);

//     n1.display();
//     n2.display();

//     int sum1=sum(n1,n2);
//     cout<<"sum is "<<sum1<<endl;;

//     rev(n1,n2);
//     cout<<"after reverse"<<endl;
//     // cout<<"after reverse a "<<n1.a<<"b "<<n2.b<<endl;                                   //give error because we are trying to access private variables
//     n1.display();
//     n2.display();

//     return 0;
// }

//costructor                                                                                    //Constructors are used to initialize the objects of its class
/*  
A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types

*/



//default constructor

// #include <iostream>
// using namespace std;

// class number{
//     int a,b;
//     public:
//         number(void){                                                                        //default constructor don't take any parameter
//             cout<<"starting"<<endl;
//             a=0,b=0;                                                                          //otherwise it will print garbage value
//         }

//         void display(void){
//             cout<<"a is "<<a<<" b is "<<b<<endl;
//         }
// };


// int main(){
//     number n;
//     n.display();
//     return 0;
// }



//paremeterized constructor

// #include <iostream>
// #include <cmath>
// using namespace std;

// class number{
//     public:
//     int x,y;
//         number(int a,int b);                                                                         //parameterized constructor declaration which take 2 parameter

//         void display(void){
//             cout<<"a is "<<x<<" b is "<<y<<endl;
//         }

//         friend float display(number,number);
// };

// number :: number(int a,int b){
//     x=a;
//     y=b;
// }

// float distance(number x1,number y1){
//     return (sqrt(pow((y1.y-x1.y),2)+pow((y1.x-x1.x),2)));
// }

// int main(){
    
//     //we simply pass value by using 2 methods 
//     //implicit call
//     number n1(2,3);                                                                                    
//     n1.display();

//     //explicit call
//     number n2=number(4,5);
//     n2.display();

//     cout<<"display between two points is "<<distance(n1,n2)<<endl;
//     return 0;
// }



//constructor overloading                                                                              //constructors will run according to the arguments 

// #include<iostream>
// using namespace std;
// class num{
//     int a,b;
//     public:
//         num(void){
//             a=0,b=0;
//         }
//         num(int x){
//             a=x,b=0;
//         }
//         num(int x,int y){
//             a=x,b=y;
//         }
//         void display(void){
//             cout<<"a is "<<a<<" b is "<<b<<endl;
//         }

// };
// int main(){
//     num n1;                                                     //construction will select according to passed arguments
//     n1.display();

//     num n2(1);
//     n2.display();

//     num n3(2,2);
//     n3.display();
//     return 0;
// }



//constructor with default arguments

// #include <iostream>
// using namespace std;
// class num{
//     int a,b,c;
//     public:
//         num(int x,int y,int z=5){
//             a=x,b=y,c=z;
//         };
//         void display(void);
// };
// void num :: display(void){
//     cout<<"a, b, c are "<<a<<", "<<b<<", "<<c<<endl;
// }
// int main(){
//     // num n(1,2);                                                      //it will print 1,2,5 because z=5 default argument
//       num n(1,2,3);                                                       //it will print 1,2,3 even if z have any argument
//     n.display();

//     return 0;
// }



//Dynamic Initialization of Objects Using Constructors 

// #include<iostream>
// using namespace std;

// class BankDeposit{
//     int principle,time;
//     float rate,value;

//     public:
//         BankDeposit(){}                                                                                                                 //this default constructor help us to create object seperately like     BankDeposit b1,b2,b3;       not like     BankDeposit b1=BankDeposit(p,R,t);       everytime
//                                                                                                                                         //                                                                    b1=BankDeposit(p,R,t);                    BankDeposit b2=BankDeposit(p,R,t);
//         BankDeposit(int p, int r, int t);
//         BankDeposit(int p, float r, int t);
//         void display(void){
//             cout<<"principle before "<<principle<<" after "<<time<<" year value is "<<value<<endl;
//         }
// };
// BankDeposit :: BankDeposit(int p, int r, int t){
//     principle=p;
//     rate=float(r)/100;                                                                                                                  //for int r convert to float r
//     time=t;
//     value=principle;
//     for(int i=0;i<time;i++){
//         value=value*(1+rate);
//     }
// }
// BankDeposit :: BankDeposit(int p, float r, int t){
//     principle=p;
//     rate=r;
//     time=t;
//     value=principle;
//     for(int i=0;i<time;i++){
//         value=value*(1+rate);
//     }

// }

// int main(){
//     BankDeposit b1,b2,b3;
//     int p,r,t;
//     float R;
//     cout<<"Enter principle, rate(decimal) and time"<<endl;
//     cin>>p>>R>>t;
//     b1=BankDeposit(p,R,t);
//     b1.display();

//     cout<<"Enter principle, rate(integer) and time"<<endl;
//     cin>>p>>r>>t;
//     b2=BankDeposit(p,r,t);
//     b2.display();


//     return 0;
// }



//copy constructor                                                                                                                  //creates a copy of another object

// #include<iostream>
// using namespace std;
// class number{
//     int a;
//     public:
//         number(){
//             a=0;
//         }
//         number(int x){
//             a=x;
//         }

//                                                                             // When no copy constructor is found, compiler supplies its own copy constructor
//         number(number &obj){
//             cout<<"copy constructor is called"<<endl;
//             a=obj.a;
//         }
        
//         void display(void){
//             cout<<a<<endl;
//         }
// };
// int main(){
//     number n1,n2,n3,z2;
//     n1=number(3);
//     n1.display();
//     n2.display();
//     n3.display();

//     number z1(n1);                                                          //Copy constructor invoked
//     z1.display();

//     z2=n1;                                                                  //Copy constructor is not called. z2 will also refere n1 value but not invoked copy constructor
//     z2.display();

//     number z3=n1;                                                           //Copy constructor invoked
//     z3.display();

//     return 0;
// }



//destructor                                                                                                //called when the object is destroyed       use ~ with constructor

// #include<iostream>
// using namespace std;
// int n=0;
// class num{
//     public:
//         num(){
//             n++;
//             cout<<"constructor is formed for "<<n<<endl;
//         }
//         ~num(){                                                                                           //destructor
//             cout<<"destructor is formed for "<<n<<endl;
//             n--;
//         }
// };
// int main(){
//     cout<<"main start"<<endl;
//     num n1;
//     {

//         cout<<"block start"<<endl;
//         cout<<"create 2 object"<<endl;
//         num n2,n3;
//         cout<<"block end"<<endl;

//     }
//     cout<<"main end"<<endl;    

//     return 0;
// }