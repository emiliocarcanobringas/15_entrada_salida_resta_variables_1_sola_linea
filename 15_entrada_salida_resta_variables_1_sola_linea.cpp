/*Este programa lee la entrada de dos n�meros
y muestra en la salida el resultado de la resta de ambos
aqu� se muestran las variables en una sola l�nea*/

# include <iostream>//Librer�a est�ndar de entrada o salida de datos
# include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std; // Damos acceso al espacio de nombres

float numero1, numero2, restando; //Declaramos todas las variables en una sola l�nea

int main(){ //Inicio del programa

	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol

	cout<<"Escriba el n�mero para el minuendo"<<endl; //Solicitamos al usuario la entrada del minuendo
	cin>>numero1;//Almacenamos el minuendo
	cout<<"Escriba el n�mero para el sustraendo"<<endl;//Solicitamos al usuario la entrada del sustraendo
	cin>>numero2;//Almacenamos el sustraendo
	restando = numero1-numero2; //Realizamos la resta
	cout<<"El resultado de la resta es el siguiente n�mero:"<<endl; //Imprimimos en pantalla este mensaje
	cout<<restando; //Mostramos el resultado de la operaci�n
	
	return 0;//Fin del programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
