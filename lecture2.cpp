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

    };
    //parameterized constructor
    customer(string a,int b, int c){{
        name=a;
        account_number=b;
        balance=c;
    }

    }
    
    };
    int main(){
        customer c1;
        customer c2("vishal",123,1000);
        cout<<c2.name<<" "<<c2.account_number<<" "<<c2.balance;
        return 0;
};
