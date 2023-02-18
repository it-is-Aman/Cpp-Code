//new and delete operator in pointer
//new operator -> we create int,float dynamically and assigned value to pointer

// #include <iostream>
// using namespace std;
// int main(){

//     // int num=5;
//     // int *ptr=&num;
//     // cout<<"the value of num is "<<*ptr<<endl;

//                                                                                             //new operator 
//     // int *ptr= new int(8);                                                                //for value use parenthesses()
//     // cout<<"value of num is "<<*(ptr);

//     // int *arr = new int[2];                                                                  //for array use square brackets []
//     // arr[0]=1;
//     // arr[1]=2;

//     // delete[] arr;                                                                           //delete operator -> free arr space

//     // cout<<"value of arr[0] is "<<arr[0]<<endl;
//     // cout<<"value of arr[0] is "<<arr[1]<<endl;
//     // // cout<<"value of arr[1] is "<<*arr<<endl;
//     // // cout<<"value of arr[1] is "<<*(arr+1)<<endl;

//     return 0;
// }



//Pointers to Objects and Arrow Operator

// #include <iostream>
// using namespace std;
// class shop{
//     int num,price;
//     public:
//         void get(int a,int b){
//             num=a;
//             price=b;
//         }
//         void display(void){
//             cout<<"num is "<<num<<endl;
//             cout<<"price is "<<price<<endl;
//         }
// };
// int main(){
//     // shop s;
//     // s.get(10,20);
//     // s.display();

//                                         //OR
//     // shop *ptr = new shop;                                                                            
//     // (*ptr).get(10,20);                                                                                   //pointer is pointing to the address of that object
//     // (*ptr).display();

//                                          //OR
//     // shop *ptr = new shop;
//     // ptr->get(10,20);
//     // ptr->display();    

//     return 0;
// }



//Array of Objects Using Pointers
// #include <iostream>
// using namespace std;
// class shop{
//     int num,price;
//     public:
//         void get(int a,int b){
//             num=a;
//             price=b;
//         }
//         void display(void){
//             cout<<"num is "<<num<<endl;
//             cout<<"price is "<<price<<endl;
//         }
// };
// int main(){
//     int a,b;
//     shop *ptr = new shop[3];
//     for(int i=0;i<3;i++){
//         cout<<"enter num and price for item "<<i+1<<endl;
//         cin>>a>>b;
//         // (*(ptr+i)).get(a,b);    
//         (ptr+i)->get(a,b);          //same as above
//     }
//     for(int i=0;i<3;i++){
//         // (*(ptr+i)).display();    
//         (ptr+i)->display();         //same as above
//     }
//     return 0;
// }



//this pointers
// “this” is a keyword that is an implicit pointer.
// “this” pointer points to the object which calls the member function.
// #include <iostream>
// using namespace std;
// class Base{
//     int a;
//     public:
//         void set(int a){
//             this->a=a;                                                                  //The use of “this” pointer helps to points to the object which invokes the member function.
//         }                                                                               //so we use same name parameters 'a' and use 'this' to point the object 

//         void display(void){
//             cout<<"value is "<<a<<endl;
//         }

//         // Base& set(int a){
//         //     this->a=a;
//         //     return *this;                                                                   //this return an object
//         // }

// };

// int main(){
//     Base b;
//     b.set(2);
//     b.display();

//     // b.set(4).display();                                                                         //function “set” is returning an object on which we have used the “display” function


//     return 0;
// }



//pointers to derived class
/* we can set the value of base class data member by using derived class pointer 
 but we cannot set the value of derived class data member by using base class pointer
*/

// #include <iostream>
// using namespace std;
// class base{
//     public:
//         int num_base;
//         void display(void){
//             cout<<"base num is "<<num_base<<endl;
//         }
// };

// class derived : public base{
//     public:
//         int num_derived;
//         void display(void){
//             cout<<"base num is "<<num_base<<endl;
//             cout<<"derived num is "<<num_derived<<endl;
//         }
// };

