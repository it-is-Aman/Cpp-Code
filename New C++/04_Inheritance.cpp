//Inheritance

/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}                                                                  
{
    class members/methods/etc...
}
*/

/* note
Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
*/

// #include <iostream>
// using namespace std;

// class member {
//     public:
//         int num;
//         int sal;
//         member(){};
//         member(int n){
//             num=n;
//             sal = 99;
//         }
// };

// class place : public member {
//     public:
//         int val;
//         place(){};
//         place(int n){
//             num=n;
//             val=5;
//         }
//         void display(void){
//             cout<<"num is "<<num<<endl;
//             cout<<"value is "<<val<<endl;
//         }
    
// };

// int main(){
//     class member n1(1),n2(2);
//     cout<<n1.num<<endl;                                             //different ways to print values
//     cout<<n1.sal<<endl;
//     cout<<n2.num<<endl;
//     cout<<n2.sal<<endl;
//     class place n3(3),n4(4);
//     n3.display();
//     cout<<n3.num<<endl;
//     cout<<n3.val<<endl;

//     return 0;
// }



//Single Inheritence

// #include <iostream>
// using namespace std;
// class base{
//     private:
//         int num1;
//     public:
//         int num2;
//         void setnum();
//         int get1(void){                                                       //we can't get num1 because it is in private so use function
//             return num1;
//             };
// };
// void base :: setnum(void){
//     num1 =20;
//     num2 =30;
// }

// class derived : private base{
//     private:
//         int num3;
//     public:
//         void solve(void){
//             setnum();                                                          //because visibility mode is private and we can't access setnum() in intmain() directly, but we can use it in function
//             num3=num2 + get1();                                                //get1() because num1 is in private and private can't be inherited but num2 is in public, even num2 become private in vidibility mode private but after setnum() we access num2 
//         }
//         void display(void);
// };
// void derived :: display(void){
//     cout<<"num 1 is "<<get1()<<endl;
//     cout<<"num 2 is "<<num2<<endl;
//     cout<<"num 3 is "<<num3<<endl;
// }
        

// int main(){
//     derived d1;                                                                //we can also access num and functions of base class because it will present in derived class
//     // d1.setnum();                                                                //error because setnum() is private according to visibility mode
//     d1.solve();
//     d1.display();
//     return 0;
// }



// protected modifier

/*
                              Public Derivation      	Private Derivation    	Protected Derivation
Private members           	    Not Inherited              	Not Inherited           Not Inherited              
Protected members           	Protected                   Private                 Protected                    
Public members           	    Public	                    Private                 Protected     
*/

// #include <iostream>
// using namespace std;
// class base{
//     protected:
//         int a=2;
//     private:
//         int b=8;
// };

// class derived: private base{
//     public:
//         void display(void){
//             cout<<"a is "<<a;
//             // cout<<"b is "<<b;                                                                                             //give error because int b is private in base and private can not be inherited
//         }
// };

// int main(){
//     derived d;
//     // cout<<d.a;                                                                                                            //show error because a is protected in both base as well derived
//     d.display();                                                                                                             //will not show error because we use protected 'a' in public display() function and simply use that function
//     return 0;
// }



//Multilevel Inheritance
// #include <iostream>
// using namespace std;

// class roll{
//     protected :
//         int roll_number;
//     public:
//         void set_number(int num){
//             roll_number=num;
//         }
//         void get_number(void){
//             cout<<"roll number is "<<roll_number<<endl;
//         }
        
// };

//                         // void roll :: set_number(int num){
//                         //      roll_number=num;
//                         // }
//                         // void roll :: get_number(void){
//                         //      cout<<"roll number is "<<roll_number<<endl;
//                         // }

// class subject : public roll{
//     protected:
//         int maths;
//         int physics;
//     public:
//         void set_marks(int m,int p){
//             maths=m;
//             physics=p;        
//         }
//         void get_marks(void){
//             cout<<"maths and physics marks are "<<maths<<" "<<physics<<endl;

//         }
// };

