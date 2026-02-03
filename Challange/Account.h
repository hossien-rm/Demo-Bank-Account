#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include "I_Printable.h"
#include <string>
#include "IllegalBalanceException.h"
#include "Insufficient.h"
using namespace std;


class Account: public I_Printable{  // Abstract Class
 private: 
  static constexpr const char*def_name="Unknow Name";
  static constexpr double def_balance=0.0;
 protected:
  string name;
  double balance; 
 public:
  Account(); 
  Account(string name=def_name,double balance=def_balance); 
  
  virtual void print(ostream &out)const override;
  virtual bool deposit(double amount)=0;    // Pure virtual function
  virtual bool withdraw(double amount)=0;
  virtual~Account()=default;
 
};

#endif // _ACCOUNT_H_
