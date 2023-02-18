//Templates
/* A template is believed to escalate the potential of C++ several fold by giving it the ability to define data types
 as parameters making it useful to reduce repetitions of the same declaration of classes for different data types.
 */

/*
template<class T1>                                                                //here 'T1' could be any name like E1,R1
class nameOfClass{
    //body
}
*/

// #include <iostream>
// using namespace std;

// template<class T>
// class vector{
//     public:
//         T *arr;                                                                                 //the array becomes of the type we supply in the template.
//         int size;
//         vector(int a){
//             size=a;
//             arr = new int[size];
//         }
//         T sum_vector(vector &v){                                                                //this (vector &v) as well as (vector v) work, i dont't know why
//         T s=0;
//             for(int i=0;i<size;i++){
//                 s+=this->arr[i]+v.arr[i];                                                       //"this->" not necessary its simple points to that specfic arr
//             }
//             return s;
//         }
// };
// int main(){
//     vector <int>v1(2);
//     v1.arr[0]=2;
//     v1.arr[1]=4;

//     vector <int>v2(2);
//     v2.arr[0]=1;
//     v2.arr[1]=7;

//     int n=v1.sum_vector(v2);                                                                   //we passed v2 object to function sum_vector() so it goes in "vector class"
//     cout<<"sum is "<<n<<endl;
    
//     return 0;
// }



//Templates with Multiple Parameters
/*
template<class T1, class T2>                                                                //you can also create more parameters but seperated it with 'comma'
class nameOfClass{
    //body
}
*/

// #include <iostream>
// using namespace std;

// template <class T1,class T2>                                                                            
// class base{
//     private:
//         T1 a;
//         T2 b;
//     public:
//         base(T1 x, T2 y){
//             a=x;
//             b=y;
//         }
//         void display (void){
//             cout<<this->a<<"     "<<this->b<<endl;
//         }
// };
// int main(){

//     base <char ,int> b1('A',33);                                                                        //write any data type according to your need
//     b1.display();

//     base <float ,char> b2(58.22,'R');
//     b2.display();
//     return 0;
// }



//Templates with Default Parameters
// #include <iostream>
// using namespace std;

// template <class T1=int , class T2=char>                                                             //if the user doesn’t put any data type in main, default ones get considered. 
// class name{
//     private:
//         T1 a;
//         T2 b;
//     public:
//         name(T1 x, T2 y){
//             a=x;
//             b=y;
//         }
//         void display(void){
//             cout<<"a is "<<this->a<<endl;
//             cout<<"b is "<<this->b<<endl<<endl;
//         }
// };
// int main(){

//     name<> n1(23,'A');                                                                               //blank <>, so defaults parametes will considered                                                              
//     n1.display();

//     name<float,int> n2(23.555,99);                                                                   //here we choose data types of our choice . this will change the default data types with ours 
//     n2.display();                                                                                    
//     return 0;
// }



//Function Templates
// #include <iostream>
// using namespace std;

// template <class T1, class T2>
// float avg(T1 a, T2 b){
//     float avg=(a+b)/2;
//     return avg;
// }

// template <class T>
// void swapp(T &a,T &b){                                      //swap using call by reference    
//     T temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
// int main(){
//     float num=avg(5,3);                                 //don't specifically write in "<>" that which type of datatype you are going to use , but you will get value in float because you choose (float num)
//     // float num=avg(5,5.22);
//     printf("%f",num);

//     // int x=4,y=6;                                         //change datatype and put value
//     char x='s',y='t';                                       
//     swapp(x,y);
//     cout<<x<<endl<<y<<endl;

//     return 0;
// }



//Declare a template function outside
/*
declare a template function outside a using the scope resolution operator, ‘::’. 
*/

// #include <iostream>
// using namespace std;

// template <class T>
// class base{
//     public:
//         T val;
//         base(T x):val(x){}                                                      //another metod of put values using constructor
//         void display();

// };
// template <class T>
// void base<T>::display(){                                                        //everything is same just put "<>" after class name
//     cout<<val<<endl;
// }

// int main(){
//     base <char>b('F');
//     cout<<b.val<<endl;                                                            //we can access "val" because it is in public
//     b.display();
//     return 0;
// }



//Overloading Template Functions
// #include <iostream>
// using namespace std;

// void demo(int a){
//     cout<<"this a demo function"<<endl;
// }

// template <class T>
// void demo(T a){
//     cout<<"this a demo template function"<<endl;
// }

// int main(){
//     demo(4);                                                                //Exact match takes the highest priority
//     demo(4.55);                                                             //it did not find any char datatype function so template function executed                 
//     return 0;
// }




//STL
/*
iterator -> Iterators provide a generic approach to navigate through the elements of a container. 
vector<int> :: iterator iter = vec1.begin();
        vector<int> :: iterator iter;       --. iterator for vector
        list<int> :: iterator iter;         --> iterator for list
*/

//Vector in STL
#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Dislaying value"<<endl;
    for(int i=0;i<v.size();i++){                                                               //v.size so it run only till last element
        cout<<v[i]<<" ";                                                                       //v[i] and v.at(i) is same
    }
}

// template <class T>                                                                              //ANOTHER METHOS OF DISPLAY 
// void display(vector<T> &v){
//     vector<int > :: iterator iter;                                                                     
//     cout<<"Dislaying value"<<endl;
//     for(iter=v.begin();iter!=v.end();iter++){                                                               
//         cout<<*iter<<" ";                                                                       
//     }
// }

// int main(){

//     vector<int> vec1;           //zero length integer vector

