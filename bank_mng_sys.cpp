#include<iostream>
#include<conio.h>    // For getch()
#include<stdio.h>
#include<fstream>
#include<windows.h>    // For system("cls")


using namespace std;
class bank
{
    private: 
    int pin;
    float cash;
    string id,fname,middleName,lastname,phoneNo,aadhar,accno;
    public:
    void menu();
    void bank_management();
    void atm_management();
    void new_user();
    void cash_deposite();
    void cash_withdrawal();
    void bill_payment();
    void check_bank_balance();

};
void bank::menu()
{
    retry:
    system("cls");
    int choice;
    char ch;
    string accno,enteredpin,pass;
    cout<<"\n\n\t\t\tControl Panel";
    cout<<"\n\n 1.Bank Management";
    cout<<"\n\n 2.ATM Management";
    cout<<"\n\n 3. Exit ";
    cout<<"\n\n Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
      
         cout<<"\n\n\t\tLogin Account";
         cout<<"\n\n Enter 11 digit Account number :";
         cin>>accno;
         
         cout<<"\n\n\t\tPin code :";
         for(int i=1;i<=4;i++)
         {
           ch=getch();
           enteredpin += ch;
           cout<<"*"; 
         }
         
        if(accno == "99607737520" && enteredpin == "0523" )
        {
            bank_management();
        }else{
            cout<<"\n Invalid credentials, try again";
        }
          break;
        case 2:
          atm_management();
          break;
        case 3:
          exit(0);
        default:
         cout<<"\n\n Invalid credentials try again";
    }
    getch();
    goto retry;
}
void bank::bank_management()
{
    retry:
     system("cls");
     int choice;
     char ch;
     cout<<"\n\n\n\t\t\t Bank management System ";
     cout<<"\n\n 1. New User";                                             
     cout<<"\n 2. Cash Deposite ";                       
     cout<<"\n 3. Cash Withdraw ";
     cout<<"\n 4. Bill Payments ";
     cout<<"\n 5. Balance Enquiry ";
     cout<<"\n 6. Go Back ";
     cout<<"\n\n Enter Your choice : ";
     cin>>choice;
     switch(choice)
     {
        case 1:
         new_user();
           break;
        case 2:
        cash_deposite();
           break;
        case 3:
        cash_withdrawal();
           break;
        case 4:
        bill_payment();
           break;
           case 5:
        check_bank_balance();
           break;
        case 6:
            menu();
            break;
        default:
           cout<<"\n\n Invalid credentials try again";
     }
     getch();
     goto retry;
 
}
void bank::new_user()
{
    system("cls");
    int pincode;
    string address;
    cout<<"\n\n\t\t Add New User";
    cout<<"\n\n User ID :";
    cin>>id;
    cout<<"\nFirst Name : ";
    cin>>fname;
    cout<<"\n Enter the Middle name : ";
    cin>>middleName;
    cout<<"\nEnter the last name :";
    cin>>lastname;
    cout<<"\nAddress : ";
    cin>>address;
    cout<<"\nAadhar Number : ";
    cin>>aadhar;
    cout<<"\n Pincode (5 digit) : ";
    cin>>pincode;
    cout<<"\n Phone No. : ";
    cin>>phoneNo;
    cout<<"\n\n\t\tThe New User is : "<<id<<endl;;
    cout<<"\nName :"<<fname<<" "<<middleName<<" "<<lastname<<" "<<endl;
    cout<<"\nAadhar no :"<<aadhar<<endl;
    cout<<"\nAddress : "<<address<<endl;
    cout<<"\nPincode : "<<pincode<<endl;
    cout<<"\nPhone Number : "<<phoneNo<<endl;
    cout<<"\n\n\t\tThe new user is created successfully.....!!!!!!!"<<endl;
    cout<<"\n\nThe account will be created within 2-3 working days,\n\nTHANK YOU FOR BANKING WITH US"<<endl;
    cout << "\n\nPress any key to return...";
    getch();
    menu();
}
void bank::cash_deposite()
{
   system("cls");
   cout<<"\n\n\t\t Cash Deposite ";
   cout<<"\nEnter the 11 Digit Account Number : ";
   cin>>accno;
   cout<<"\n\nEnter the Amount : ";
   cin>>cash;
   cout<<"\nEnter the contact number :";
   cin>>phoneNo;
   cout<<"\nPress Enter";
   cout<<"\n\n Collect your Receipt ";
   cout<<"\n\n\t\tTransaction comnpleted successfully";
   cout<<"\n\n\t\tTHANK YOU FOR BANKING WITH US..!!";
   getch();
   menu();

}

void bank::cash_withdrawal()
{
   system("cls");
   cout<<"\n\n\t\t Cash withdrawal ";
   cout<<"\nEnter the Amount : ";
   cin>>cash;
   cout<<"\nEnter the 11 Digit Account Number : ";
   cin>>accno;
   cout<<"\n\n Take the money from counter number.2";
   cout<<"\n\n Collect your Receipt ";
   cout<<"\n\n\t\tTransaction comnpleted successfully...!!!";
   cout<<"\n\n\t\tTHANK YOU FOR BANKING WITH US..!!!";
   cout << "\n\nPress any key to return...";
   getch();
   menu();
}
void bank::bill_payment()
{
   system("cls");
   char bill;
   cout<<"\n\n\n\t\t\t Bill Payment";
   cout<<"\nEnter the bill you want to pay : ";
   cin>>bill;
   cout<<"\nEnter the Account number :";
   cin>>accno;
   cout<<"\nAmount to be paid : ";
   cin>>cash;
   cout<<"\nPress Enter";
   cout<<"\n\n\t\tTransaction comnpleted successfully...!!!";
   cout<<"\n\n\t\tTHANK YOU FOR BANKING WITH US..!!!";
   cout << "\n\nPress any key to return...";
   getch();
   menu();
 
}
void bank::check_bank_balance()
{
   system("cls");
   cout<<"\n\n\n\t\t\t Balance Enquiry";
   cout<<"\n\nEnter the Account Number : ";
   cin>>accno;
   cout<<"Balance : ******.** "; 
   cout << "\n\nPress any key to return...";
   getch();
   menu();
}

void bank::atm_management()
{
     system("cls");
     int choice;
     char ch;
     cout<<"\n\n\n\t\t\t ATM management System ";
     cout<<"\n\n 1. Check Balance";
     cout<<"\n 2. Withdraw Amount ";
     cout<<"\n 3. Deposite money";
     cout<<"\n 4. Go Back ";
     cout<<"\n\n Enter Your choice : ";
     cin>>choice;
     switch(choice)
     {
        case 1:
        check_bank_balance();
           break;
        case 2:
        cash_withdrawal();
           break;
        case 3:
        cash_deposite();
           break;    
        case 4:
            menu();
        default:
           cout<<"\n\n Invalid credentials try again";
     }
     getch();
}

int main(){

 bank obj;
 obj.menu();

}