// int main (){
//     // base *base_ptr=new base;                  
//     base *base_ptr;
//     base base_obj;
//     derived derived_obj;
    
//     base_ptr = & derived_obj;                                                                              //base poniter "base_ptr" points to derived object "derived_obj"
//     base_ptr->num_base=23;

//             // base_ptr->num_derived=23;                                                                           //this will show error because we try to access derived class properties by base class

//     base_ptr->display();                                                                                    //even we point "base_ptr" to "derived_obj" at run time "display()" will execute for base class because pointer is of base class

//     derived *derived_ptr;
//     derived_ptr=&derived_obj;                                                                               //we point "derived_ptr" pointer to "derived_obj" derived object
//     derived_ptr->num_base=55;                                                                                   //here value will change for "num_base" because "derived_ptr" is a pointer of 'derived class' ,we can access "num_base" base member with the help of derived class pointer.          because we inherited base class in derived class
//     derived_ptr->num_derived=77;
//     derived_ptr->display();                                                                                 //derived class display() function invoked because pointer is of derived class "derived_ptr"

//     return 0;
// }



//Virtual functions
/*
A member function in the base class which is declared using virtual keyword is called virtual functions.
They can be redefined in the derived class
*/  

// #include <iostream>
// using namespace std;
// class base{
//     public:
//     int num1=2;
//         virtual void display(void){
//             cout<<"base class value of num1 is "<<num1<<endl;
//         }
// };

// class derived: public base{
//     public:
//     int num2=4;
//         void display(void){
//             cout<<"derived class value of num1 is "<<num1<<endl;
//             cout<<"derived class value of num2 is "<<num2<<endl;
//         }
// };

// int main(){
//     base *base_ptr=new base;
//     base base_obj;
//     derived derived_obj;

//     // base_ptr=&base_obj;                                                                          //if we use this then display() of base class invoked even if display() of base is virtual
//     base_ptr=&derived_obj;
//     // base_ptr->num2=4;                                                                            //give error , we can not access derived class members with base pointer even if it points derived class
//     base_ptr->display();                                                                            //display of derived class invoked because we created 'base display() virtual' if not created virtual then display() of base invoked

//     return 0;
// }
//     /*
//     before virtual display() of base class
//     base pointer -> &base object , then display() of base class invoked
//     base pointer -> &derived object , then display() of base class invoked

//     after virtual display() of base class
//     base pointer -> &base object , then display() of base class invoked
//     base pointer -> &derived object , then display() of derived class invoked
//                use acc. to me-> so that, we can access derived class function with base class pointer. but if we want to change derived class member it will give error because we cannot set the value of derived class data member by using base class pointer
//     */

//     /*
//     The main thing to note here is that if we don’t use the “virtual” keyword with the “display” function of the base class
//     then beside of the point that we have pointed our base call pointer to derived class object still the compiler would have
//     called the “display” function of the base class because this is its default behavior.

//     But we have used the “virtual” keyword with the “display” function of the base class to make is virtual function so when
//     the display function is called by using the base class pointer the display function of the derived class will run because
//     the base class pointer is pointing to the derived class object.
//     */



/*
Rules for virtual functions
  They cannot be static
  They are accessed by object pointers
  Virtual functions can be a friend of another class
  A virtual function in the base class might not be used.       this can be empty.
  If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class         if they could not find function in derived class so it invoked virtual function of base class
*/

// #include <iostream>
// #include <cstring>
// using namespace std;
// class info{
//     protected:
//         string name;
//         int rating;
//     public:
//         info(string n,int r){
//             name=n;
//             rating=r;
//         }
//         virtual void display (void){cout<<"info class display()"<<endl;}
// };

// class video:public info{
//     private:
//         int time;
//     public:
//         video(string n,int r,int t): info(n,r){
//             time=t;
//         }
//         void display (void){
//             cout<<"name is "<<name<<endl;
//             cout<<"rating is "<<rating<<endl;
//             cout<<"time is "<<time<<" min"<<endl<<endl;
//         }
// };

