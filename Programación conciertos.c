#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  int i = 1;
  int personas = 0;
  int edad = 0;
  int concierto = 0;
  int bandera = 0;
  int precio_1 = 0;
  int precio_2 = 0;
  int precio_3 = 0;
  int precio_4 = 0;
  int precio_5 = 0;
  float duracion_1 = 120.0;
  float duracion_2 = 90.0;
  float duracion_3 = 100.0;
  float duracion_4 = 115.0;
  float duracion_5 = 120.0;

  printf ("HOLA!!! \nBienvenido al Movistar Arena.");
  printf ("\ncuantas personas hay en la fila?\n\n");
  scanf ("%d", &personas);

  while (personas > 0)
    {


      printf
	("\nlos conciertos y las restricciones para este mes son los siguientes");
      printf ("\n opcion 1:  Backstreet Boys - entre 15 y 75 anos");
      printf ("\n opcion 2:  Lauren Digle - para todo publico");
      printf ("\n opcion 3:  Pimpinela - Mayores de 7 anos");
      printf ("\n opcion 4:  KISS - entre 17 y 60 anos");
      printf ("\n opcion 5:  Alejandro Sanz - mayores de 10 anos");
      printf ("\n \n Por favor ingrese su edad:");
      scanf ("%d", &edad);
      if (edad < 7 || edad >= 75)
	{

	  printf ("\n Usted puede ingresar al concierto 2");
	  printf ("\n su concierto dura %f minutos", duracion_2);
	  printf ("\n costo: 199000 pesos");
	  printf ("\n por favor deposite 199000 pesos:");
	  printf ("\n");
	  scanf ("%d", &precio_2);
	  if (precio_2 < 199000 || precio_2 > 199000)
	    {
	      printf
		("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
	    }
	  else
	    {
	      printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
	      personas = personas - 1;
	    }

	}
      else if (edad >= 7 && edad < 10)
	{
	  printf ("\n Usted puede ingresar al concierto 2 y 3");
	  printf ("\n escoja una opcion por favor");
	  scanf ("%d", &concierto);
	  if (concierto > 1 && concierto < 3)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_2);
	      printf ("\n costo: 199000 pesos");
	      printf ("\n por favor deposite 199000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_2);
	      if (precio_2 < 199000 || precio_2 > 199000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 2 && concierto < 4)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_3);
	      printf ("\n costo: 290000 pesos");
	      printf ("\n por favor deposite 290000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_3);
	      if (precio_3 < 290000 || precio_3 > 290000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 3 || concierto < 2)
	    {
	      printf
		("\n este no es un concierto valido para su edad, por favor elija otro\n\n");
	    }
	}
      else if (edad >= 10 && edad < 15)
	{
	  printf ("\n Usted puede ingresar al concierto 2, 3 y 5");
	  printf ("\n escoja una opcion por favor");
	  scanf ("%d", &concierto);
	  if (concierto > 1 && concierto < 3)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_2);
	      printf ("\n costo: 199000 pesos");
	      printf ("\n por favor deposite 199000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_2);
	      if (precio_2 < 199000 || precio_2 > 199000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 2 && concierto < 4)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_3);
	      printf ("\n costo: 290000 pesos");
	      printf ("\n por favor deposite 290000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_3);
	      if (precio_3 < 290000 || precio_3 > 290000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;
		}
	    }
	  else if (concierto > 4 && concierto < 6)
	    {

	      printf ("\n su concierto dura %f minutos", duracion_5);
	      printf ("\n costo: 605000 pesos");
	      printf ("\n por favor deposite 605000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_5);
	      if (precio_5 < 605000 || precio_5 > 605000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;
		}
	    }
	  else if (concierto < 2 || (concierto > 3 && concierto < 5)
		   || concierto > 5)
	    {
	      printf
		("\n este no es un concierto valido para su edad, por favor elija otro\n\n");
	    }

	}
      else if (edad >= 15 && edad < 17)
	{
	  printf ("\n Usted puede ingresar al concierto 1, 2 , 3  y 5 ");
	  printf ("\n escoja una opcion por favor");
	  scanf ("%d", &concierto);
	  if (concierto > 1 && concierto < 3)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_2);
	      printf ("\n costo: 199000 pesos");
	      printf ("\n por favor deposite 199000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_2);
	      if (precio_2 < 199000 || precio_2 > 199000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 0 && concierto < 2)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_1);
	      printf ("\n costo: 550000 pesos");
	      printf ("\n por favor deposite 550000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_1);
	      if (precio_1 < 550000 || precio_1 > 550000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 2 && concierto < 4)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_3);
	      printf ("\n costo: 290000 pesos");
	      printf ("\n por favor deposite 290000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_3);
	      if (precio_3 < 290000 || precio_3 > 290000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 4 && concierto < 6)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_5);
	      printf ("\n costo: 699000 pesos");
	      printf ("\n por favor deposite 699000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_5);
	      if (precio_5 < 699000 || precio_5 > 699000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 5 || (concierto > 3 && concierto < 5))
	    {
	      printf
		("\n este no es un concierto valido para su edad, por favor elija otro\n\n");
	    }


	}
      else if (edad >= 60 && edad < 75)
	{
	  printf ("\n Usted puede ingresar al concierto 1, 2 , 3  y 5 ");
	  printf ("\n escoja una opcion por favor");
	  scanf ("%d", &concierto);
	  if (concierto > 1 && concierto < 3)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_2);
	      printf ("\n costo: 199000 pesos");
	      printf ("\n por favor deposite 199000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_2);
	      if (precio_2 < 199000 || precio_2 > 199000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 0 && concierto < 2)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_1);
	      printf ("\n costo: 550000 pesos");
	      printf ("\n por favor deposite 550000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_1);
	      if (precio_1 < 550000 || precio_1 > 550000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 2 && concierto < 4)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_3);
	      printf ("\n costo: 290000 pesos");
	      printf ("\n por favor deposite 290000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_3);
	      if (precio_3 < 290000 || precio_3 > 290000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 4 && concierto < 6)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_5);
	      printf ("\n costo: 605000 pesos");
	      printf ("\n por favor deposite 605000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_5);
	      if (precio_5 < 605000 || precio_5 > 605000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 5 || (concierto > 3 && concierto < 5))
	    {
	      printf
		("\n este no es un concierto valido para su edad, por favor elija otro\n\n");
	    }
	}
      else if (edad >= 17 && edad < 60)
	{
	  printf ("\n Usted puede ingresar al concierto 1 , 2 , 3 , 4 y 5 ");
	  printf ("\n escoja una opcion por favor");
	  scanf ("%d", &concierto);
	  if (concierto > 1 && concierto < 3)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_2);
	      printf ("\n costo: 199000 pesos");
	      printf ("\n por favor deposite 199000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_2);
	      if (precio_2 < 199000 || precio_2 > 199000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 0 && concierto < 2)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_1);
	      printf ("\n costo: 550000 pesos");
	      printf ("\n por favor deposite 550000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_1);
	      if (precio_1 < 550000 || precio_1 > 550000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 2 && concierto < 4)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_3);
	      printf ("\n costo: 290000 pesos");
	      printf ("\n por favor deposite 290000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_3);
	      if (precio_3 < 290000 || precio_3 > 290000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 4 && concierto < 6)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_5);
	      printf ("\n costo: 605000 pesos");
	      printf ("\n por favor deposite 605000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_5);
	      if (precio_5 < 605000 || precio_5 > 605000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }
	  else if (concierto > 5)
	    {
	      printf
		("\n este concierto no existe, por favor elija otro\n\n");
	    }
	  else if (concierto > 3 && concierto < 5)
	    {
	      printf ("\n su concierto dura %f minutos", duracion_4);
	      printf ("\n costo: 699000 pesos");
	      printf ("\n por favor deposite 699000 pesos:");
	      printf ("\n");
	      scanf ("%d", &precio_4);
	      if (precio_4 < 699000 || precio_4 > 699000)
		{
		  printf
		    ("\n EL MONTO INGRESADO NO ES VALIDO, INGRESE UN MONTO VALIDO \n");
		}
	      else
		{
		  printf ("\n BIENVENIDO!!! DISFRUTE LA FUNCION\n\n");
		  personas = personas - 1;

		}
	    }

	}


    }
  return 0;

}
