#ifndef _SAVING_H_
#define _SAVING_H_
#include "Checking.h"


class Saving:public Account{
 private:
   static constexpr const char*def_name="Unknow name";
   static constexpr double def_balance=0.0;      
   static constexpr double def_int_rate=0.0;      
 protected:
   double int_rate;  
 public:   
    Saving(string name=def_name,double balance=def_balance,double int_rate=def_int_rate);
  virtual bool withdraw(double amount)override;  
  virtual bool deposit(double amount)override;
  virtual void print(ostream &out)const override;
  virtual~Saving()=default;  
    
};

#endif // _SAVING_H_