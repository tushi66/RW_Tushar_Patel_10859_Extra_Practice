#include<iostream>
using namespace std;

class Bank{
    private:
    
    int balance = 0;   
    int account;
    string name;
    
    public:
    
   
    void setbalance(int b){
        this-> balance = b;
    }
    
    int getbalance(){
        return this->balance;
    }
    
    void setaccount(int a){
        this-> account = a;  
    }
    
    int getaccount(){
        return this-> account;  
    }
    
    void setname(string n){
        this-> name = n;  
    }
    
    string getname(){
        return this-> name;  
    }
    
    void deposit(int amount){
        
        if(amount >0){
            balance+= amount;
            cout<< "deposite success...."<< endl;
        }else{
            cout<< "invalid amount...."<< endl;
        }
    }

    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -=amount;
            cout<< "withdraw sucessfully "<< endl;
        }
        else{
            cout<<" invalid or insufficient balance..." << endl;
        }
    }
    
};



int main(){
    
    
    Bank a;
    int ch;
         int amount;

    
    do{
    cout << "enter the choice:- " << endl;
    cout << "enter 1 for create account:- " << endl;
    cout << "enter 2 for show your account all deatails:- " << endl;
    cout << "enter 3 for deposite a money :- " << endl;
    cout << "enter 4 for withrow the money :- " << endl;
    cout << "enter 5 for transfer the money same bank" << endl;
    cout << "enter 6 for transfer the money from another bank" << endl;
    cout<< "enter 7 for Exit....." << endl;
    cout << "enter your choice"  << endl;
    cin >> ch;
    
    switch(ch){
     
     
     case 1: {
     string name;
     int accno;
     
     cout << " enter your name :- " << endl;
     cin >> name;
     a.setname(name);
     
     cout << " enter your acoount number:- " << endl;
     cin >> accno;
     a.setaccount(accno);
     
     cout << "your balance is :- " << a.getbalance() << endl;     
     
     cout << "Account creatred sucessfully" << endl;
     
     break;
     }
     case 2:{ 
        
     cout << " Account name is:- "<< a.getname()<<endl;
     cout << " Account number is:- "<< a.getaccount()<<endl;
     cout << " Account balance is:- "<< a.getbalance()<< endl;
     
     
     break;
     }
     case 3: {
        cout << " enter your deposite amout:- " << endl;
        cin >> amount;
        a.deposit(amount);
        cout<< "Deposit amount sucessfully your account " << endl;
        
     break;
     }
     case 4: {
         cout << " enter your withrow amout:- " << endl;
        cin >> amount ;
        a.withdraw(amount);
        
        cout<< "withrow amount sucessfully your account " << endl;
     
     
     break;
     }
     case 5: {
          cout << " enter your transfer amout:- " << endl;
        cin >> amount;
        a.withdraw(amount);
        
        cout<< "Transfer amount sucessfully your account " << endl;
        
     
     
     break;
     }
     case 7: 
     {
        
        cout<< "Exited....... " << endl;
     }
     break;
     
     default:
     
     cout<< "Invalide choice....."<< endl;
     
     
        
    }
    }while(ch !=7);

}