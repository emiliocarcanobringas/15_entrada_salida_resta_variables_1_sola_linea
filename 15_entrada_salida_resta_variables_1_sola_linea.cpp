/*Este programa lee la entrada de dos números
y muestra en la salida el resultado de la resta de ambos
aquí se muestran las variables en una sola línea*/

# include <iostream>//Librería estándar de entrada o salida de datos
# include <locale.h> //Librería estándar de localización (regionalización)

using namespace std; // Damos acceso al espacio de nombres

float numero1, numero2, restando; //Declaramos todas las variables en una sola línea

int main(){ //Inicio del programa

	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y colocamos el valor para manejo de caracteres, le asignamos el idioma español

	cout<<"Escriba el número para el minuendo"<<endl; //Solicitamos al usuario la entrada del minuendo
	cin>>numero1;//Almacenamos el minuendo
	cout<<"Escriba el número para el sustraendo"<<endl;//Solicitamos al usuario la entrada del sustraendo
	cin>>numero2;//Almacenamos el sustraendo
	restando = numero1-numero2; //Realizamos la resta
	cout<<"El resultado de la resta es el siguiente número:"<<endl; //Imprimimos en pantalla este mensaje
	cout<<restando; //Mostramos el resultado de la operación
	
	return 0;//Fin del programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
