#include <iostream> 
using namespace std;
int main(){
int division, numerol, numero2; 
cout << "Ingrese el primer numero: "; 
cin >> numerol; 
cout << "Ingrese el segundo numero: "; 
cin >> numero2; 
if (numerol == 0) {
cout << "Error El primer numero es cero"; 
} else if (numero2 == 0) {
cout << "Error El segundo numero es cero"; 
} else {
division = numerol / numero2; 
cout << "La division es: " << division;
}
}
