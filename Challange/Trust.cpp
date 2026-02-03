#include "Trust.h"

Trust::Trust(string name,double balance,double int_rate)   
     :Saving{name,balance,int_rate},num_withdraw{0}{
}
bool Trust::deposit(double amount){
    if(amount>=bouns_threshold)
     amount+=bouns_amount;
    return Saving::deposit(amount);   
}
bool Trust::withdraw(double amount){
    if(num_withdraw>=max_withdraw || (amount>balance*max_withdraw_percent))
        return false;
    else{
        ++num_withdraw;
        return Saving::withdraw(amount);  
    }    
}
void Trust::print(ostream &out)const {
    out.precision(2);
    out<<fixed;
    out<< "[Trus Account: " <<name<<" , "<<balance<<" , " << int_rate << "%  withdrawals: " << num_withdraw <<"]";
} 