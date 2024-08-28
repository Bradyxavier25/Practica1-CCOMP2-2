#include <iostream> 
using namespace std;
int main()
{
	//declaramos que tenemos 4 variables de tipo entero 
	int x ; 
	int y ; 
	int z ; 
	int resultado;//esta alamcenara el resultado del producto
	cout << "escriba tres enteros: " << endl;
	cin >> x >> y >> z;
	resultado = x * y * z; 
	cout << "El producto es " << resultado << endl; 
	return 0;
} 