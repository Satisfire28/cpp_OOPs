#include<iostream>
using namespace std;

class customer{
    public: 
    string name;
    int account_number;
    int balance;
    customer(){
        cout<<"constructor is called";

    };
    
    };
    int main(){
        customer c1;
        return 0;
};