//                         // void subject :: set_marks(int m,int p){
//                         //             maths=m;
//                         //             physics=p;        
//                         // }
//                         // void subject :: get_marks(void){
//                         //     cout<<"maths and physics marks are "<<maths<<" "<<physics<<endl;
//                         // }

// class marks: public subject{
//     protected:
//         int percentage;
//     public:
//         void result(void)
//         {
//         get_number();                                                                                                                   //for print all roll number,marks and percentage in one function result()
//         get_marks();
//         cout<<"your percentage is "<<(maths+physics)/2<<"%"<<endl;
//         };
// };

// int main(){
//     marks m;
//     //if visibility mode is protected then we can not use this ------  because every public and protected will become protected which can not be accessed in int main()
//     //                                                              |     but we can access all that if we use public visibility mode because then public will remain public

//     m.set_number(7);                                                                                                                                       
//     m.set_marks(80,90);
//     m.result();

//     // cout<<m.maths<<endl;                                                                                                                 //error because maths is in protected

//     return 0;
// }



//same as previous but keep in mind some points

// #include <iostream>
// using namespace std;

// class roll{
//     protected :
//         int roll_number;
//     public:
//         void set_number(int num){
//             roll_number=num;
//         }
//         void get_number(void){
//             cout<<"roll number is "<<roll_number<<endl;
//         }
        
// };

// class subject : private roll{
//     protected:
//         int maths;
//         int physics;
//     public:
//         void set_marks(int m,int p){
//             maths=m;
//             physics=p;        
//         }
//         void get_marks(void){
//             cout<<"maths and physics marks are "<<maths<<" "<<physics<<endl;

//         }
// };

// class marks: public subject{
//     protected:
//         int percentage;
//     public:
//         void result(void)
//         {

//         // get_number();               //give error because after visibility mode private in class subject{}, get_number() will become private, after that we can't inherite private to public in class marks{}                                                                                                          

//         get_marks();
//         cout<<"your percentage is "<<(maths+physics)/2<<"%"<<endl;
//         };
// };

// int main(){
//     roll r;
//     marks m;

//     // m.set_number(7);               //give error because we want to acces set_number() from class marks{} , in class marks{} set_number() in is private, after inheritance set_number() public to private from class roll{} to class subject{}                                                                                                                  

//     r.set_number(7);                  //instead of m.set_number()  use  r.set_number()  because  set_number is in private in class marks{}, but public in class roll{}                                                                                                                 
//     m.set_marks(80,90);

//     r.get_number();                   //use r.get_number instead of m.get_umber() because get_number is public in class roll{} and get_number will become private in class subject{} which can't be inherited to class marks{}
//     m.result();
//     return 0;
// }



//Multiple Inheritance
/*
class {{derived-class-name}} : {{visibility-mode 1}} {{base-class 1-name}} , {{visibility-mode 2}} {{base-class 2-name}}                                                             
{
    class members/methods/etc...
}
*/
// #include <iostream>
// using namespace std;
// class base1{
//     protected:
//         int num1;
//     public:
//         void setnum1(int a){
//             num1=a;
//         }
// };

// class base2{
//     protected:
//         int num2;
//     public:
//         void setnum2(int a){
//             num2=a;
//         }
// };

// class derived : public base1,public base2{
//     private:    
//         int sum;
//     public:
//         void display(void){
//             cout<<"sum is "<<num1+num2<<endl;
//         }
// };
// int main(){
//     derived d;
//     d.setnum1(2);
//     d.setnum2(4);
//     d.display();
//     return 0;
// }



// //create calculator programm
// #include <iostream>
// #include <math.h>
// using namespace std;
// class Simple_Calculator{
//     protected:
//         int num1,num2;
//     public:
//         Simple_Calculator(int a,int b){
//             num1=a;
//             num2=b;
//         }
//         int s_sum(int num1,int num2){
//             return num1+num2;
//         }
//         int s_sub(int num1,int num2){
//             return num1-num2;
//         }
//         int s_mul(int num1,int num2){
//             return num1*num2;
//         }
//         int s_div(int num1,int num2){
//             return num1/num2;
//         }
// };

