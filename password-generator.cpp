#include<iostream>
#include<cstdlib>//use to generate random function {here used to generate random number}
#include<ctime>//to generate a function according to time
#include<string>
using namespace std;
 
string getpassword(int l){
   string password="";
   string charecters="aquickbrowndogjumpsoverthelazyfox012345AQUICKBROWNDOGJUMPSOVERTHELAZYFOX6789";
   int charsize=charecters.size();
   srand(time(0));
   int randomindex;
   for(int i=0;i<l;i++){
      randomindex=rand()% charsize;
      password=password+charecters[randomindex];
   }
   return password;
}

int main(){
   int length;
   cout<<"Enter Password Length :";
   cin>>length;
   string password=getpassword(length);
   cout<<"password Genersted :"<<password;

   return 0;
}