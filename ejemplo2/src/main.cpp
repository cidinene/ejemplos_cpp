#include <iostream>
using namespace std;

#define  NUMERO_FILAS 5
#define  NUMERO_COLUMNAS 2




void imprimirResultados(float resultados[][NUMERO_COLUMNAS])
{

    float media = 0.0;
    for(int i= 0;i<NUMERO_FILAS;i++)
      {
          media = 0.0;
         for(int j=0;j<NUMERO_COLUMNAS;j++)
         {
             media =+ media + resultados[i][j];
         }
          cout << "El alumno '" << i << "' tiene de media :" << media/NUMERO_COLUMNAS <<endl;
      }

}

void imprimirResultados2(float * const resultados, int numFilas, int numColumnas)
{

    float media = 0.0;
    for(int i= 0;i<numFilas;i++)
      {
          media = 0.0;
         for(int j=0;j<numColumnas;j++)
         {
            float *aux = resultados + numColumnas*i +j;
            media =+ media + *aux;
         }
          cout << "El alumno '" << i << "' tiene de media :" << media/numColumnas <<endl;
      }

}


int main() {

    float resultadoAsignatura[NUMERO_FILAS][NUMERO_COLUMNAS] = {{5.5,7.2},{3.3,8.4},{7.5,9.0},{3.2,4.5},{8.6,9.7}} ;
    cout << "imprimirResultados(float resultados[NUMERO_FILAS][NUMERO_COLUMNAS])"<< endl;
    imprimirResultados(resultadoAsignatura);
    
    cout << "imprimirResultados2(float * const resultados, int numFilas, int numColumnas)"<< endl;
    imprimirResultados2( resultadoAsignatura[0], NUMERO_FILAS,NUMERO_COLUMNAS);

}