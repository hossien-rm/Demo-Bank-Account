#ifndef _ILLEGALBALANCEEXCEPTION_H_
#define _ILLEGALBALANCEEXCEPTION_H_
#include "Account.h"

class IllegalBalanceException:public exception{
public:
    IllegalBalanceException()noexcept=default;
    ~IllegalBalanceException()=default;
    virtual const char *what() const noexcept{     //return type is pointer
        return "Illegal Balance Exception";
    } 
};

#endif // _ILLEGALBALANCEEXCEPTION_H_
