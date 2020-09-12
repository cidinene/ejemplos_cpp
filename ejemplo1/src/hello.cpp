// Directivas
#include <iostream>


using namespace std;

// definición macros
#define  DEFAULT_A 7
#define  DEFAULT_B 19

// función main  : parámetros
// int argc : numero de cadenas de caracteres recibidos a la entrada
// char ** argv : cadenas de caracteres introducios para ejecutar la aplicación
// solo debe haber una función main en el programa que indica el punto de entrada 
int main(int argc, char** argv) 
{
    // definción de primitivas enteros 
    int a ,b, x;
    // estructura if -else
    if (argc>1 && argc<4)
   {
      // operador ternario  (condicion)?  valor1 : valor2
     a = argv[argc-2] != NULL ?  atoi(argv[argc-2]) : DEFAULT_A;
     b = argv[argc-1] != NULL ?  atoi(argv[argc-1]) : DEFAULT_B;
   }
   else
   {
       a = DEFAULT_A;
       b = DEFAULT_B;
   } 

    x = a +b;
    cout << "Suma de  'alumnos asistentes' : " << a << "' y de 'alumnos no asistentes' :" << b << "' \n Resultado alumnos del curso= "<< x  <<endl;
    return 0;
}


