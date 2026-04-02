#include<iostream>
using namespace std;
class Student
{
    public: 
    string name;
    int age,rollno;
    string grade;
};
int main()
{
    Student s1;
    s1.name="vishal lodhi";
    s1.age=22;
    s1.rollno=23;
    s1.grade="A";
    cout<<s1.name<<" "<<s1.age<<" "<<s1.rollno<<" "<<s1.grade<<endl;
}