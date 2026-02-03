#ifndef _INSUFFICIENT_H_
#define _INSUFFICIENT_H_
#include "Account.h"
#include <cstring>
class Insufficient:public exception{
public:
    Insufficient()noexcept=default;
    ~Insufficient()=default;
    virtual const char *make()const noexcept {    
      return "Insufficient funs !!";  
    }
};

#endif // _INSUFFICIENT_H_
