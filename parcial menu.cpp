#include <iostream>
using namespace std; 
void tablaDeMultiplicarInversa();
int ingresarNumero();
void anioBisiesto();
void fizzBuzz();
int main () {


   int opcion; 

   do {
   cout << "\n menu de opciones\n"; 
   cout << "1-año bisiesto?? \n"; 
   cout << "2-tabla de multiplicar inversa\n"; 
   cout << "3-fizzbuzz\n";  
    cout << "4- salir \n";  
   cout << "\ningrese la opcion donde quiere ir: "; 
   cin >> opcion; 
  switch  (opcion){
case 1 : {
anioBisiesto(); 
    break; 
}
case 2: {
tablaDeMultiplicarInversa();
    break; 
}
case 3: {
fizzBuzz(); 
    break; 
}
default: {

    break;
}




  }

  


   } while (opcion != 4);


    return 0; 

}


void tablaDeMultiplicarInversa() {
 int numero = ingresarNumero();

for (int i = 10; i > 0; --i) {
    
cout << numero << " x " << i << " = " << numero * i << endl;
}
return;
}

int ingresarNumero () {
int numero; 
cout << "ingrese un numero positivo: ";
cin >> numero; 
if (numero <= 0){
   cout << "error, ingrese un numero positivo";

} else {
 return numero;
}
}
void anioBisiesto() {
    int anio = ingresarNumero();
    
    if (anio % 4 == 0 & anio % 100 != 0 ){
        cout << "es un año bisiesto";
        
}else {
    cout << "no es un año bisiesto"; 
}
     
    return; 
}

void fizzBuzz(){


// nt 

    return; 
}