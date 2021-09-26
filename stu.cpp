/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
class empl
{
   public: 
   int a;
   string sal,name,id,pass,pwd,uname;
    void choose()
    {
        cout<<"enter your choice"<<endl;
        cout<<"1.register"<<endl<<"2.login"<<endl;
        cin>>a;
        ch();
    }
    void ch()
    {
        if(a==1)
        {
            getreg();
        }
        else{
            logget();
        }
    }
    void getreg()
    {
        cout<<"<---REGISTER--->"<<endl;
        cout<<"enter your uname"<<endl;
        cin>>name;
        cout<<"enter your id"<<endl;
        cin>>id;
        cout<<"enter your salary"<<endl;
        cin>>sal;
        cout<<"enter your passwrd"<<endl;
        cin>>pwd;
        valreg();
    }
    void valreg()
    {
        if(name=="")
        {
            cout<<"enter above 6 chars"<<endl;
        }
        else
        logget();
    } 
    void logget()
         {
        cout<<"<---LOGIN--->"<<endl;
        cout<<"enter your username"<<endl;
        cin>>uname;
        cout<<"enter your password"<<endl;
        cin>>pass;    
        logval();
        }
    void logval(){
        while (pass !=pwd)  
        {            
        cout << "incorrect, try again"<<endl;
        logget();
        }
        cout << "correct password"<<endl; 
        res();
        }
    void res()
    {
        cout<<"<--RESULT-->"<<endl;
        cout<<"username is :"<<name<<endl;
        cout<<"id is :"<<id<<endl;
        cout<<"salary is :"<<sal<<endl;
        cout<<"passwrd is :"<<pwd<<endl;
    }
};


int main()
{
    empl e;
    e.choose();

    return 0;
}
