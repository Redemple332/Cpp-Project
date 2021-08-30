#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
using namespace std;
// * LIMITIZER * //
void setcolor(unsigned long color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon,color);
}
void orderedproducts();
void Edit();
void Pay();
void Delete();
void petmalu();

string prod[] = {"         ", "Mouse    " , "keyboard ", "AVR      ", "Mouse pad", "speaker  "};
int price[] = {0,250,300,800,50,500};

int orderedProd[] = {0, 0, 0, 0, 0, 0};
int orderedQty[]  = {0, 0, 0, 0, 0, 0};
int orderedAmt[]  = {0, 0, 0, 0, 0, 0};
int totalorder[]  = {0, 0, 0, 0, 0, 0};
int orderedID[]   = {0, 0, 0, 0, 0, 0};
int orderedCash[] = {0};
int change;
int TotalQty;
int TotalAmt;
int id;
int cash;
int qty;
char cho,choice;

int main()
{
	
	petmalu();
	cout << "";setcolor(15);
	cout << "                       |      LIST OF PRODUCTS       |" <<endl;
	cout << "                       |=============================|" << endl;
	cout  <<"                       |ID     ITEMS           PRICE |" << endl;
	cout << "                       |-----------------------------|" << endl;
	for (int l=1 ; l < 6 ; l++){
	
	  cout << setw(23) << " "<<"  " <<  l << " " <<setw(10)<< prod[l] << " "  <<setw(13) <<price[l] <<endl;
	   
	}
	
	cout << "                       |-----------------------------|" << endl;
	cout << "                        Select Product ID : ";
	cin >> id;
	cout << "                        Select Product Quantity : ";
	cin >> qty;
	
	
	for (int l=1 ; l < 6 ; l++){
		if (orderedQty[l] == 0){
			orderedQty[l] = qty;
			orderedProd[l] = id;
			orderedAmt[l] = price[id] * qty;
			break;
		}
		
	else if (orderedProd[l] == id){
	 	orderedQty[l] = orderedQty[l] + qty;
	 	orderedAmt[l] = orderedQty[l] * price[id];
	 	orderedProd[l] = id;
	 	break;
	}
	}
	orderedproducts();
	system ("pause");
	return 0;
}


void orderedproducts()
{
	TotalAmt = 0;
	TotalQty = 0;
	system ("cls");
	petmalu();
	system("color a");
	cout <<endl<< "                          ORDERED PRODUCTS" << endl;
	cout <<"                        |=================================|" << endl;
	cout <<"                        |ID  Product details     PRICE    |" << endl;
	cout <<"                        |---------------------------------|" << endl;
	for (int l=1;l < 6;l++){
		if (orderedQty[l] !=0){
			cout << setw(25)<<" " << " " << orderedProd[l] <<setw(3) << "   " << orderedQty[l]<< "pc(s)" << prod[orderedProd[l]];
			cout <<setw(9) << orderedAmt[l] << " " <<setw(9) <<  endl;
			TotalAmt = TotalAmt + orderedAmt[l];
			TotalQty = TotalQty + orderedQty[l];	
	}
	}
	
	cout << "                        |---------------------------------|"<<endl;
	cout << "                         TOTAL AMOUNT : Php   " << TotalAmt << endl;
	cout << "                         TOTAL NO. of ORDER:  " << TotalQty << endl << endl;
	cout << "                         Order Options:" << endl;
	cout << setw(33) <<  "[A] Add" << setw(5) << "[E] Edit" << setw(5) << "[D] Delete" << setw(5) << "[P] pay" << endl;
	cout << "                         Enter choice:";
	cin >> choice;
	if (choice=='a'||choice=='A'){
		system ("cls");
	    main();
	}
	else if(choice=='e'){
		Edit();
	}
	else if(choice=='d'){
		Delete();
	}
	else if(choice=='p'){
		Pay();
	}
}

void Edit()
{
	cout <<"                          Select Product ID to Edit:";
	cin>> id;
	cout <<"                             Enter Product Quantity:";
	cin >> qty;
		for (int l=1 ; l < 6 ; l++){
		if (orderedQty[l] == 0){
			orderedQty[l] = qty;
			orderedProd[l] = id;
			orderedAmt[l] = price[id];
			break;
		}
		
	else if (orderedProd[l] == id){
	 	orderedQty[l] =  qty;
	 	orderedAmt[l] = orderedQty[l] * price[id];
	 	orderedProd[l] = id; 
	 	break;
	}
	}
	orderedproducts();
}

void Delete()
{
	cout << "                          Select Product ID to Delete:";
	cin >> id;
		for (int l=1 ; l < 6 ; l++){
		if (orderedProd[l] == id){
			orderedQty[l] = 0;
			orderedProd[l] = 0;
			orderedAmt[l] = 0;
			break;
			
	}
	}
	orderedproducts();	
}



void Pay()
{

  TotalAmt=0;
  TotalQty=0;
  change=0;
  system("cls");
  petmalu();
  cout << "                                              LIMITIZER" << endl;
  cout << "                                             ELECTRONICS" << endl;
  cout << "                                                SHOP" << endl << endl;
  cout << endl << "                                 ORDERED PRODUCTS" << endl;
  cout << "                                 ------------------------------------" << endl;
  cout << "                                  ID     Prod details         PRICE   " << endl;
  cout << "                                 ------------------------------------" << endl;
  	for (int l=1 ; l < 6 ; l++){
		if (orderedQty[l] != 0){
			cout << setw(33) << " " << " " << orderedProd[l] << setw(5) << " " << orderedQty[l] << "pc(s)" << prod[orderedProd[l]];
			cout << setw(12) << orderedAmt[l] << " " << endl;
			TotalAmt= TotalAmt + orderedAmt[l];
			TotalQty= TotalQty + orderedQty[l]; 

  }	
  
}
 cout << "                                 ------------------------------------" << endl;
 cout << "                                  TOTAL AMOUNT:Php" <<  TotalAmt<<" " << endl;
 cout << "                                  TOTAL No. of items:"<<TotalQty<<" " << endl;
 cout << "                                 ------------------------------------" << endl;
 cout << "                                  Enter cash:";
 cin >> cash;
  
  for(int l=1;l<6;l++){
  	if (orderedCash[l]==0)
  	orderedCash[l]=cash;
  	change=cash-TotalAmt;
  }
  cout << " ";setcolor(15);
  cout << "" << endl;
  cout << "                                  CHANGE:Php" << change << endl << endl << endl;
  cout << " ";setcolor(10);
  cout << "                                        THANK YOU COME AGAIN" << endl << endl;
  cout << "                                         THIS SERVES AS YOUR " << endl;
  cout << "                                            SALES INVOICE" << endl << endl << endl;
  cout << "                                       thank you for using system"  << endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl<< endl;
}