//     int num,size;
//     cout<<"enter size"<<endl;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cout<<"enter number: "<<endl;
//         cin>>num;
//         vec1.push_back(num);                                                                 //adds an element to the end
//     }    
//                             //BOTH ABOVE AND BELOW METHODS ARE VALID FOR PUTTING VALUES
//     // vec1.push_back(2);
//     // vec1.push_back(0);
//     // vec1.push_back(6);
//     // vec1.push_back(4);
//     // vec1.push_back(8);

//     // vec1.pop_back();                                                                      //it removes last element
//     // display(vec1);

//     vector<int > :: iterator iter;                                                            //create iterator
//     iter = vec1.begin();                                                                      //iterator points the beginning value of the vector
//                                         //Insert (iterator, element to insert)           //This method of vectors inserts an element to the position the iterator is pointing to

//     vec1.insert(iter+2,55);                                                                    //it insert value 55 in 3rd position because iter pointing 3rd    (iter+2)=3rd position
//     // vec1.insert(iter,6,5);                                                                  //it prints six times 5 in 1st position
//     // vec1.erase(iter+2);                                                                      //it will remove the 3rd element only use with iterator so vec1.erase(iter+2) it points 3rd element so it will remove

//     display(vec1);



//     // vector<float> vec2(4);       //4-element character vector
//     // vec2.push_back(12);
//     // display(vec2);


//     // vector<char> vec3(vec2);    //4-element character vector from vec2
//     // display(vec3);

//     // vector<int> vec4(6,3);      //6-element vector of 3s
//     // display(vec4);                                                                          //it prints siz times 3
//     // cout<<vec4.size();                                                                      //it print size of the vector

//     return 0;
// }



//Lists in STL
/*
a list element cannot be directly accessed by its index, we must traverse through each element and print them.
*/

// #include<iostream>
// #include<list>
// using namespace std;

// template <class T>
// void display(list<T> &l){
//     list<int>:: iterator iter;                                                            //create iterator
//     for(iter=l.begin();iter!=l.end();iter++){                                             //iterator point 'l beginning element which is of list1' and run till end of element of list1
//         cout<<*iter<<" ";                                                                 //iterator print its value
//     }
//     cout<<endl;
// }

// int main(){

//     list<int> lst1;                                      //empth list of 0 length

//     // lst1.push_back(8);                                                                      //we will pass each value to the list
//     // lst1.push_back(5); 
//     // lst1.push_back(7); 
//     // lst1.push_back(1); 
//     // lst1.push_back(3); 
//     // lst1.push_back(2); 
//     // lst1.push_back(9); 

//                                     //ABOVE AND BELOW BOTH ARE SAME METHOD FOR PUTTING VALUES

//     int num,size;
//     cout<<"enter size"<<endl;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cout<<"enter number: "<<endl;
//         cin>>num;
//         lst1.push_back(num);                                                                 //adds an element to the end
//     }   

//     // lst1.remove(9);                                                                         //it will erase "value 9" in whatever location it is
//     // lst1.pop_back();                                                                           //remove last element

//     lst1.sort();                                                                               //it sort list in incresing order

//     display(lst1);



//     list<int> lst2(5);                                      //empth list of 5 length   but have no elements
//     list<int>::iterator iter;
//     iter=lst2.begin();

//     *iter=5;                                                                                    //only possible in here because here list have length 5 but 0 elements in it
//     iter++;
//     *iter=2;
//     iter++;
//     *iter=8;
//     iter++;

//     display(lst2);

//     // lst1.merge(lst2);                                                                           //merge two list and then sort
//     // lst1.sort();
//     // display(lst1);


//     return 0;
// }



//Maps in STL
/*
A map in C++ STL is an associative container which stores key value pairs
key - names and value - marks
Maps always sort these pairs by the key elements.

marksMap.insert({pair_1,pair_2......pair_n});                               //for insert

*/

// #include <iostream>
// #include <map>
// #include <string>

// using namespace std;

// void display(map<string , int> &m){
//     map<string,int> :: iterator iter;                                                           //create iterator of map
//     for(iter=m.begin();iter!=m.end();iter++){                                                   //iter point map 1st element till last element 
//         cout<<(*iter).first<<" "<<(*iter).second<<endl;                                         //.first accesses the first value of a pair that is our map key here, and .second accesses the second value of the pair that is our map values here.
//     }
// }

// int main(){

//     // Map is an associative array
//     map<string,int> MarksMap;
//     MarksMap["qwerty"]=88;
//     MarksMap["lucus"]=28;
//     MarksMap["lower"]=78;

//     // MarksMap.insert({{"awesome",99},{"bubble",87}});                                            //for insert focus on {}

//     display(MarksMap);                                                                          //pass map to function which store in reference of m

//     // cout<<MarksMap.size()<<endl;                                                             //size of map
//     return 0;
// }



//Function Objects (Functors) In STL
/*
A function object is a function wrapped in a class so that it is available as an object.

sort(address of first element, address of last element);        --> sorting
*/

// #include <iostream>
// #include <algorithm>
// #include <functional>

// using namespace std;

// int main(){
//     int arr[]={1,8,5,2,9};

//     // sort(arr,arr+3);                                                                //this can only sort upto 3 elements

//     sort(arr,arr+5);                                                                //this can sort till last because our total elements are 5
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }

//     // sort(arr,arr+5,greater<int>());                                                     //if we wanted to sort the same array in descending order, since the sort function can default sort in ascending order only? So, here comes our saviour, functional objects. Our sort function also takes a third parameter which is a functor ( functional object).
//     //                                                                                     //Among all the different functors we have, the one to help this sort function to sort the array in descending order, is the greater<int>().
//     //     for(int i=0;i<5;i++){
//     //         cout<<arr[i]<<" ";
//     //     }
    

//     return 0;
// }