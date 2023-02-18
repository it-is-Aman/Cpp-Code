//File I/O
/*
fstreambase

ifstream --> derived from fstreambase       used for input
ofstream --> derived from fstreambase       used for output
*/
 
//opening files using constructor
// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){
//     string str1;

//     //Opening files using constructor and reading it
//     ifstream in_object("file1.txt");            //read operation             here"in_object" can be any name
//     in_object>>str1;
//     cout<<str1;                                                                         //use for only read single word
//     // getline(in_object,str1);                                                         //use to get single entire line
//     // cout<<str1;   

//     //Opening files using constructor and writing it
//     ofstream out_object("file2.txt");           //write operation
//     out_object<<"awesome man";


//     return 0;
// }



//opening files using the member function open() of the class
// #include <iostream>
// #include <string>
// #include <fstream>

// using namespace std;

// int main(){
//     //opening file using open() and reading file
//     string str1;
//     ifstream in_file;
//     in_file.open("file1.txt");
//     while (in_file.eof()==0){                                       //eof() return 1 when file reaches end
//         // in_file>>str1;                                           //you get one words at a time
//         getline(in_file,str1);
//         cout<<str1<<endl;
//     }
//     in_file.close();

//     //opening file using open() and writing it
//     string str2;
//     ofstream out_file;
//     out_file.open("file2.txt");
//     cout<<"enter your name"<<endl;
//     cin>>str2;
//     out_file<<str2 + " is my name";
//     out_file.close();

//     return 0;
// }