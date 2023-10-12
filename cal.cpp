//sheryar
#include<iostream>
using namespace std;
int main ()
{
    int n1,n2,sum=0,sub=0,multip=0,choice; char N;
    float div=0;
    char Y;
    char y,n;
    do{
   cout<<endl<<"**********CALCULATOR MENU**********"<<endl;
    cout<<"1.Addition;"<<endl;
    cout<<"2.Subraction;"<<endl;
    cout<<"3.Multipication"<<endl;
    cout<<"4.Diviion"<<endl;
    
    cout<<"************************************"<<endl;
    cout<<"Enter your choice :";
    
    cin>>choice;
    if((choice>0)&&(choice<5))
    {
    cout<<"Enter  Number 1:";
    cin>>n1;
    cout<<"Enter number  2:";
    cin>>n2;
     switch(choice)
    {
        case 1:
        sum=n1+n2;
        cout<<"Sum of number 1 and 2 is: "<<n1+n2;
        break;
        case 2:
        if(n1>n2)
        sub=n1-n2;
        else
        sub=n2-n1;
        cout<<"Subraction of n1 and n2 is : "<<sub;
        break;
        case 3:
        multip=n1*n2;
        cout<<"Product of number 1 and 2 is: "<<multip<<endl;
        break;
        case 4:
        div=n1/n2;
        cout<<"div of number 1 and 2 is: "<<div;
        break;
        default:
        cout<<"INVALID CHOICE:";
    }
    }
    else 
    cout<<"Invalid Choice"<<endl;
   cout << endl << "Do you want another operation (Y/N):" << endl;
cin >> Y;

if (Y == 'N' || Y == 'n') {
    break;
}
    }
    while(true);
    cout<<"Program exited Successfully.";
    }
    





