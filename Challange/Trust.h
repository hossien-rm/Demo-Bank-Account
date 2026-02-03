#ifndef _TRUST_H_
#define _TRUST_H_
#include "Saving.h"

class Trust:public Saving{
 private:
   static constexpr const char*def_name="Unknow name";
   static constexpr double def_balance=0.0;
   static constexpr double def_int_rate=0.0;
   static constexpr double bouns_amount=50.0;
   static constexpr double bouns_threshold=5000.0;
   static constexpr int max_withdraw=3;
   static constexpr double max_withdraw_percent=0.2;
 protected:
   int num_withdraw;
 public:    
   Trust(string name=def_name,double balance=def_balance,double int_rate=def_int_rate);   
   virtual bool deposit(double amount)override;
   virtual bool withdraw(double amount)override;
   virtual void print(ostream &out)const override;
   virtual~Trust()=default;
};

#endif // _TRUST_H_