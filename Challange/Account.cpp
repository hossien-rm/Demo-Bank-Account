#include "Account.h"

Account::Account(){
    
}
Account::Account(string name,double balance)
      :name{name},balance{balance}{
        if(balance<0.0)  
          throw IllegalBalanceException();
}
bool Account::deposit(double amount){
    if(amount<0){
       return false;
    }else{
       balance+=amount;
       return true;   
    }
}
bool Account::withdraw(double amount){
    if(balance-amount>=0 && amount >0){
        balance-=amount;
        return true;
    }else{
       throw Insufficient();
    } 
}
void Account::print(ostream &out)const{
    out.precision(2);
    out<< fixed;
    
    out << "[Account: "<< name << " , " << balance << "]";
    
}

