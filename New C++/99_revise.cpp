// 00

// //operator,Reference variables,Typecasting,constants,manipulator
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int num=5;

// int main(){

//     int num=1;
//     cout<<"local num is "<<num<<endl;
//     cout<<"global num is "<<::num<<endl;

//     int a=3;
//     int &b=a;
//     cout<<"b refers a so "<<b<<endl;

//     const int c=5;
//     cout<<"c was"<<c<<endl;
//     // c=8;
//     cout<<"c is"<<c<<endl;

//     int a1=3,a2=22,a3=4566;
//     cout<<a1<<endl;
//     cout<<a2<<endl;
//     cout<<a3<<endl;
//     cout<<endl;
//     cout<<setw(5)<<a1<<endl;
//     cout<<setw(5)<<a2<<endl;
//     cout<<setw(5)<<a3<<endl;

//     return 0;
// }



// 01

// //loops, structure, pointer , enum
// #include <iostream>
// using namespace std;
// typedef struct num{
//         int a;
//         char b;
//     }n;

// int main(){
    
//     // int i=1;
//     // while(i<=5){
//     //     cout<<i<<endl;
//     //     i++;
//     // }

//     // int i=1;
//     // do{
//     //     cout<<i<<endl;
//     //     i++;
//     // }while(i<=5);

//     // for(int i=1;i<=5;i++){
//     //     cout<<i<<endl;
//     // }

//     // int mat[3]={1,2,3};
//     // int *ptr=mat;
//     // for(int i=0;i<=2;i++){
//     //     // cout<<mat[i]<<endl;
//     //     cout<<*(ptr+i)<<endl;
//     // }

//     // n n1;
//     // n1.a=2;
//     // n1.b='a';
//     // cout<<n1.a<<n1.b<<endl;

//     // enum num{qwe,asd,zxc};
//     // cout<<qwe<<endl;

//     return 0;
// }



// 02

// //call by pointer, call by reference, recursion
// #include <iostream>
// using namespace std;

// // void swap(int *x,int *y){
// //     int temp;
// //     temp=*y;
// //     *y=*x;
// //     *x=temp;
// // };
// // int main(){
// //     int a=3,b=7;
// //     cout<<"before "<<a<<" "<<b<<endl;
// //     swap(&a,&b);
// //     cout<<"after "<<a<<" "<<b<<endl;
// //     return 0; 
// // }

// // void swap_r(int &x,int &y){
// //     int temp;
// //     temp=y;
// //     y=x;
// //     x=temp;
// // };
// // int main(){
// //     int a=3,b=7;
// //     cout<<"before "<<a<<" "<<b<<endl;
// //     swap_r(a,b);
// //     cout<<"after "<<a<<" "<<b<<endl;

// //     return 0; 
// // }

// // int fac(int n){
// //     if(n==0||n==1){
// //         return 1;
// //     }
// //     return n*fac(n-1);
// // }
// // int main(){
// //     int num;
// //     cout<<"enter num"<<endl;
// //     cin>>num;
// //     cout<<"fibonacci is "<<fac(num)<<endl;;

// // return 0;
// // }

// // int fac(int n){
// //     if(n==0){
// //         return 0;
// //     }
// //     else if(n==1){
// //         return 1;
// //     }
// //     return fac(n-2)+fac(n-1);
// // }
// // int main(){
// //     int num;
// //     cout<<"enter num"<<endl;
// //     cin>>num;
// //     cout<<"fibonacci is "<<fac(num)<<endl;;

// // return 0;
// // }



// 03

// //OOPs , array in class,array of object static variable and funtion
// #include <iostream>
// using namespace std;

// class books{
//         static int n;
//     private:
//         int price[5];
//         int rate[5];
//         int num[5];
//     public:
//         void data(){
//             for(int i=0;i<5;i++){
//                 num[i]=i+1;
//                 rate[i]=(i+1)*10;
//                 price[i]=(i*9)+100;
//                 n++;
//             }
//         };
//         void display();
//         void change(int,int,int);
//         static void dis_str(void){
//             cout<<"struct num is "<<n<<endl;
//         }

