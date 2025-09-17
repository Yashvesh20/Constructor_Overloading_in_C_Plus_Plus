Yashvesh Singh 24070123138
#include <iostream>
#include <cmath>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    void Student1(string name1 ,int rollno1)
    {
        cout<<"Student info "<<endl;
        cout<<"Name: "<<name1<<endl;
        cout<<"Roll No. :"<<rollno1<<endl;
    }
    void Student2(string name1 ,int rollno1)
    {
        cout<<"Student info "<<endl;
        cout<<"Name: "<<name1<<endl;
        cout<<"Roll No. :"<<rollno1<<endl;
    }
};
int main() {
string std_name; 
int roll_no;
string std_name2;
int roll_no2;
cout<<"Enter Student info (name and roll no)"<<endl;
cin>>std_name;
cin>>roll_no;
cout<<"Enter second Student info (name and roll no)"<<endl;
cin>>std_name2;
cin>>roll_no2;
Student s1;
s1.Student1(std_name,roll_no);
s1.Student2(std_name2,roll_no2);
}

Output:
Enter Student info (name and roll no)
Yashvesh
138
Enter second Student info (name and roll no)
Yash
135
Student info 
Name: Yashvesh
Roll No. :138
Student info 
Name: Yash
Roll No. :135
