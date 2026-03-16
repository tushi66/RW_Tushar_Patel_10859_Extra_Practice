#include<iostream>
using namespace std;

class Bank{
  
        private:
        
        int balance;
        
        public:
        
        int acc;
        string name;
    
        void setbalance(int x){
            
            this-> balance = x;
        }
        
        int getbalance(){
            return this-> balance;
        }
        
        void setacc(int a){
            
            this-> acc = a;
        }
        
        int getacc(){
            
            return this-> acc;
        }
        
        void setname(string n){
            
            this-> name = n;
        }
        
        string getname(){
            return this-> name;
        }
        
            
        void eat(){
            cout << "eating lunch ..... "<< endl;
    
        }
        void cat(string n){
            cout << "eating lunch ..... "<< n << endl;
    
        }
    
        
};

class Employed : public Bank{
  
        public:
        
        
        void eat(){
            cout << "Eating lunch ..... "<< endl;
            Bank::eat();
        }
        
    
};

class Manager : public Bank{
        
        public: 
        
        void eat(){
            cout << "Eating lunch ..... "<< endl;
            Bank::eat();   
        }
    
    
};

int main(){
    
    Bank p;
    Manager m;
    Employed e;
    
    
    p.setname("Tushar");
    p.setacc(9862656);
    p.setbalance(500000000);
    
    cout << "Account name is :- " << p.getname() << endl;
    cout << "Account account num  is :- " << p.getacc() << endl;
    cout << "Account balance is  :- " << p.getbalance() << endl;
    
    
    e.eat();
    e.cat("pizaaa");
    m.eat();
    m.cat(" Sanwich");
    
    
    return 0;
}