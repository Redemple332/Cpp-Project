 #include <iostream>
#include <string>
using namespace std;
void OrderedProducts();

// 0 1 2 3 4 5
string prod[] = { "", "Ukelele", "Drum", "Guitar", "Flute", "Violen", "Piano", "Beatbox" };
int price[] = { 0, 2000, 500, 2000, 3500, 20000 ,5000};

int orderedProd[] = { 0, 0, 0, 0, 0, 0,0,0,0 };
int orderedQty[] = { 0, 0, 0, 0, 0, 0,0,0,0 };
int orderedAmt[] = { 0, 0, 0, 0, 0, 0 ,0,0,0};
int all[] = { 0, 0, 0, 0, 0, 0 ,0,0,0};
int TotalAmt;

int id;
int qty;
char cho;
int main()
{
cout << " LIST OF PRODUCTS" << endl;
cout << "==================================" << endl;
cout << " ID          ITEMS            PRICE" << endl;
cout << "----------------------------------" << endl;
// Insert products here //
for (int x = 1; x < 8; x++) {
cout << " " << x << " " << prod[x] << " " << price[x] << endl;
}
cout << "----------------------------------" << endl;
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
system("cls");
cout << endl << " ORDERED PRODUCTS" << endl;
cout << "==================================" << endl;
cout << " Qty ITEMS PRICE" << endl;
cout << "----------------------------------" << endl;
// Insert ordered products here //
for (int x = 1; x < 8; x++) {
if (orderedQty[x] != 0) {
cout <<      "       " << orderedQty[x] << " " << prod[orderedProd[x]];
cout << " " << orderedAmt[x] << endl;
TotalAmt = TotalAmt + orderedAmt[x];
}
}
cout << "----------------------------------" << endl;
cout << " TOTAL AMOUNT: P " << TotalAmt << endl;

cout << " Would you like to add other order? (y/n) ";
cin >> cho;
if (cho == 'y' ||cho == 'Y' ) {
system("cls");
main();
}
}
