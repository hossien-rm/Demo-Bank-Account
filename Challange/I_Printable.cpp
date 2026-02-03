#include <iostream>
#include "I_Printable.h"

ostream &operator<<(ostream &out, const I_Printable &rhs){
    rhs.print(out);
    return out;
}