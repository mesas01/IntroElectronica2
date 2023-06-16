//Santiago Mesa Taller 3
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//se llaman las librerias a utilizar
int opciones;
int est = 100;
int col = 100;
int a = 0;
int b = 0;
//se declaran las variables globales 

void llenar_matriz (float matriz[est][col]);	
void modificar (float matriz[est][col]);	
float prom (float matriz[est][col]);
void mostrar (float matriz[est][col]);
void creador ();
//se llamn a las funciones "prototipo"
int main ()//programa principal
{
  float matriz[est][col];//matriz declarada de NxM dimensiones
  while (1)//bucle para que el programa no se cierre por si solo
    {
      printf("◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊\n\n");
      //decoracion 
      printf("HOLA!!!\nBienvenido al sistema de analisis de las estaciones meteorologicas de bogota.\n\n");
      //se muestra en pantalla un aviso de bienvenida 
      printf("◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊\n\n");
      //decoracion
      printf ("Tenemos las siguientes opciones:\n");//se crea un menú con las siguientes opciones
      printf ("1.Llena los datos de las estaciones.\t");//llenar matriz
      printf ("2.Modifica un valor de una Estacion\t\n");//modificar valores
      printf ("3.Promedia los valores de una estacion\t");//promediar valores de una estacion
      printf ("4.Mostrar la matriz de estaciones y valores\t\n");//mostrar matriz
      printf ("5.Quien realizo este programa?\t");//se muestra al creador
      printf ("        6.Cierra el programa\n\n");//cierra el programa
      printf ("Opcion: ");//pide al usuario ingresar una opcion
      scanf ("%d", &opciones);//lee el dato que se digito
      printf ("\n");//backspace 
      printf("◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊\n\n");
      //decoracion
      switch (opciones)//casos multiples que dependen de que haya escogido el usuario
	{
	case 1://caso 1
	  printf ("Ud. escogio: llenar datos.\n");//mostrar lo que escogio el usuario
	  llenar_matriz (matriz);//se llama la funcion llenar matriz
	  printf ("◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊\n\n");
	  break; //salto que permite salirse de este caso
	case 2:
	  printf ("Ud. escogio: modificar valores\n");//mostrar lo que se escogio
	  modificar (matriz);//llama a la funcion modificar
	  printf ("◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊\n\n");
	  break;//sale de la opcion
	case 3:
	  printf ("Ud. escogio: promediar una estacion.\n");
	  prom (matriz);// llama a la funcion promediar matriz
	  printf("◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊\n\n");
	  break;//salir 
	case 4:
	  printf ("Ud. escogio: Mostrar la matriz de estaciones y valores.\n");
	  mostrar (matriz);//llama a la funcion mostrar matriz
	  printf ("◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊\n\n");
	  break;//salir
	case 5:
	  printf ("Ud. escogio: Ver al creador\n");
	  creador ();//lama a la funcion que muestra al creador
	  printf ("◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊\n\n");
	  break;//salir
	case 6:
	  printf ("Ud. escogio: Cerrar programa\n");
	  printf ("Hasta pronto ;)");
	  return 0;//caso que cierra al programa sacandolo de todo
	  break;
	default:
	  printf ("Esta no es una Opcion valida, por favor escoja otra.\n\n");
	  break;
	  printf ("◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊◊\n\n");
      //opcion que muestra error si el usuario digita una opcion diferente a las propuestas
	}


    }
}

void llenar_matriz (float matriz[est][col])//funcion para llenar matriz
{
  int i, j;//contadores
  printf ("Cuantas estaciones meteorologicas hay?  ");//muestra una opcion al usuario pero se toma como filas
  scanf ("%d", &a);//lee el dato
  printf ("Cuantos datos por estacion hay?  ");//muestra una opcion al usuario pero se toma como columnas
  scanf ("%d", &b);//lee el dato

  for (i = 0; i < a; i++)//bucle for para recorrer la matriz en filas
    {
      for (j = 0; j < b; j++)//bucle for para recorrer la matriz en columnas
	{
	  printf ("Ingrese el valor para %d, %d :", i + 1, j + 1);//muestra el malor de la matriz a llenar +1 para comodidad del usuario
	  scanf ("%f", &matriz[i][j]);//lee ese valor pedido
	}
    }
}

void creador ()//funcion que muestra al creador
{
  printf
    ("El creador de esta suculenta obra es: SANTIAGO MESA... Un placer\n");//imprime al suclento creador
}

void modificar (float matriz[est][col])//funcion para modificar la matriz
{
  int i, j;// contadores

  printf ("Seleccione la estacion (fila) a modificar: ");//pide la estacion o fila a modificar
  scanf ("%d", &i);//lee esa opcion

  printf ("Seleccione Medida (columna) a modificar: ");//pide la medida de esa fila a modificar
  scanf ("%d", &j);//lee esa opcion 

  printf ("Ingrese nueva Medida (decimal): ");//pide nuevo valor que el usuario quiere modifiar
  scanf ("%f", &matriz[i - 1][j - 1]);//lee ese dato y lo ubica
}

void mostrar (float matriz[est][col]);//funcion para mostrar la matriz
{
  int i, j;//contadores

  for (i = 0; i < a; i++)//for para recorrer las filas de la matriz
    {
      for (j = 0; j < b; j++)// for para recorrer las columnas de la matriz 
	{
	  printf ("%.2f  ", matriz[i][j]);//imprime la matriz que se recorrio en el bucle
	}
      printf ("\n");//espacio
    }
}

float prom (float matriz[est][col])//funcion para promediar una matriz
{

  int i = 0;//contadores
  int j = 0;
  float valor = 0;
  float suma = 0;//valores flotantes que ayudan a las operaciones
  printf ("A que estacion desea realizarle un promedio?");//pide la fila 
  scanf ("%d", &i);//la lee

  for (j = 0; j < b; j++)//for para recorrer a la matriz
    {

      suma = suma + matriz[i - 1][j];//suma los valores de las filas
    }
  valor = suma / j;//hace la division de la suma de la fila
  printf ("El promedio de esta estacion -%d- es: %.2f \n", i, valor);//muestra el promedio de esa fila


}


