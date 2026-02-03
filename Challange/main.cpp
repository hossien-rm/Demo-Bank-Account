#include "Account.h"
#include "Account__Uilit.h"
#include "Checking.h"
#include "I_Printable.h"
#include "Saving.h"
#include "Trust.h"
#include "Trust.h"
#include "IllegalBalanceException.h"
#include "Insufficient.h"
#include <memory>
#include <vector>
int main (){
    

   string name_acc; 
   double balance_acc;
   double withdraw_acc;
   cout << "Enter your name of Account?";
   cin>>name_acc;
   cout  << "How maney deposit to "<<name_acc << "'s Account?";
   cin>>balance_acc ; 


try {
     unique_ptr<Account> ptr=make_unique<Checking>(name_acc,balance_acc);
      cout << *ptr << endl;
      cout << "\nProgram compelete succssecfully " << endl;
      cout << "How many withdraw to "<<name_acc << "'s Account?"; 
      cin>>withdraw_acc;
      ptr->withdraw(withdraw_acc);
      cout << "\n" <<  *ptr << endl; 
}    
catch(const IllegalBalanceException &ex){
//    cerr << "Sorry, your deposit is negtive!!" << endl;
    cerr << ex.what() << endl;
}    
//catch(...){                                          // catch every type of throw.
catch(const Insufficient &ex){
    cerr <<"Sorry, insufficient funs!!" <<endl; 
//     cerr  << ex.what() << endl;
}  
    
  cout <<"Ending procces." <<endl;  
    return 0;
}
