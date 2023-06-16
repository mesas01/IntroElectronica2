#include <stdio.h>
#include <conio.h>
//Programacion intro 2-2 Inventario de una jugueteria
//construido por: Santiago Mesa*/

int
main ()
{
// Se Definen las variables
  int matriz[5][3] = { {2, 5, 8}, {1, 4, 12}, {20, 2, 18}, {3, 5, 9}, {8, 4, 0} };	// Matriz de los productos totales
  int producto = 0;		// variable para ubicar las columnas de la matriz
  int cantidad = 0;		// variable cantidad del producto a comprar
  int aux = 0;			// variable que ayeda al control de la matriz
  int opcion = 0;		// Variable para seleccionadora en switchcase
  int compra = 0;		// Variable para que determina que producto se compra




  while (1)
    {				//valor repetidor para que el codigo se ejecute indeterminadamente
      //menu principal tabulado
      printf
	("\n **************************************************************");
      printf ("\n Bienvenido a la tienda de juguetes");
      printf ("\n\t Tenemos las siguientes opciones para escoger: ");
      printf ("\n\t 1.Vender productos.");
      printf ("\n\t 2. construir inventario.");
      printf ("\n\t 3.Mostrar el inventario disponible de productos.");
      printf ("\n\t 4.Terminar programa.");
      printf ("\n Por favor escoja una opcion: ");
      scanf ("%d", &opcion);	//Lee la opcion que se va a utilizar en el switch case

      switch (opcion)
	{			//posibles resultados para cada caso de la compra de productos
	case 1:
	  printf
	    ("\n para la venta nuestros productos estan organizados de la siguiente manera: ");
	  printf ("\n\t 1. Bebes (0-1) ano");
	  printf ("\n\t 2. Ninos pequeC1os (1-5) anos");
	  printf ("\n\t 3. Ninos (5-14) anos");
	  printf ("\n\t 4. Adolecentes (14-17) anos");
	  printf ("\n\t 5. Adultos (+18) anos");
	  printf ("\n Ingresar opcion a la cual se desea acceder: ");	//menu de edades tabulado
	  scanf ("%d", &compra);	//Lee la opcion de la fila en la matriz

	  if (compra == 1)
	    {			//caso en que la opcion sea 1
	      printf
		("\n usted escogio BEBES, nuestros productos son los siguientes: ");
	      printf ("\n\t 1. Carreola.");
	      printf ("\n\t 2. tetero. ");
	      printf ("\n\t 3. chupo.");
	      printf ("\n Por favor ingrese la opcion que desea: ");
	      scanf ("%d", &producto);	//Lee la columna y la primera fila de la matriz
	      printf ("\n Cuanta cantidad desea llevar?: ");	//se solicita la cantidad de producto
	      scanf ("%d", &cantidad);	//Lee la cantidad de productos a comprar y la guarda en "cantidad" (valor entero)
	      aux = matriz[compra - 1][producto - 1];	//*auxiliar que se usa solo para comparar en los "if" suvalor es el de la fila y columna que se haya ingresado (0,0)
	      if (cantidad > aux)
		{		// se compara entre la cantidad de productos pedidos y disponibles
		  printf ("\n Por el momento no tenemos dicha cantidad, tenemos: %d ", aux);	// condicion que limita al programa a solo vender una cantidad menor o igual a la que se encuentra en esa posicion de la matriz
		  //condicion que se le mustra al usuuario en caso de pedir un numero mayor al inventariado


		}
	      else
		{
		  printf ("\n COMPRA COMPLETADA EXITOSAMENTE!!!");	// en caso de ser menor, se completa la compra y se le resta esa cantidad a ese espacio de la matriz
		  matriz[compra - 1][producto - 1] =
		    matriz[compra - 1][producto - 1] - cantidad;
		}
	    }			//Se resta cantidad digitada por el cliente

	  if (compra == 2)
	    {			//caso que la opcion sea 2
	      //menu niC1os pequeC1os tabulado
	      printf
		("\n Usted escogio NINOS PEQUENOS, nuestros productos son los siguientes: ");
	      printf ("\n\t 1. Carro de carreras.");
	      printf ("\n\t 2. Lego Batman. ");
	      printf ("\n\t 3. Figura de accion.");
	      printf ("\n Por favor ingrese la opcion que desea: ");
	      scanf ("%d", &producto);	//Lee la columna y la fila de la matriz escogida
	      printf ("\n Cuanta cantidad desea llevar?: ");	//se solicita la cantidad de producto
	      scanf ("%d", &cantidad);	//cantidad solicitada por el cliente guardada en cantidad
	      aux = matriz[compra - 1][producto - 1];	// Se define aux como la posicion en la matriz que la da la compra respectivamente
	      if (cantidad > aux)
		{		// se compara las unidades disponibles con las unidades solicitadas
		  printf ("\n Por el momento no tenemos dicha cantidad, tenemos: %d ", aux);	//se muestra la cantidad disponible en inventario
		}
	      else
		{
		  printf ("\n COMPRA COMPLETADA EXITOSAMENTE!!!");	// Si la cantidad que pide el cliente es mayor no se vende y lo regresa al inicio del programa
		  matriz[compra - 1][producto - 1] =
		    matriz[compra - 1][producto - 1] - cantidad;
		}
	    }			//Se resta cantidad solicitada en esa posicion de la matriz



	  if (compra == 3)
	    {			//caso que la opcion sea 3
	      //menu tabulado niC1os
	      printf
		("\n Usted escogio NINOS, nuestros productos son los siguientes: ");
	      printf ("\n\t 1. Pelota.");
	      printf ("\n\t 2. Serpientes y escaleras. ");
	      printf ("\n\t 3. Rompecabezas.");
	      printf ("\n Por favor ingrese la opcion que desea: ");
	      scanf ("%d", &producto);	//Lee la cantidad de productos a comprar
	      printf ("\n Cuanta cantidad desea a llevar?: ");	//se solicita la cantidad de producto
	      scanf ("%d", &cantidad);	//guarda la cantidad que el cliente desea en "cantidad"
	      aux = matriz[compra - 1][producto - 1];	//Se define aux como la posicion en la matriz que la da la compra respectivamente

	      if (cantidad > aux)
		{		// se compara las unidades disponibles con las unidades solicitadas
		  printf ("\n Por el momento no tenemos dicha cantidad, tenemos: %d ", aux);	//muestra al cliente la cantidad de producto disponible
		}
	      else
		{
		  printf ("\n COMPRA COMPLETADA EXITOSAMENTE!!!");	// Si la cantidad que pide el cliente es mayor no se vende y lo regresa al inicio del programa
		  matriz[compra - 1][producto - 1] =
		    matriz[compra - 1][producto - 1] - cantidad;
		}
	    }			//Se resta cantidad solicitada en esa posicion de matriz



	  if (compra == 4)
	    {			//caso en que la opcion sea 4
	      //menu tabulado adolecentes
	      printf
		("\n Usted escogio ADOLECENTES, nuestros productos son los siguientes: ");
	      printf ("\n\t 1. Nintendo Switch.");
	      printf ("\n\t 2. Skate board. ");
	      printf ("\n\t 3. Diabolo.");
	      printf ("\n Por favor ingrese la opcion que desea: ");
	      scanf ("%d", &producto);	//se lee que producto se quiere y se guarda en producto
	      printf ("\n Cuanta cantidad desea a llevar?: ");	//se solicita la cantidad de producto
	      scanf ("%d", &cantidad);	//Lee la cantidad de producto a comprar
	      aux = matriz[compra - 1][producto - 1];	//Se define aux como la posicion en la matriz que la da la compra respectivamente

	      if (cantidad > aux)
		{		// se compara las unidades disponibles con las unidades solicitadas
		  printf ("\n Por el momento no tenemos dicha cantidad, tenemos: %d ", aux);	//muestra al cliente la cantidad de producto disponible
		}
	      else
		{
		  printf ("\n COMPRA COMPLETADA EXITOSAMENTE!!!");	// Si la cantidad que pide el cliente es mayor no se vende y lo regresa al inicio del programa
		  matriz[compra - 1][producto - 1] =
		    matriz[compra - 1][producto - 1] - cantidad;
		}
	    }			//Se resta cantidad solicitada en esa posicion de matriz



	  if (compra == 5)
	    {			//caso en que la opcion sea 4
	      //menu tabulado adultos
	      printf
		("\n Usted escogio ADULTOS, nuestros productos son los siguientes: ");
	      printf ("\n 1. Tanque sovietico TH500 :3.");
	      printf ("\n 2. Set de Poker.");
	      printf ("\n 3. Play Station 5.");
	      printf ("\n Por favor ingrese la opcion que desea:");	//se solicita la cantidad de producto
	      scanf ("%d", &producto);	//se lee que producto se quiere y se guarda en producto
	      printf ("\n Cuanta cantidad desea a llevar?: ");	//se solicita la cantidad de producto
	      scanf ("%d", &cantidad);	//Lee la cantidad de producto
	      aux = matriz[compra - 1][producto - 1];	//Se define aux como la posicion en la matriz que la da la compra respectivamente

	      if (cantidad > aux)
		{		// se compara las unidades disponibles con las unidades solicitadas
		  printf ("\n Por el momento no tenemos dicha cantidad, tenemos: %d ", aux);	//muestra al cliente la cantidad de producto disponible
		}
	      else
		{
		  printf ("\n COMPRA COMPLETADA EXITOSAMENTE!!!");	// Si la cantidad que pide el cliente es mayor no se vende y lo regresa al inicio del programa
		  matriz[compra - 1][producto - 1] =
		    matriz[compra - 1][producto - 1] - cantidad;
		}
	    }			//Se resta cantidad solicitada en esa posicion de matriz
//si la opcion colocada es mayor a las opciones disponibles este te regresa al menu principal
	  break;

	case 2:		//caso en el que el menu principal fue escogida la opcion 2
	  printf
	    ("\n El inventario esta distribuido de la siguiente manera:\n ");
	  printf ("\t 1.[0,0] Carreola");
	  printf ("\n\t 2.[0,1] tetero");
	  printf ("\n\t 3.[0,2] Chupo");
	  printf ("\n");
	  printf ("\n\t 4.[1,0] Carro de carreras");
	  printf ("\n\t 5.[1,1] lego batman");
	  printf ("\n\t 6.[1,2] figura de accion");
	  printf ("\n");
	  printf ("\n\t 7.[2,0] Pelota");
	  printf ("\n\t 8.[2,1] Serpientes y escaleras");
	  printf ("\n\t 9.[2,2] Rompecabezas");
	  printf ("\n");
	  printf ("\n\t 10.[3,0] Nintendo switch");
	  printf ("\n\t 11.[3,1] Skate board");
	  printf ("\n\t 12.[3,2] Diabolo");
	  printf ("\n");
	  printf ("\n\t 13.[4,0] Tanque Sovietico TH500");
	  printf ("\n\t 14.[4,1] Set de poker");
	  printf ("\n\t 15.[4,2] Play station 5");
//inventario de la jugueteria y sus posiciones respectivas para que el cliente las pueda cambiar facilmente


	  for (compra = 0; compra < 5; compra++)
	    {			//esta variable se utiliza para recorrer y leer las filas de la matriz
	      for (producto = 0; producto < 3; producto++)
		{		//esta variable funciona para llenar valores de columna
		  printf ("\n posicion [%d][%d]: ", compra, producto);	//imprime en pantalla la posicion del producto que se va a modificar y cada ve que se ingrese un valor pasa al siguiente.
		  scanf ("%d", &matriz[compra][producto]);	//lee y guarda el valor en la posicion dada

		}
	    }


	  break;		//sale de la opcion 2

	case 3:		//caso 3 del menu inicial
// se desea mostrar el inventario actual
	  printf ("\n");	//salto de linea

	  for (compra = 0; compra < 5; compra++)
	    {			////esta variable se utiliza para recorrer y leer las filas de la matriz
	      for (producto = 0; producto < 3; producto++)
		{		//este for sirve para recorrer las columnas de la matriz
		  printf ("\t %d ", matriz[compra][producto]);	//se imprime la matriz y el numero que ocupa x casilla
		}
	      printf ("\n");	//salto de linea
	    }
	  break;		//salir de esa opcion

	case 4:		//caso4
	  return 0;		//cierra el programa indicando a la maquina que todo funciono correctamente
	  break;

	default:
	  printf ("\n Eliga una opcion valida");	//en caso de que no escoja una de las cuatro opcones mustra el error y lo devuelve al menu principal
	  break;

	}
    }
}