// class text:public info{
//     private:
//         int words;
//     public:
//         text(string n,int r,int w): info(n,r){
//             words=w;
//         }
//         void display (void){
//             cout<<"name is "<<name<<endl;
//             cout<<"rating is "<<rating<<endl;
//             cout<<"words are "<<words<<endl<<endl;
//         }
// };

// int main(){
//     string name;
//     int words,time,rating;

//     //video                                                                         
//     name="AWESOME";
//     rating=4;
//     time=6;
//     video video_obj(name,rating,time);
//     // video_obj.display();                                                                                                 //we can access simply by that method

//     //text
//     name="WOW";
//     rating=5;
//     words=99;
//     text text_obj(name,rating,words);
//     // text_obj.display();

//                                             //OR

//     info *info_ptr[2];                                                                                                     //pointer of base points to derived class object
//     info_ptr[0]=&video_obj;
//     info_ptr[1]=&text_obj;

//     info_ptr[0]->display();                                                                                                 //it will invoked "info class display()" if 'virtual keyword' not use
//     info_ptr[1]->display();

//     return 0 ;
// }

/*
 The main thing to note here is that if we don’t use the “virtual” keyword with the “display”
 function of the base class then the “display” function of the base class will run.
 
 But we have used the “virtual” keyword with the “display” function of the base class to make 
 is a virtual function so when the display function is called by using the base class pointer 
 the display function of the derived class will run because the base class pointer is pointing to the derived class object.
*/



//Abstract Base Class & Pure Virtual Functions
/*
Pure Virtual Functions in C++
Pure virtual function is a function that doesn’t perform any operation and the function is declared 
by assigning the value 0 to it. Pure virtual functions are declared in abstract classes.


Abstract Base Class in C++
Abstract base class is a class that has at least one pure virtual function in its body. The classes 
which are inheriting the base class must need to override the virtual function of the abstract class 
otherwise compiler will throw an error.
*/

// #include <iostream>
// using namespace std;
// class info{                                                                                              //this 'info' is abstract class , we will inherite this class and then work on that derived class, 
//     protected:
//         string name;
//         int rating;
//     public:
//         info(string n,int r){
//             name=n;
//             rating=r;
//         }
//         virtual void display (void)=0;                                                                   //pure virtual function -- this tell, you will have to override (rewrite) this virtual function in derived class "display()" in order to works, otherwise compiler will give error 
// };

// class video:public info{
//     private:
//         int time;
//     public:
//         video(string n,int r,int t): info(n,r){
//             time=t;
//         }
//         void display (void){                                                                              //if this "display()" is not there then compiler give an error because we have created pure virtual function in abstract class, so we have to create "display()" in derived class in order to work properly
//             cout<<"name is "<<name<<endl;
//             cout<<"rating is "<<rating<<endl;
//             cout<<"time is "<<time<<" min"<<endl<<endl;
//         }
// };

// class text:public info{
//     private:
//         int words;
//     public:
//         text(string n,int r,int w): info(n,r){
//             words=w;
//         }
//         void display (void){
//             cout<<"name is "<<name<<endl;
//             cout<<"rating is "<<rating<<endl;
//             cout<<"words are "<<words<<endl<<endl;
//         }
// };

// int main(){
//     string name;
//     int words,time,rating;

//     //video                                                                         
//     name="AWESOME";
//     rating=4;
//     time=6;
//     video video_obj(name,rating,time);
//     // video_obj.display();                                                                                                 //we can access simply by that method

//     //text
//     name="WOW";
//     rating=5;
//     words=99;
//     text text_obj(name,rating,words);
//     // text_obj.display();

//                                             //OR

//     info *info_ptr[2];                                                                                                     //pointer of base points to derived class object
//     info_ptr[0]=&video_obj;
//     info_ptr[1]=&text_obj;

//     info_ptr[0]->display();                                                                                                 //it will invoked "info class display()" if 'virtual keyword' not use
//     info_ptr[1]->display();

//   return 0;
// }


