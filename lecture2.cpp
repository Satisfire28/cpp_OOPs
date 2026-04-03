#include<iostream>
using namespace std;

class customer{
    public: 
    string name;
    int account_number;
    int balance;
    //default constructor
    customer(){
        cout<<"constructor is called";
        name="vishal";
        account_number=123;
        balance=1000;

    
    };
    //parameterized constructor //custurctor overloading
    // customer(string name, int account_number, int balance){
    //     this->name = name;
    //     this->account_number = account_number;
    //     this->balance = balance;
    // };
    //inline custoructor

    inline customer(string a, int b, int c): name(a), account_number(b), balance(c){};

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    };
    customer(customer &c){
        name=c.name;
        account_number=c.account_number;
        balance=c.balance;

    };
    //destructor : 
    ~customer(){
        cout<<"destructor is called";
    };

    int main(){
        customer a1,a2,a3;
        a1.display();
        customer c3("aman",234,23423);
        customer c2("vishal lodhi",123,1000);
        c2.display();
        c3.display();
        customer a4(a1);
        a4.display();
        return 0;
};