// };
// void books :: display(){
//     for(int i=0;i<5;i++){
//     cout<<num[i]<<" "<<rate[i]<<" "<<price[i]<<endl;
//     }
// }

// void books :: change (int x,int y, int z){
//     int i=0;
//     while(i<5){
//     if(num[i]==x){
//         rate[i]=y;
//         price[i]=z;
//         break;
//     }
//     i++;
//     }
//         }


// int books :: n;

// int main(){
//     books b[2];
//     // int a,b,c;
//     b[1].data();
//     b[1].display();
//     // cout<<"enter num, rate, price"<<endl;
//     // cin>>a>>b>>c;
//     b[1].change(3,88,999);
//     cout<<"after change"<<endl;
//     b[1].display();
//     books::dis_str();

//     b[2].data();
//     b[2].display();
//     // cout<<"enter num, rate, price"<<endl;
//     // cin>>a>>b>>c;
//     b[2].change(5,448,111);
//     cout<<"after change"<<endl;
//     b[2].display();
//     books::dis_str();

//     return 0;
// }


// //friend function, friend class
// #include <iostream>
// using namespace std;

// // class calculator;
// class num{
//     private:
//         int a,b;
//     public:
//         void data(int x,int y){
//             a=x,b=y;
//         }      
//         void display(){
//             cout<<a<<" "<<b<<endl;
//         }
//         friend class calculator;                                                                            //if not take calculator as a friend class, then it show error because 'class calculator' wants to access the private members of 'class num'


// };
// class calculator{
    
//     public:
//         int sum(int x,int y){
//             return x+y;
//         }
//         int sum_real(num x1,num y1){                                                                        //this function wants to access private members of 'class num' that's why write friend class calculator in 'class num'
//             return x1.a+y1.a;
//         }
//         int sum_ima(num x1,num y1){
//             return x1.b+y1.b;
//         }
//         void rev(num & x2){
//                 int temp=x2.b;
//                 x2.b=x2.a;
//                 x2.a=temp;
//         }


// };

// int main(){
//     num n1,n2;
//         n1.data(1,2);
//         n1.display();
//         n2.data(4,5);
//         n2.display();       

//     calculator c1,c2;
//         int s=c1.sum(9,8); 
//         cout<<"sum is "<<s<<endl;

//         int sr=c1.sum_real(n1,n2);
//         int si=c1.sum_ima(n1,n2);
//         cout<<sr<<endl<<si<<endl;
//         n1.display();
//         c1.rev(n1);
//         n1.display();
//         n2.display();       
//         c1.rev(n2);
//         n2.display();       

//     return 0;
// }


// //constructor, constructor with default arguments, paremeterized constructor
// #include <iostream>
// using namespace std;

// class num{
//     private:
//         int a,b,c;
//     public:
//         num(void){
//             a=0,b=0;
//         }
//         num(int x,int y=99){
//             a=x,b=y;
//         }
//         void display(void);
// };
//         void num :: display(void){
//             cout<<a<<" "<<b<<endl;
//         }

// int main(){
//     num n1;                                                         //constructor automatically invoked
//     n1.display();

//     num n2(2);
//     n2.display();

//     num n3(2,8);
//     n3.display();

//     return 0;
// }


// // copy constructor , destructor
// #include <iostream>
// using namespace std;

// class num{
//     private:
//         int a,b;
//     public:
//         num(int x,int y){                                                       //constructor
//             cout<<"start"<<endl;
//             a=x,b=y;
//         }
//         ~num(){                                                                 //destructor
//             cout<<"end"<<endl;
//             a=99,b=99;
//         }

//         num(num & val){                                                         //copy constructor
//             a=val.a;
//             b=val.b;
//         }

//         void display(){
//             cout<<a<<" "<<b<<endl;
//         }
// };

// int main(){
//     num n1(2,6);

//     n1.display();
//     {
//         cout<<"inside the box"<<endl;
//         num n2=n1;
//         n2.display();
//     }
//     cout<<"exit"<<endl;

//     return 0;
//     }


// 04

// //Inheritance
// #include <iostream>
// using namespace std;

// class base{
//     private:
//         int num1;
//     protected:
//         int num2=2;
//     public:
//         int num3=3;


