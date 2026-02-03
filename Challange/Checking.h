#ifndef _CHECKING_H_
#define _CHECKING_H_
#include "Account.h"


class Checking:public Account{
 private:
   static constexpr const char*def_name="Unknow Name";
   static constexpr double def_balance=0.0;  
   static constexpr double per_check_fee=1.5;
 public:
   Checking(string name=def_name,double balance=def_balance); 

  virtual bool withdraw(double amount)override;
  virtual bool deposit(double amount)override;
  virtual void print(ostream &out)const override;
  virtual~Checking()=default;   
};

#endif // _CHECKING_H_