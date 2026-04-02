#include<iostream>
using namespace std;
class a{
    public: 
    int b;
    char c,d;
    //greedy alignment and padding 
};
class Student
{
    private:  
    string name;
    int age,rollno;
    string grade;
   //function getter and setter 
   public: 
   void setname(string s){
    name=s;
   }
   void setage(int a){
    age=a;
   }
    void setrollno(int r){
     rollno=r;
    }
    void setgrade(string g){
     grade=g;
    }
    void getname(){
        cout<<name;
    }
    int getrollno(){
        return rollno;
    }
    string getgrade(int pin){
        if(pin==123){
            return grade;
        }
        else{
            return "invalid pin";
        }
    }
};
int main()
{
    Student s1;
    s1.setname("vishal lodhi");
    s1.setage(22);
    s1.setrollno(23);
    s1.setgrade("A");
   s1.getname();
   cout<<s1.getrollno();
    cout<<s1.getgrade(123);
    a obj;
    cout<<sizeof(obj);
    return 0;
}