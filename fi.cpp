 #include <iostream>
#include <string>
using namespace std;
void OrderedProducts();
void Edit ();
void Delete ();
// 0 1 2 3 4 5
string prod[] = { "", "Ukelele", "Drum", "Guitar", "Flute", "Violen", "Piano", "Beatbox" };
int price[] = { 0, 2000, 5000, 2000, 3500, 2000 ,5000,2500};

int orderedProd[] = { 0, 0, 0, 0, 0, 0,0,0,0 };
int orderedQty[] = { 0, 0, 0, 0, 0, 0,0,0,0 };
int orderedAmt[] = { 0, 0, 0, 0, 0, 0 ,0,0,0};
int all[] = { 0, 0, 0, 0, 0, 0 ,0,0,0};

int TotalAmt;
int totalord;
int id;
int qty;
int hit;
char cho;
int main()
{

	cout << " " << endl;
cout << " LIST OF PRODUCTS" << endl;
cout << "=======================================================" << endl;
cout << " ID   PRODUCTS NAME                             PRICE" << endl;
cout << "-------------------------------------------------------" << endl;
// Insert products here //
for (int x = 1; x < 8; x++) {
cout << "   " << x << "      " << prod[x] <<"                              	" << price[x] << endl;}
cout << "-------------------------------------------------------" << endl;
cout << " Select Product ID: ";
cin >> id;
cout << " Enter Product Quantity: ";
cin >> qty;

for (int x = 1; x < 8; x++) {
if (orderedQty[x] == 0) {
orderedQty[x] = qty;
orderedProd[x] = id;
orderedAmt[x] = price[id] * qty;
break;

	}
	else if (orderedProd[x] == id){
	orderedQty[x] = orderedQty[x] + qty;
	orderedAmt[x] = orderedQty[x] * price[id];
	break;
	}
}


OrderedProducts();

system("pause");
return 0;
}

void OrderedProducts()
{
TotalAmt = 0;
totalord = 0;
system("cls");
cout << endl << " ORDERED PRODUCTS" << endl;
cout << "-------------------------------------------------------" << endl;
cout << " ID   Product Details                        PRICE             "            << endl;
cout << "=======================================================" << endl; 
// Insert ordered products here //
for (int x = 1; x < 6; x++) {
if (orderedQty[x] != 0) {

cout <<" in "<<x<<"	   "<< orderedQty[x] << " pc(s)" << prod[orderedProd[x]];
cout << "	 " << orderedAmt[x] << endl;
TotalAmt = TotalAmt + orderedAmt[x];
totalord = totalord + orderedQty[x];
}
}

cout << "-------------------------------------------------------" << endl;
cout << " TOTAL AMOUNT: Php " << TotalAmt << endl;
cout << " TOTAL No. of Order: " << totalord<< endl<<endl;
cout << " Order Options:  " <<endl;
cout << "   [A] Add [E] Edit D [Delete] [P] Pay" <<endl<<endl;
cout << " Enter choice:";
cin >> cho;
if (cho == 'A' ||cho == 'a' ) {
system("cls");
main();

}

else if  (cho == 'E' ||cho == 'e' ) {

}
	else if(cho=='d'){
		Delete();
	}

if (cho == 'P'||cho == 'p'){
	cout << " Enter Cash: ";
	cin >> hit;
	cout << " Change: Php " << hit - TotalAmt<<endl;
	
}



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

}







