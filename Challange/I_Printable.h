#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_
#include <iostream>

using namespace std;

class I_Printable{
  friend ostream &operator<<(ostream &out, const I_Printable &rhs);
 public:
  virtual void  print (ostream &out)const=0;  
  
  virtual~I_Printable()=default;

};

#endif // _I_PRINTABLE_H_