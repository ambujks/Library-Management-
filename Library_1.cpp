#include<iostream>
#include<conio.h>
using namespace std;
class lib
{
    private:
    int n;
    char stname[20],branch[10];int roll;
    char bookname[20],arname[20];

    public:
    void getdata()
    {
        cout<<endl;
        cout<<"_ _ _ _ _Welcome to Library Management System_ _ _ _ _"<<endl;  //You can write your college name here 

        cout<<endl;
        cout<<endl;
        cout<<"Please Enter Your Name : ";
        cin>>stname;
        cout<<"Please Enter Your Roll Number : ";
        cin>>roll;
        cout<<"Please Enter Your Branch : ";
        cin>>branch;
        cout<<endl;
        cout<<endl;

        cout<<"Press 1 for Borrow Book."<<endl;
        cout<<"Press 2 for Return Book."<<endl;
        cout<<"Press 3 for Exit."<<endl;
        cout<<"Please Enter your Choise : ";
        cin>>n;
        cout<<endl;
        cout<<endl;
    }
    
    void showdata()
    {
        switch (n)
        {
            case 1:
            cout<<"Please Enter the Name of Book you want to Borrow : ";
            cin>>bookname;
            cout<<"Please Enter the Name of Author : ";
            cin>>arname;
            cout<<endl;
            cout<<stname<<" borrow this book '"<<bookname<<"'"<<endl<<"Process of Borrowing Book is Successfully Done."<<endl;
            cout<<"Please Return the book after 1 month if you don't want to pay fine Fees.";
            break;
        
            case 2:
            cout<<"Please Enter the Name of Book you want to Return : ";
            cin>>bookname;
            cout<<"Please Enter the Name of Author : ";
            cin>>arname;
            cout<<endl;
            cout<<stname<<" return this book '"<<bookname<<"'"<<endl<<"Process of Returnig Book is Successfully Done."<<endl;
            cout<<"Please Come Again";
            break;
        
            case 3:
            cout<<"Thanks to Visit"<<endl;
            break;
        
            default:
            cout<<"Invailed Choise, Please Enter the Valid Choise"<<endl;
        
        }
        cout<<endl;
    }
};
int main()
{
    lib obj;
    obj.getdata();
    obj.showdata();
    return 0;
}