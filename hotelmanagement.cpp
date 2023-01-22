
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
class password
{
public:
    char p[20];
     password(char x)
    {
       if(x==1234)
       {
           cout<<"\nEnter password(less than 10 characters)";
           ofstream outfile;
           outfile.open("password.txt");
           outfile.close();
       }
       else
       {
           cout<<"\nCode Error";
       }
    }
};

class hotel : public password
{
public:
    int roomno;
    int date;
    char name;
    char contactno;
    char card;
    char address;

    void accept()
    {
        cout<<"\nEnter date ";

        cout<<"\nEnter name ";

        cout<<"\nEnter contact number ";

        cout<<"\n card number ";

        cout<<"\nEnter address ";


    }

};




    void display()
    {
        cout<<"\nRoom number";
        cout<<"\nName";
        cout<<"\ncontact number";
        cout<<"\n card number";
        cout<<"\nAddress";
        cout<<"\n----------------------------";
    }



void room()
{

    cout<<"\nEnter room number ";
{
        cout<<"\nROOM ALREADY BOOKED";
    }


}


void edit()
 {
                cout<<"\nEnter new room number ";


}

    void roominfo()
    {
        int r;
        cout<<"\nEnter room number";
        fstream outfile;
        outfile.open("record.txt");


    }



    void customerinfo()
    {
        cout<<"\nEnter name";

        fstream outfile;
        outfile.open("record.txt",ios::in);
    }


void checkout()
{
    int rno;
    cout<<"\nEnter room number ";

        {
      cout<<"\nEnter checkout date ";
        }
}



void oldreco()
{
    ofstream outfile;
        outfile.open("prevreco.txt");

        {

            cout<<"\nCheckout date ";
        }
}
int main()
{
 int e=1,x;
 while(e!=0)
 {
     cout<<"\n\t\t HOTEL MANAGEMENT PROCESS\n ";
     cout<<"\t\t_______ ";
     cout<<"\n\t\t1.Press 1 to book a room              ";
     cout<<"\n\t\t3.Press 2 to view room information    ";
     cout<<"\n\t\t4.Press 3 to view customer information";
     cout<<"\n\t\t5.Press 4 to edit the data            ";
     cout<<"\n\t\t6.Press 5 checkout room           ";
     cout<<"\n\t\t8.Enter 6 to view old record          ";
     cout<<"\n\t\t9.Enter 7 to change password          ";
     cout<<"\n\t\t10.Enter 8 to exit                    ";
     cout<<"\n\t\t______";
     cout<<"\nSelect your choice                    ";
     cin>>x;
     switch(x)
     {
         case 1:
         {
             roominfo();
             break;
         }
         case 2:

         {
            roominfo();
             break;
         }
         case 3:
         {
             customerinfo();
             break;
         }
         case 4:
         {
             edit();
             break;
         }
         case 5:
         {
             checkout();
             break;
         }

         case 6:
         {
             oldreco();
             break;
         }
         case 7:
         {
             int y;
             cout<<"\nEnter password - ";


             break;
         }
         case 8:
         {
             e=0;
             break;
         }

    }
 }
 cout<<"\n HAVE A NICE DAY! VISIT AGAIN!";
}
