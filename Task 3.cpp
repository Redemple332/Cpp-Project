#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void REDEMPLE();
int main()
{	

back:
	char RED;
	float num1,num2;
   char PLE;
REDEMPLE();

cout<<"Select Operators"<<endl;
cout<<"  "<<endl;
cout<<setw(15)<<"[A]--Addition"<<setw(25)<<"[S]--Subtraction"<<endl<<endl<<endl;
cout<<setw(22)<<"[M]--Multiplicatiion"<<setw(15)<<"[D]--Division"<<endl<<endl<<endl;

cout<<"Your Choice is:";

cin >> PLE;
cout << endl;
system("cls");
REDEMPLE();
cout << " ENTER FIRST NUMBER: ";
cin >> num1;
cout<<" "<<endl;
cout << " ENTER Second NUMBER: ";
cin >> num2;
cout << endl;
system("cls");
REDEMPLE();
switch (PLE){

case 'A':
cout<<"*****************************************************************"<<endl; 
cout <<" The SUM of two numbers is:  "<< num1 + num2 <<endl<<endl;
break;
cout<<"*****************************************************************"<<endl; 
case'S':
cout<<"*****************************************************************"<<endl; 
cout <<" The DIFFERENCE of two numbers is:  "<< num1 - num2 <<endl<<endl;
break;
cout<<"*****************************************************************"<<endl; 
case'M':
cout<<"*****************************************************************"<<endl; 
cout <<" The PRODUCT of two numbers is:  "<< num1 * num2 <<endl<<endl;
break;
cout<<"*****************************************************************"<<endl; 
case'D':
cout<<"*****************************************************************"<<endl; 
cout <<" The QUOTIENT of two numbers is:  "<< num1 / num2 <<endl<<endl;}
cout<<"*****************************************************************"<<endl; 

 cout<<" Would you like to try Again ?"<<endl;
 cout<<" 'Y'[yes]/'N'[no] >>";
  
  cin >> RED;
 if (RED==  'Y'|| RED==  'y'){
 
 system("cls");
 goto back;}
 
else if (RED=='N'|| RED=='n')
 
 { system ("cls") ;
 REDEMPLE();
 cout<<setw(35)<<" THANK YOU FOR USING MY CALCULATOR......."<<endl<<endl<<endl;
cout << " >>>>>>>>>>>>>>>>>>>>>>>>>>>REDEMPLE CALCULATOR<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
cin>>num1;
}

 cout<<"           ";
 system ("pause") ;
 
 return 0; 
 }
 void REDEMPLE(){
cout<<setw(61)<<" -------------------------------------------"<<endl;
cout<<setw(62)<<"|           >>REDEMPLE CALCULATOR<<         |"<<endl;
cout<<setw(61)<<" -------------------------------------------"<<endl<<endl;
 }