//         // base (){                                                                             //use this for avoid garbage values
//         //     num1=0;
//         //     num2=0;
//         //     num3=0;
//         // }

//         // void set1(void){
//         //     num2=2;
//         //     num3=3;
//         // }



//         int set_num1(void){                                                                     //num1 is in private so set value using function
//             num1=7;
//             return num1;
//         }
        
// };

// class derived : protected base{
//     private:
//         int num4=4;
//     public:
//         int num5=5;


//         // derived (){                                                                                 //use this for avoid garbage values
//         //     num4=0;
//         //     num5=0;
//         // }
        
//         // void set2(void){                                                                         
//         //     set1();
//         //     num4=4;
//         // }



//         void display(){
//             cout<<"num 1 is "<<set_num1()<<endl;                                                    //num1 is in private of 'base class' which can't be inherited so we have to access num1 through function 
//             cout<<"num 2 is "<<num2<<endl;                                                          //whereas protected can be inherited to protected so, num2 can be accessed through function but not directly in main() function
//             cout<<"num 3 is "<<num3<<endl;
//             cout<<"num 4 is "<<num4<<endl;                                                          //this private num4 can be accesed through function easily because it is in same class
//             cout<<"num 5 is "<<num5<<endl;
//         }
// };

// int main(){
//     derived d1;
    
//     // d1.num3=3;                                                                                  //give error because after inheritance num3 become protected so can't access directly
//     d1.num5=5;

//     // d1.set2();                                                                                  //different method for assigning values if want to use then un-comment above 2 code in base and derived class
//     d1.display();

//     return 0;
// }

// //multi level inheritance
// #include <iostream>
// using namespace std;

// class a{
//     private:
//         int a;
//     public:
//         void set_a(int x){
//             a=x;
//         }
//         int  get_a(){                                                                                    //here we use return because after inheritance private don't inherited. so, we have to use function that return value in order to access that value in other class 
//             return a;                                                                                    
//         }

// };
// class b : protected a{
//     protected:                                                                                           //whereas in protected after inheritance it will stay protected so we directly access value but only in public function (just like simple OOPs programm where we access private parameter in public)
//         int b;
//     public:
//         void set_b(int y){
//             b=y;
//         }
    
// };
// class c : public b{
//     private:
//         int c;
//     public:
//         void set_c(int z){
//             c=z;
//         }
//         int sum(){
//             return b+c;
//         }
// };


// int main(){
//     a a1;
//         a1.set_a(2);

//     c c1;
//         c1.set_b(3);
//         c1.set_c(5);
//         cout<<"sum is "<<a1.get_a()+c1.sum();
//     return 0;
// }

// //multiple inheritance, Ambiguity Resolution
// #include <iostream>
// #include <math.h>
// using namespace std;

// class base1{
//     public:
//         int sum(int a,int b){
//             return a+b;
//         }
//         int dif(int a,int b){
//             return a-b;
//         }
//         void display(){
//             cout<<"base 1"<<endl;
//         }
// };

// class base2{
//     public:
//         int sum_sqrt(int a,int b){
//             return sqrt(a+b);
//         }
//         int dif_sqrt(int a,int b){
//             return cos(a-b);
//         }
//         void display(){
//             cout<<"base 2"<<endl;
//         }
// };

// class derived : public base1, public base2{
//     public: 
//         void display(){                                                                                     
//             base1::display();                                                                                   //this will print only base 1 display()
//         }
//                 // void display(){                                                                              //this will print derived display(), not matter how many display() are in base class
//                 //     cout<<"derived "<<endl;
//                 // }
// };

// int main(){
//     derived d1;

//         cout<<"sum is "<<d1.sum(1,2)<<endl;
//         cout<<"sum of sqrt is "<<d1.sum_sqrt(9,16)<<endl;
//         d1.display();

//     return 0;
// }

// //virtual class
// #include <iostream>
// using namespace std;

// class A{
//     public :
//         void display(){
//             cout<<"AWESOME"<<endl;
//         }
// };

// class B : virtual public A{};

// class C : virtual public A{};
// class D : public B , public C{
//     public :
//         void display_derived(){
//             cout<<"AWESOME in derived"<<endl;
//         }
// };