// class Scientific_Calculator{
//     protected:
//         int num1,num2;
//     public:
//         int sf_sum_sin(int num1,int num2){
//             return sin(num1+num2);
//         }
//         int sf_sum_sqrt(int num1,int num2){
//             return sqrt(num1+num2);
//         }
//         int sf_power(int num1,int num2){
//             return pow(num1,num2);
//         }
//         int sf_sum_tan(int num1,int num2){
//             return tan(num1+num2);
//         }
// };

// class Hybrid_Calculator : public Simple_Calculator , public Scientific_Calculator{
//         // void sum(void){
//         //     cout<<"sum is "<<s_sum<<endl;
//         // }
// };
// int main(){
//     Hybrid_Calculator num;
//     num.s_sum(1,2);
//     cout<<"sum is "<<num.s_sum<<endl;
//     return 0;
// }



// #include <iostream>
// #include <cmath>

// using namespace std;

// class Simple_Calculator{
//     private:
//         int num1,num2;
//     public:
//     void get_simple(void){
//         cout<<"For simple calculator"<<endl;
//         cout<<"enter num1 and num2"<<endl;
//         cin>>num1>>num2;
//     }
//     void display_simple(void){
//         cout<<"num1+num2 is "<<num1+num2<<endl;
//         cout<<"num1-num2 is "<<num1-num2<<endl;
//         cout<<"num1*num2 is "<<num1*num2<<endl;
//         cout<<"num1/num2 is "<<num1/num2<<endl;
//     }
// };

// class Scientific_Calculator{
//     private:
//         int num1,num2;
//     public:
//     void get_scientific(void){
//         cout<<"For scientific calculator"<<endl;
//         cout<<"enter num1 and num2"<<endl;
//         cin>>num1>>num2;
//     }
//     void display_scientific(void){
//         cout<<"sin(num1) is "<<sin(num1)<<endl;
//         cout<<"cos(num1) is "<<cos(num1)<<endl;
//         cout<<"tan(num1) is "<<tan(num1)<<endl;
//         cout<<"sqrt(num1)is "<<sqrt(num1)<endl;
//     }
// };

// class Hybrid_Calculator : public Simple_Calculator , public Scientific_Calculator{

// };
// int main(){
//     Hybrid_Calculator cal;
//     cal.get_simple();
//     cal.display_simple();
//     cal.get_scientific();
//     cal.display_scientific();    
//     return 0;
// }



//Ambiguity Resolution
/*  Ambiguity in inheritance can be defined as when one class is derived for two or more
    base classes then there are chances that the base classes have functions with the same name.
    So it will confuse derived class to choose from similar name functions.
*/

// #include <iostream>
// using namespace std;
// class base1{
//     public:
//         void show(void){
//             cout<<"base 1 AWESOME"<<endl;
//         }
// };

// class base2{
//     public:
//         void show(void){
//             cout<<"base 2 WOW"<<endl;
//         }
// };

// class derived : public base1 , public base2{
//     public:
//         void show(void){                                                        //we want to show only class base2 function show() that's why we use 'base2 :: show()' in show() funcion of class derived
//         base2::show();                                                           
//         }
//         // void show(void){                                                     //if we use this show() function in derived class, then compiler print this show() rather then class base1 or base2 show()
//         //     cout<<"derived AWESOME"<<endl;                                      
//         // }
// };
// int main(){
//     derived name1;
//     name1.show();                                                         

//     return 0;
// }



// #include <iostream>
// using namespace std;
// class base{
//     public:
//         void show(void){
//             cout<<"base AWESOME"<<endl;
//         }
// };

// class deass object, if show() not present in derived class then default show() of base class will passrived : public base{
//     public:
//         void show(void){                                                            
//             cout<<"derived AWESOME"<<endl;                                      //if show() present in derived class ,show() overwrite when call by derived cl
//         }
// };

// int main(){
//     base num1;
//     derived num2;
//     num1.show();                                                         
//     num2.show();                                                                                    
//                                                                                 //both classes have the same function show(), if the class “Derived” will call the function “show()” it will override the base class “show()”,
//                                                                                 //method because compiler by default run the method which is already written in its own body. But if the function “show()” was not present in the class “Derived”,
//                                                                                 // then the compiler will run the method of the class “Base”.
//     return 0;
// }



//virtual class
/* The virtual base class is a concept used in multiple inheritances to prevent ambiguity between multiple instances.
*/

// #include <iostream>
// using namespace std;

// class student{
//     protected:
//         int roll_number;
//     public:
//         void set_roll(int a){
//             roll_number=a;
//         }
//         void display_roll(void){
//             cout<<"roll no. is "<<roll_number<<endl;
//         }
// };

// class marks : virtual public student{
//     protected:
//         int maths,physics;
//     public:
//         void set_marks(int a,int b){
//             maths=a;
//             physics=b;

//         }
//         void display_marks(void){
//             cout<<"maths and physics marks are "<<maths<<", "<<physics<<endl;
//         }
// };

// class test : virtual public student{
//     protected:
//         int score;
//     public:
//         void set_score(int a){
//             score=a;

//         }
//         void display_score(void){
//             cout<<"score is "<<score<<endl;
//         }
// };

// class result : public marks , public test{
//     protected:
//         int total;
//     public:
//         void display_result(void){
//             display_roll();
//             display_marks();
//             display_score();
//             total=maths+physics+score;
//             cout<<"total is "<<total<<endl;
//         }
// };

// int main(){
//     result name1;
//     name1.set_roll(2);
//     name1.set_marks(98,99);
//     name1.set_score(9);
//     name1.display_result();
//     return 0;
// }



//constructors in derived class
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

// #include <iostream>
// using namespace std;
// class base1{
//     private:
//         int num1;
//     public:
//         base1(int a){
//             num1=a;
//             cout<<"base1 constructor executed"<<endl;
//         }
//         void display_base1(void){
//             cout<<"base1 is "<<num1<<endl;
//         }
// };

// class base2{
//     private:
//         int num2;
//     public:
//         base2(int a){
//             num2=a;
//             cout<<"base2 constructor executed"<<endl;
//         }
//         void display_base2(void){
//             cout<<"base2 is "<<num2<<endl;
//         }
// };

// class derived : public base1 , public base2{                                                                        //base1 inherited first so, base1 constructor executed first and then base2
//     private:
//         int num3;
//     public:
//         derived(int a,int b,int c) : base1(a),base2(b){                                                             //keep this in mind
//             num3=c;
//         }
//         void display_derived(void){
//             cout<<"derived is "<<num3<<endl;
//         }
// };

// int main(){
//     derived d1(2,3,4);
//     d1.display_base1();
//     d1.display_base2();
//     d1.display_derived();

//     return 0;
// }



//Initialization list in Constructors
/*
Syntax for initialization list in constructor:
    constructor (argument-list) : initilization-section
    {
        assignment + other code;
    }
*/

// #include <iostream>
// using namespace std;

// class marks{
//     private:
//         int num1;
//         int num2;
//     public:

//     marks(int a,int b) : num1(a),num2(b){                                                        //keep this in mind
//         cout<<"constructor executed"<<endl;
//     }
//                                                                                                    //OR
//     // marks(int a,int b){
//     //     num1=a;
//     //     num2=b;
//     //     cout<<"constructor executed"<<endl;
//     // } 
                                                                                                
                                                                                                
//     // marks(int a,int b) : num1(a),num2(b+num1){                                                  //works because num1 already initilized with value
//     //     cout<<"constructor executed"<<endl;
//     // }

//     // marks(int a,int b) : num2(b),num1(a+num2){                                                     //give garbage value in 'num1', because 'num1' will be initialized first , because as we have already created 'num1' first in  'int num1,int num2' in private
//     //     cout<<"constructor executed"<<endl;
//     // }

//     void display(void){
//         cout<<"num1 is "<<num1<<endl;
//         cout<<"num2 is "<<num2<<endl;
//     }

// };
// int main(){
//     marks m(2,3);
//     m.display();
//     return 0;
// }