// int main(){
//     D obj;
//         obj.display();                                                                          //give error because display() both in class B and C so we have to make this class into virtual class              
//         obj.display_derived();

//     return 0;
// }

// //constructors in derived class
// #include <iostream>
// using namespace std;

// class A{
//     protected:
//         int num1;
//     public: 
//         A (int a){                                                                                                  //method 1
//             num1=a;
//         }
// };
// class B{
//     protected:
//         int num2;
//     public:
//         B (int a) : num2(a) {}                                                                                      //method 2
// };
// class C : public A , public B{
//     protected:
//         int num3;
//     public:
//         C (int a,int b,int c) : A(a) , B(b){                                                                        //Method 1 for initialized constructor keep in mind that base class constructor need to be after : not in {  }
//             num3=c;
//         }

//         //                     C (int a,int b,int c) : A(a) , B(b) , num3(c){}                                      //Method 2 for initialized constructor

//         void display(){
//             cout<<num1<<" "<<num2<<" "<<num3<<endl; 
//         }
// };

// int main(){
//     C obj(1,2,3);
//         obj.display();

//     return 0;
// }



// 05

// //pointers, this pointer, Pointers to Objects and Arrow Operator, Array of Objects Using Pointers
// #include <iostream>
// using namespace std;

// class num{
//     private:
//         int num1,num2,num3;
//     public:
//         void val(int num1){
//             this->num1=num1;
//         }
//         void get_val(int x,int y){
//             num2=x;
//             num3=y;
//         }
//         void display(void){
//             cout<<num1<<" "<<num2<<" "<<num3<<endl;
//         }

// };

// int main(){
//     int *ptr = new int(66);
//     cout<<"value of ptr is "<<*ptr<<endl;

//     int *arr_ptr = new int[2];
//     arr_ptr[0]=1;
//     arr_ptr[1]=2;
//     cout<<*arr_ptr<<" "<<*(arr_ptr+1)<<endl;

//     num *class_ptr = new num[2];                                                                         //class_ptr pointing to the address of class object which is num[0], this array of objects using pointer help to create large class objects 
//     int a,b,c;
//     for(int i=0;i<2;i++){
//         cout<<"enter a,b and c"<<endl;
//         cin>>a>>b>>c;
//         (class_ptr+i)->val(a);
//         (class_ptr+i)->get_val(b,c);
//     }

//     for(int i=0;i<2;i++){
//         (class_ptr+i)->display();
//     }

//     return 0;
// }

// //pointers to derived class, pointers to derived class, Virtual functions
// #include <iostream>
// using namespace std;

// class base{
//     public:
//         int num1;
//         virtual void display(){
//             cout<<"base class display "<<endl;
//         }
// };

// class derived : public base{
//     public:
//         int num2;
//         void display(){
//             cout<<num1<<" "<<num2<<endl;
//             cout<<"derived class display "<<endl;
//         }
// };


// int main(){
//     base *base_ptr;
//     base base_obj;
//     derived *derived_ptr;
//     derived derived_obj;

//     base_ptr = &derived_obj;                                                                       //base pointer pointing to the derived object
//     derived_ptr = &derived_obj;

//     derived_ptr->num1=4;
//     // base_ptr->num2=4;                                                                           //error because we are trying to change the value of derived class member with base pointer

//     derived_ptr->num2=8;
//     derived_ptr->display();                                                                        //this will print class derived display()  

//     base_ptr = &derived_obj;
//     base_ptr->display();                                                                           
                                                                                                
//     return 0;
// }

// The main thing to note here is that if we don’t use the “virtual” keyword with the “display”
//  function of the base class then the “display” function of the base class will run.
 
//  But we have used the “virtual” keyword with the “display” function of the base class to make 
//  is a virtual function so when the display function is called by using the base class pointer 
//  the display function of the derived class will run because the base class pointer is pointing to the derived class object.



// //Abstract Base Class & Pure Virtual Functions
// #include <iostream>
// using namespace std;

// class A{                                                                                           //abstract class
//     public:
//         int num1;
//         A(int a): num1(a){}
//         virtual void display(void)=0;                                                              //pure virtual function
// };
// class B: public A{
//     public:
//         int num2;
//         B(int a,int b): A(a),num2(b){}
//         virtual void display(void){
//             cout<<num1<<" "<<num2<<endl;;
//         };                                                              
// };
// class C: public A{
//     public:
//         int num3;
//         C(int a,int c): A(a),num3(c){}
//         virtual void display(void){
//             cout<<num1<<" "<<num3<<endl;;
//         };                                                              
// };

// int main(){
//     B obj2(1,2);
//     C obj3(5,6);

//     A *ptr1[2];
//     ptr1[0]=&obj2;                                                                                 //pointer of base class points to derived class object
//     ptr1[1]=&obj3;

//     ptr1[0]->display();
//     ptr1[1]->display();

//     return 0;
// }

// keep in mind this virtual function type method only work in (Hierarchial Inheritance) when one class is inheritance into sub classes.



// 06

// // open file using constructor
// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main(){
//     string str1;
//     ifstream input_file("test1.txt");                                           //open and read
//     // input_file>>str1;
//     getline(input_file,str1);
//     cout<<str1;

//     ofstream output_file("test2.txt");                                          //open and write
//     output_file<<"this is writing area"<<endl;
//     return 0;
// }


// //open file using open()
// #include <iostream>
// #include <fstream>
// #include <string>

// using namespace std;

// int main(){
//     string str1;
//     ifstream input_file;
//     input_file.open("test1.txt");
//     getline(input_file,str1);
//     cout<<str1;
//     input_file.close();

//     ofstream output_file;
//     output_file.open("test2.txt");
//     output_file<<str1 + " another writing area "<<endl;
//     output_file.close();

//     return 0;
// }



// 07

// //template, Multiple Parameters, Default Parameters, Function Templates, Overloading Template Functions
// #include <iostream>
// using namespace std;

// template <class F1,class F2>
// void sum(F1 a,F2 b){
//     cout<<"sum is "<<a+b<<endl;
// }

// void give_val(int x){
//     cout<<"int "<<endl;
// }

// template <class T3>
// void give_val(T3 x){
//     cout<<"template "<<endl;
// }



// template <class T1=int,class T2=int>
// class base{
//     public:
//         T1 a;
//         T2 b;

//         base(T1 x, T2 y){
//             a=x;
//             b=y;
//         }


//         void display();


// };

// template <class T1 ,class T2>
// void base <T1,T2> :: display(){
//     cout<<a<<" "<<b<<endl;
// }

// int main(){
//     base <>b1(2,5);                                                                                //default template will select
//     base <int,char>b2(2,'F');
//     b1.display();
//     b2.display();

//     give_val(8);
//     sum(2,3);                                                                                      //in function don't need to write which template you will use
//     give_val('F');
//     return 0;
// }

// // Vector, list, map and functor in STL
// #include <iostream>
// #include <vector>
// #include <list>
// #include <map>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main(){
//     vector<int> vec;
//     vector<int> :: iterator itr1;
//     itr1=vec.begin();

//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

//     for(itr1=vec.begin();itr1!=vec.end();itr1++){
//         cout<<*itr1<<endl;
//     }

//     list<int> lst;
//     list<int> :: iterator itr2;
//     itr2=lst.begin();

//     lst.push_back(5);
//     lst.push_back(6);
//     lst.push_back(7);
//     lst.push_back(8);
//     lst.push_back(9);

//     for(itr2=lst.begin();itr2!=lst.end();itr2++){
//         cout<<*itr2<<endl;
//     }

//     map<string,int> mp;                                                                            //A map stores key value pairs key - names and value - marks
//     map<string,int> :: iterator itr3;
//     itr3=mp.begin();

//     mp["qwerty"]=12;
//     mp["asdfgh"]=66;
//     mp["zxcvbn"]=56;

//     for(itr3=mp.begin();itr3!=mp.end();itr3++){
//         cout<<"key - "<<(*itr3).first<<" and value - "<<(*itr3).second<<endl;
//     }

//     int arr[]={1,5,3,2};
//     sort(arr,arr+4);                                                                               //sort upto 4 places

//     for(int i=0;i<4;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }