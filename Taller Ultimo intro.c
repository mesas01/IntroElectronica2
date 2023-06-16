/*Santiago Mesa ----> taller 4 de programacion*/
/*Introduccion a la ingenieria 2 - pontificia universidad javeriana 7/05/2020*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void error();/*funcion que muestra cuando haya un error el las opciones que digite el usuario*/
void salir();/*funcion para salir del programa del cine*/
void ganancias();
void menu_admin();/*funcion que muestra el menu del administrador*/
void menu_clinte();/*funcion que muestra el menu del cliente*/
void ver_asientos();/*funcion que muestra las matrices donde estan los asientos*/
void menu_principal();/*funcion que muestra el menu principal para todos*/
void comprar_entrada();/*funcion para comprar las entradas*/
void opciones_usuario();/*funcion que despliega las opciones que tiene el usuario para interactuar con el cine*/
int *apu;/*apuntador que se va a usar para las operaciones con el vector de general*/
int *apu2;/*apuntador que se va a usar para las operaciones con el vector de preferencial*/
int *apu3;
int clave = 1234;/*clave previamente definida para ingresar como administrador*/
int general [25] = {14,6,5,3,14,8,15,6,5,1,15,15,18,0,9,15,1,0,9,20,14,3,6,3,4};/*matriz transformada a vector de general*/
int opciones;/*variable que guarda que opcion decide el usuario para se cliente, administrador o salir*/
int preferencial [25] = {0,9,9,3,13,4,11,14,12,6,14,4,2,5,13,10,15,7,8,1,12,7,11,10,8};/*matriz transformada a vector de preferencial*/
int precio_general = 8000;/*variable de precio de las boletas general*/
int precio_preferencial = 12000;/*variable de precio de las boletas preferencial*/
char nombre[50];/*variable que guarda el nombre del cliente*/
int suma;
int suma2;
int suma_total;

int posicion_vector;/*variable perteneciente a la operacion ((cine_matriz+sala_matriz)-1) de la transformacion de cine matriz y sala matriz*/

int main ()/*funcion principal donde se ejecuta todo el codigo y sus funciones*/ //listo
{
    while (1)/*comando que hace bucle el programa principal*/
    {
        menu_principal();/*funcion del menu principal (todos los usuarios) llamada al codigo principal para ejecutarse*/
        switch (opciones)/*comando que muestra las opciones disponibles y un caso de error en caso de que ocurra*/
        {
            case 1:/*1er caso del programa, en caso de que el usuario escoja ---------> cliente*/
                menu_cliente();/*funcion del menu de los clientes llamada para ejecutarse en el codigo principal*/
                opciones_usuario();/*funcion del menu de los clientes para que escojan que accion desean relizar, si ver, comprar o salir*/
                break;/*comando para que cuando finalice el caso X se salga de bucle*/

            case 2:/*2do caso del programa, en caso de que el usuario escoja ---------> administrador*/
                menu_admin();/*funcion del munu del administrador llamada para ejecutarse*/
                break;/*comando para que cuando finalice el caso X se salga de bucle*/

            case 3:/*3er caso del programa, en caso de que el usuario escoja ---------> salir del programa*/
                salir();/*funcion llamada para salirse del programa*/
                return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
                break;/*comando para que cuando finalice el caso X se salga de bucle*/

            default:/*ultimo caso del programa, en caso de que el usuario escoja ---------> una opcion incorrecta*/
                error();/*funcion llamada para mostrar que hay un error en la opcion del usuario*/
                break;/*comando para que cuando finalice el caso X se salga de bucle*/
        }
    }
}
void menu_principal()/*menu general para todo público*/ //listo
{
 printf ("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
 printf ("Hola!!! Bienvenid@ a CINE MESA :P \nEs un placer atenderte el dia de hoy \n\n");/*bienvenida en pantalla al cine*/
 printf ("Por favor Seleccione una opcion: \n\n 1. Cliente \n\n 2. Administrador \n\n 3. Salir de la pagina \n\nOpcion:  ");/*pide al usuario escoger si es cliente administrador o si desea salir*/
 scanf  ("%d", &opciones);/*escanea la opcion numerica que digita el cliente*/
 printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
}
void menu_cliente()/*menu para el cliente*/ //listo
{
    printf("Ud. escogio: Cliente...\n\n");/*imprime en pantalla la opcion (1) que escogio el usuario*/
    printf("Por favor digite su nombre:  ");/*imprime en pantalla al cliente que digite su nombre*/
    fflush(stdin);/*borra la posible basura que hay para que no haya errores en la obtencion del nombre*/
    gets(nombre);/*obtiene el nombre de la persona y lo guarda en la variable nombre*/
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
    printf("\n\nBienvenid@: %s!!!   Es un placer atenderte.\n\n",nombre);/*despliega en pantalla un mensaje de bienvenida con el nombre del usuario*/
    printf("Tenemos los siguientes cines con las siguientes salas y sus siguientes funciones:\n\n");/*despliega en pantalla las salas y los cines disponibles con sus respectivas peliculas*/
    printf("\t\t\t\tSala 1\t\tSala 2\t\tSala 3\t\tSala 4\t\tSala 5\n\n");/*despliega en pantalla que salas estan disponibles y que se sincronicen con los cines y sus peliculas*/
    printf("Cine 1: Unicentro\t\tT1-2D\t\tT1-3D\t\tT1-IMAX\t\tT1-DOB\t\tT1-INT\n\n");/*despliega en pantalla el cine 1 y sus peliculas*/
    printf("Cine 2: Santa fe\t\tT2-2D\t\tT2-3D\t\tT2-IMAX\t\tT2-DOB\t\tT2-INT\n\n");/*despliega en pantalla el cine 2 y sus peliculas*/
    printf("Cine 3: Colina  \t\tT3-2D\t\tT3-3D\t\tT3-IMAX\t\tT3-DOB\t\tT3-INT\n\n");/*despliega en pantalla el cine 3 y sus peliculas*/
    printf("Cine 4: Fontanar\t\tT4-2D\t\tT4-3D\t\tT4-IMAX\t\tT4-DOB\t\tT4-INT\n\n");/*despliega en pantalla el cine 4 y sus peliculas*/
    printf("Cine 5: Titan plaza\t\tT5-2D\t\tT5-3D\t\tT5-IMAX\t\tT5-DOB\t\tT5-INT\n\n");/*despliega en pantalla el cine 5 y sus peliculas*/
    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
}
void error()/*Error si el usuario escoge una opcion diferente a las disponibles*/ //listo
{
    printf ("\n\nEsta no es una opcion valida, por favor escoja otra...\n");/*imprime en pantalla que el usuario escogio una opcion erronea*/
}
void salir()/*opcion para cerrar el programa*/ //listo
{
    printf("\n Gracias por eligir a CINE MESA :P, vuelva pronto\n ");/*imprime en pantalla un mensaje de despedida*/
    printf("Cerrando programa......\n\n");/*imprime en pantalla que se esta cerrando el programa*/
    getch();/*comando que pausa el programa hasta que se teclee algo y este siga, simulando como si el programa estuviera cargando*/
}
void opciones_usuario()/*opciones para que el cliente vea, compre o salga*/ //listo
{

    int calidad;/*variable que guarda la opcion sobre que calidad quiere el usuario*/
    int opcionesc;/*variable que guarda que opcion quiere el cliente sobre ver, comprar o salir*/
    while(1)/*comando que hace bucle a la funcion*/
    {
        printf("\n\nQue desea hacer?\n\n");/*imprime en pantalla una pregunta para que el cliente escoja una opcion*/
        printf(" 1. Ver Cantidad de sillas vendidas por sala\n\n 2. Comprar boletas\n\n 3. Volver al menu principal\n\n");/*imprime en pantalla las opciones disponibles*/
        printf("\nOpcion: ");/*imprime en pantalla el lugar en donde el cliente digitara su opcion*/
        scanf("%d",&opcionesc);/*guarda en la variable la opcion que escogio el usuario*/
        printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");/*decoracion*/
        switch(opcionesc)/*comando que muestra las opciones disponibles y un caso de error en caso de que ocurra*/
        {
            case 1:/*1er caso de la funcion, en caso de que el usuario escoja ---------> ver asientos*/

                ver_asientos();/*se llama a la funcion para mostrar los asientos disponibles*/

            break;/*comando para que cuando finalice el caso X se salga de bucle*/

            case 2:/*2do caso de la funcion, en caso de que el usuario escoja ---------> comprar asientos*/

                comprar_entrada();/*se llama a la funcion para comprar asientos*/
                printf ("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/

                break;/*comando para que cuando finalice el caso X se salga de bucle*/

            case 3:/*3er caso de la funcion, en caso de que el usuario escoja ---------> salir al menu principal*/

                printf("\n%s\nEscogiste volver al menu principal\n\n",nombre);/*imprime en pantalla que el usuario deseeo volver al menu principal*/

                return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/

                break;/*comando para que cuando finalice el caso X se salga de bucle*/

            default:/*ultimo caso del programa, en caso de que el usuario escoja ---------> una opcion incorrecta*/
                error();/*funcion de error llamada en el void*/
                printf ("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
                break;/*comando para que cuando finalice el caso X se salga de bucle*/
  }
}
}
void ver_asientos()/*opcion para mostrar los asientos de cada sala*/ //listo
{
    int calidad;/*variable que guarda que calidad desea el usuaro, si general o preferencial*/
    int i;/*variable para recorrer las posiciones del vector para despues desplegarlas como matriz en general*/
    int j;/*variable para recorrer las posiciones del vector para despues desplegarlas como matriz en preferencial*/
    int *apu=&general;/*apuntador para recorrer el vector de general*/
    int *apu2=&preferencial;/*apuntador para recorrer el vector de preferencial*/
    printf("\nEscogiste la opcion 1");/*imprime en pantalla al usuario que opcion escogio*/
    printf("\nDeseas ver: ");/*imprime en pantalla al usuario que desea hacer*/
    printf("\n\n 1. Los asientos en General.\n\n 2. Los asientos en Preferencial.\n\nopcion: ");/*imprime en pantalla las opciones*/
    scanf("%d", &calidad);/*escana la opcion que escogio el usuario*/
    printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/

    if (calidad == 1)/*en caso de que el usuario haya escogido general se ejecutaran los siguientes comandos*/
        {
            /*imprime en pantalla que calidad escogio el cliente y cuanto es la capacidad maxima de la sala*/
            printf("\n\nEscogiste ver las entradas de categoria general\nNota: los valores mostrados son las sillas ya ocupadas (max: 20)\n\n");
            printf("        \t\t\tSala 1\t\tSala 2\t\tSala 3\t\tSala 4\t\tSala 5\n\n");/*imprime en pantalla las salas sincronizadas con los cines*/
            for(i=0;i<25;i++)/*comando for para que recorra el vector y ejecute los comandos siguientes*/
            {
                if(i==0)/*para cuando el contador este en 0 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                        printf("Cine 1: Unicentro  ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                        printf("    ");/*decoracion*/
                    }
                 else if(i==5)/*para cuando el contador este en 5 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\nCine 2: Santa Fe   ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(i==10)/*para cuando el contador este en 10 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\nCine 3: Colina     ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(i==15)/*para cuando el contador este en 15 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\nCine 4: Fontanar   ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(i==20)/*para cuando el contador este en 20 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\nCine 5: Titan Plaza");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                printf("\t         %d",*apu);/*imprime en pantalla con el apuntador el vslor que se encuentra en el*/
                apu++;/*apenas se acaba esta accion se aumentara el contador del apuntador para seguir con las siguientes posiciones*/
            }

        printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
        }
    else if (calidad == 2)/*en caso de que el usuario haya escogido preferencial se ejecutaran los siguientes comandos*/
        {
            /*imprime en pantalla que calidad escogio el cliente y cuanto es la capacidad maxima de la sala*/
            printf("\n\nEscogiste ver las entradas de categoria preferencial\nNota: los valores mostrados son las sillas ya ocupadas (max: 15)\n\n");
            printf("        \t\t\tSala 1\t\tSala 2\t\tSala 3\t\tSala 4\t\tSala 5\n\n");/*imprime en pantalla las salas sincronizadas con los cines*/
            for(j=0;j<25;j++)/*comando for para que recorra el vector y ejecute los comandos siguientes*/
            {
                if(j==0)/*para cuando el contador este en 0 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                        printf("\nCine 1: Unicentro  ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                        printf("    ");/*decoracion*/
                    }
                 else if(j==5)/*para cuando el contador este en 5 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\nCine 2: Santa Fe   ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(j==10)/*para cuando el contador este en 10 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\nCine 3: Colina     ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(j==15)/*para cuando el contador este en 15 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\nCine 4: Fontanar   ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(j==20)/*para cuando el contador este en 20 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\nCine 5: Titan Plaza");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                printf("\t         %d",*apu2);/*imprime en pantalla con el apuntador el vslor que se encuentra en el*/
                apu2++;/*apenas se acaba esta accion se aumentara el contador del apuntador para seguir con las siguientes posiciones*/
         }
         printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/

        }
    else/*en caso contrario de que el cliente escja una opcion erronea se deplegara un error y lo devolvera*/
    {
      printf ("\n esta no es una opcion valida, por favor escoja otra...\n");/*imprime en pantalla que hay un error*/
    }
}
void menu_admin()/*menu del administrador*/ //listo
{
    int intentos=0;/*variable para contar los intentos que el usuario haya hecho*/
    int clave2=0;/*variable que guarda la clave que digito el usuario*/
    int opcionA;/*variable que guarda la opcion que haya escogido el administrador*/

  printf("Bienvenido, Ud. escogio la opcion administrador\n");/*imprime en pantalla la opcion que escogio el usuario*/
    do/*serire de comandos que realizara el programa minimo una vez con una opcion extra cuando en el while se sobrepasen los intentos*/
        {
            printf("\n\nPor favor Ingrese su clave:  ");/*imprime al usuario que ingrese la clave del administrador*/
            scanf ("%d",&clave2);/*escanea lo que digito el usuario y lo guarda en clave 2 para posteriormente compararla con la clave previamente definida*/
            printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
    if(clave2==clave)/*en caso de que la clave digitada sea igual a la definida se dejara acceder al administrador*/
    {
    while(1)/*comando para que se repita el menu hasta que se desee salir*/
    {
        printf("\n\nBienvenido, que desea hacer?\n");/*imprime en pantalla menu de bienvenida*/
        printf("\n1. Mostrar reporte de ganancias.\n\n2. Cambiar clave\n\n3. Volver al menu principal\n");/*muestra en pantalla las opciones disponibles*/
        printf("\nOpcion: ");/*imprime el lugar en donde se digitara la opcion*/
        scanf("%d", &opcionA);/*guarda la opcion que digito el administrador*/
        printf ("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
        switch(opcionA)/*casos posibles de la opcion que el administrador escogio*/
        {
            case 1:/*1er caso del programa, en caso de que el administrador escoja ---------> ver ganancias*/

                ganancias();
                return 0;

            break;/*comando para que cuando finalice el caso X se salga de bucle*/

            case 2:/*2do caso del programa, en caso de que el administrador escoja ---------> cambiar clave*/

                printf("\n\nUd. ha escogido cambiar clave");/*imprime en pantalla la opcion de cambiar clave*/
                printf("\nPor favor digite su nueva clave:   ");/*pide en pantalla la nueva contraseña*/
                scanf("%d", &clave);/*lee la nueva contraseña*/
                printf("\nSu clave fue cambiada con exito\n\n");/*imprime en en pantalla que la clave fue cambiada con exito*/
                return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/

            break;/*comando para que cuando finalice el caso X se salga de bucle*/

            case 3:/*3er caso del programa, en caso de que el administrador escoja ---------> salir*/

                printf("\n\nUd. ha escogido salir, vuelva pronto.\n\n");/*imprime en pantalla que se esta saliendo del menu de administrador*/
                return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/

            break;/*comando para que cuando finalice el caso X se salga de bucle*/

            default:/*ultimo caso del programa, en caso de que el usuario escoja ---------> una opcion incorrecta*/

                error();/*imprime en pantalla que hubo un error en la seleccion de las opciones*/
                printf ("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/

            break;/*comando para que cuando finalice el caso X se salga de bucle*/
        }

    }
    }
    else/*caso contrario en que la contraseña sea incorrecta*/
        {
            printf("\n\nClave incorrecta\n\n");/*imprime en pantalla que hubo un error en el ingreso de la contraseña*/
            intentos++;/*suma de intentos cada vez que la contraseña sea incorrecta*/
        }
    }while(intentos<3);/*cuando el usuario sobrepase el numero de intentos este lo sacara del perfil de administrador*/
printf("Ud. sobrepaso el nomero maximo de intentos\n");/*imprime en pantalla error cuando se sobrepasen 3 intentos incorrectos*/
}
void comprar_entrada()/*comprar entrada de general o preferencial e imprimir recibo*/ //listo
{

int cine;/*cine al cual el usuario desea entrar*/
int sala;/*sala a la cual el usuario desea entrar*/
int opcion;/*opcion que el usuario tome si va a entrar a general o preferencial*/
int cine_matriz;/*variable que guarda el valor transformado de el cine que el usuario escoja*/
int sala_matriz;/*variable que guarda el valor transformado de la sala que el usuario escoja*/
int valor_en_pesos;/*variable que muestra el total de pesos a pagaar*/
int posicion_vector;/*variable perteneciente a la operacion ((cine_matriz+sala_matriz)-1) de la transformacion de cine matriz y sala matriz*/
int cantidad_entradas;/*cantiad de entradas que el usuario desee*/
float pago; /*varible flotante con la que relizara el pago el cliente*/
float dolar = 0.00025;/*precio de 1 peso en dolares dia 3/05/2020*/
float cambio;/*variable flotante que da el cambio de la entradas*/
float valor_en_dolares;/*precio en dolares a pagar*/

    printf("\n\nHa escogido comprar entrada");/*menu de entrada que indica al usuario que ecogio la opcion de comprar entrada*/
    printf("\n\n1. General (8000)\n\n2. Preferencial (12000)\n\nOpcion: ");/*le muestra al usuario si quiere comprar entradas de general o preferencial*/
    scanf("%d", &opcion);/*escanea la opcion que el usuario desea*/
    printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
    if(opcion==1)/*se hace un condicional if para 3 casos posibles de la calidad que quiera comprar en este caso si escoge general */
    {
       printf("\n\nUd. ha escogido General.\n\n");/*imprime en pantalla la opcion de compra que se escogio*/
       printf("Cuantas boletas desea comprar?\n");/*pregunta en pantalla cuantas boletas desea*/
       printf("\nBoletas:  ");/*imprime en pantalla el lugar donde se digita la opcion*/
       scanf("%d", &cantidad_entradas);/*escaea el numero de entradas y lo guarda en la variable*/
       printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
       if(cantidad_entradas>20)/*condicional if en caso de que el cliente escoja mas boletas de las maximas en la sala*/
       {
           printf("El numero de boletas excede la capacidad de la sala, por favor escoja otra cantidad");/*imprime en pantalla que hubo un error con la cantidad de boletas*/
           return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
       }
       printf("\n\nA que cine y sala desea ingresar?");/*imprime en pantalla a que cine y sala desea hacer la compra*/
       printf("\n\nCine:   ");/*lugar donde se dijitara la opcion*/
       scanf("%d", &cine);/*escanea la opcion deseada y la guarda*/
       printf("\nSala:   ");/*lugar donde se dijitara la opcion*/
       scanf("%d", &sala);/*escanea la opcion deseada y la guarda*/
       printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/

         if(cine==1)/*condicional if para los posibles casos del cliente y estos usarlos en operacion con sala para transformarlo a vector*/
            {
                cine_matriz=1;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else if(cine==2)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
            {
                cine_matriz=6;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else if(cine==3)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
            {
                cine_matriz=11;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else if(cine==4)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
            {
                cine_matriz=16;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else if(cine==5)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
            {
                cine_matriz=21;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else/*condicional else para el caso en el que el cliente no escoja una opcion valida*/
            {
                printf("\nEsta no es una opcion valida para 'Cine', por favor escoja otra.\n");/*imprime en pantalla que la opcion ingresada no esta dentro de las posibilidades*/
                return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
            }
     if(sala==1)/*condicional if para los posibles casos del cliente y estos usarlos en operacion con cine para transformarlo a vector*/
        {
            sala_matriz=0;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
        }
       else if(sala==2)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
       {
            sala_matriz=1;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
       }
       else if(sala==3)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
       {
           sala_matriz=2;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
       }
       else if(sala==4)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
       {
           sala_matriz=3;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
       }
       else if(sala==5)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
       {
           sala_matriz=4;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
       }
       else/*condicional else para el caso en el que el cliente no escoja una opcion valida*/
       {
           printf("\nEsta no es una opcion valida para 'Sala', por favor escoja otra.\n");/*imprime en pantalla que no es una opcion valida de salas*/
           return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
       }

   posicion_vector=((sala_matriz+cine_matriz)-1);/*operacion que se realiza con las trnsformaciones para ubicar la sala y el cine en forma de vector*/
   apu = &general[posicion_vector];/*se define a que equivale el apuntador, en este caso apunta a general en la posicion de la operacion encontrada en la transformacion*/

   if((cantidad_entradas + *apu)> 20)/*condicional if que dice que si el contenido del apuntador mas la suma de boletas es mayor a 20 arroje error*/
   {
       printf("\n\nLa cantidad de boletas que Ud. escogio excede la capacidad de la sala, por favor elija otra cantidad");/*imprime en pantalla el error*/
       printf("\n\nAsientos ocupados hasta el momento:  %d", *apu); /*muestra en pantalla cuantas son las sillas ocupadas*/
   }
   else/*en caso contrario de que el numero de entradas sea menor a 20 despliega los siguientes comandos*/
   {
       *apu = *apu + cantidad_entradas;/*al contenido del vector le suma la cantidad de boletas compradas*/
       printf("\n\nLa sala ecogida Tiene capacidad para los asientos deseados");/*muestra en pantalla que si estan disponibles los asientos deseados*/
       valor_en_dolares = ((precio_general*dolar)*cantidad_entradas);/*operacion para mostrar posteriormente la cantidad a pagar en dolares*/
       valor_en_pesos = (precio_general*cantidad_entradas);/*operacion para mostrar posteriormente la cantidad a pagar en pesos*/
       while(1)/*comando para que se repita la funcion indeterminadamente hasta que se le indique lo contrario*/
       {
       printf("\n\nTotal a pagar (en pesos): %d", valor_en_pesos);/*imprime en pantalla cuanto se debe pagar en pesos*/
       printf("\n\nTotal a pagar (en dolares): %.1f\n", valor_en_dolares);/*imprime en pantalla cuanto se debe pagar en dolares*/
       printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
       printf("\n\nCon cuanto dinero realizara el pago? (Solo pesos Colombianos)");/*pregunta en pantalla con cuanto diero desea pagar */
       printf("\n\nValor: ");/*casilla para digitar con cuanto se va a pagar*/
       scanf("%f", &pago);/*escanea el pago que ingreso el cliente*/

           if(pago<valor_en_pesos)/*condicional if en caso de que la persona digite un valor menor al pedido*/
            {
                printf("\nEl valor ingresado es menor al total, por favor ingrese minimo %d\n\n", valor_en_pesos);/*muestra en pantalla el error*/
                printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/

            }
           else/*en caso contrario de que ingrese un valor mayor o igual al pedido ejecutar las siguientes opciones*/
            {
                cambio=(pago-valor_en_pesos);/*operacion para devolver el dinero*/
                printf("\nSu compra fue efectuada con exito!!!!!!\n\n");/*imprime en pantalla que la transaccion fue valida*/
                printf("Su cambio es de: %.2f\n\n",cambio);/*imprime en pantalla el caambio respectivo*/
                printf("Generando recibo.....\n");/*imprime en pantalla la simulacion de que se esta imprimiendo el recibo*/
                printf("\nSu recibo se guardo en los Archivos correctamente.\n");/*imprime en pantalla que el recibo fue generado con exito y esta en los archivos*/
                FILE *RECIBO;/*crea un apuntador que va a recibo*/
                RECIBO = fopen("recibo.txt","w"); /*apertura y nombre del archivo y tipo escritura*/
                if (RECIBO == NULL) /*este condicional se usa por si surje un error en la creación del archivo*/
                    {
                        perror("\n No se pudo generar el recibo.");/*se imprime este mensaje si no se puede imprimir el recibo*/
                    }
                else /* si se genera el recibo se ejecutan los siguientes comandos*/
                {
                    fprintf(RECIBO,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
                    fprintf(RECIBO,"\n\nRECIBO DE COMPRA CINE MESA!!!");/*Titulo del archivo de texto*/
                    fprintf(RECIBO,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
                    fprintf(RECIBO,"\n Nombre del Cliente: %s", nombre);/*se imprime el nombre del cliente*/
                    fprintf(RECIBO,"\n\n Tipo de entrada : General");/*se imprime el tipo de entrada "GENERAL"*/
                    fprintf(RECIBO,"\n\n Cine: %d", cine);/*Se imprime el numero del teatro escogido*/
                    fprintf(RECIBO,"\n\n Sala: %d", sala);/*se imprime el numero de la sala escogida*/
                    fprintf(RECIBO,"\n\n Cantidad de sillas compradas: %d ", cantidad_entradas);/*Se imprime la cantidad de boletas que compraron*/
                    fprintf(RECIBO,"\n\n Total a pagar en Pesos (COP): %d", valor_en_pesos);/*se imprime el valor total de la compra en pesos colombianos*/
                    fprintf(RECIBO,"\n\n Total a pagar en Dolares (USD): %.1f", valor_en_dolares);/*se imprime el valor total de la compra en dolares*/
                    fprintf(RECIBO,"\n\n Usted pago con %.2f COP\n\n Su cambio es de %.2f COP", pago, cambio);/*se imprime con cuanto dinero pago y cual es el cambio que debe ser devuelto*/
                    fprintf(RECIBO,"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
                    fprintf(RECIBO,"\n\n Gracias por visitarnos %s vuelve pronto, te esperamos!!!", nombre);/*se imprime en el archivo un mensaje de depedida con el nombre del cliente*/
                    fprintf(RECIBO,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
    }
    fflush(RECIBO);/*limpia la basura que pueda sobrar para los siguientes clientes*/
    fclose(RECIBO);/*cierra el archivo*/
                return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
        }
      }
     }
    }
    else if(opcion==2)/*se hace un condicional if para 3 casos posibles de la calidad que quiera comprar en este caso si escoge preferencial*/
    {
       printf("\n\nUd. ha escogido Preferencial.");/*imprime en pantalla la opcion de compra que se escogio*/
       printf("\n\nCuantas boletas desea comprar?");/*pregunta en pantalla cuantas boletas desea*/
       printf("\nBoletas: ");/*imprime en pantalla el lugar donde se digita la opcion*/
       scanf("%d", &cantidad_entradas);/*escaea el numero de entradas y lo guarda en la variable*/
       printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
       if(cantidad_entradas>15)/*condicional if en caso de que el cliente escoja mas boletas de las maximas en la sala*/
       {
           printf("\n\nEl numero de boletas excede la capacidad de la sala, por favor escoja otra cantidad\n\n");/*imprime en pantalla que hubo un error con la cantidad de boletas*/
           return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
       }
       printf("\n\nA que cine y sala desea ingresar?");/*imprime en pantalla a que cine y sala desea hacer la compra*/
       printf("\n\nCine:   ");/*lugar donde se dijitara la opcion*/
       scanf("%d", &cine);/*escanea la opcion deseada y la guarda*/
       printf("\nSala:   ");/*lugar donde se dijitara la opcion*/
       scanf("%d", &sala);/*escanea la opcion deseada y la guarda*/
       printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/

         if(cine==1)/*condicional if para los posibles casos del cliente y estos usarlos en operacion con sala para transformarlo a vector*/
            {
                cine_matriz=1;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else if(cine==2)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
            {
                cine_matriz=6;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else if(cine==3)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
            {
                cine_matriz=11;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else if(cine==4)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
            {
                cine_matriz=16;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else if(cine==5)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
            {
                cine_matriz=21;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de sala para ubicar posicion del vector en dode se encuentra el cine y sala deseada*/
            }
         else/*condicional else para el caso en el que el cliente no escoja una opcion valida*/
            {
                printf("\nEsta no es una opcion valida para 'Cine', por favor escoja otra.\n");/*imprime en pantalla que la opcion ingresada no esta dentro de las posibilidades*/
                return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
            }
     if(sala==1)/*condicional if para los posibles casos del cliente y estos usarlos en operacion con cine para transformarlo a vector*/
        {
            sala_matriz=0;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
        }
       else if(sala==2)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
       {
            sala_matriz=1;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
       }
       else if(sala==3)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
       {
           sala_matriz=2;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
       }
       else if(sala==4)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
       {
           sala_matriz=3;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
       }
       else if(sala==5)/*condicional else if para los posibles casos del cliente y estos usarlos en operacion para transformarlo a vector*/
       {
           sala_matriz=4;/*transformacion de variable para que despues se pueda sumar con la
                 transformacion de cine para ubicar la posicion del vector en dode se encuentra el cine y sala deseada*/
       }
       else/*condicional else para el caso en el que el cliente no escoja una opcion valida*/
       {
           printf("\nEsta no es una opcion valida para 'Sala', por favor escoja otra.\n");/*imprime en pantalla que no es una opcion valida de salas*/
           return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
       }

   posicion_vector=((sala_matriz+cine_matriz)-1);/*operacion que se realiza con las trnsformaciones para ubicar la sala y el cine en forma de vector*/
   apu = &general[posicion_vector];/*se define a que equivale el apuntador, en este caso apunta a general en la posicion de la operacion encontrada en la transformacion*/

   if((cantidad_entradas + *apu)> 15)/*condicional if que dice que si el contenido del apuntador mas la suma de boletas es mayor a 15 arroje error*/
   {
       printf("\n\nLa cantidad de boletas que Ud. escogio excede la capacidad de la sala, por favor elija otra cantidad");/*imprime en pantalla el error*/
       printf("\n\nAsientos ocupados hasta el momento:  %d\n\n", *apu); /*muestra en pantalla cuantas son las sillas ocupadas*/
   }

   else/*en caso contrario de que el numero de entradas sea menor a 15 despliega los siguientes comandos*/
   {
       *apu = *apu + cantidad_entradas;/*al contenido del vector le suma la cantidad de boletas compradas*/
       printf("\n\nLa sala ecogida Tiene capacidad para los asientos deseados");/*muestra en pantalla que si estan disponibles los asientos deseados*/
       valor_en_dolares = ((precio_general*dolar)*cantidad_entradas);/*operacion para mostrar posteriormente la cantidad a pagar en dolares*/
       valor_en_pesos = (precio_general*cantidad_entradas);/*operacion para mostrar posteriormente la cantidad a pagar en pesos*/
       while(1)/*comando para que se repita la funcion indeterminadamente hasta que se le indique lo contrario*/
       {
       printf("\n\nTotal a pagar (en pesos): %d", valor_en_pesos);/*imprime en pantalla cuanto se debe pagar en pesos*/
       printf("\n\nTotal a pagar (en dolares): %.1f\n", valor_en_dolares);/*imprime en pantalla cuanto se debe pagar en dolares*/
       printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
       printf("\n\nCon cuanto dinero realizara el pago? (Solo pesos Colombianos)");/*pregunta en pantalla con cuanto diero desea pagar */
       printf("\n\nValor: ");/*casilla para digitar con cuanto se va a pagar*/
       scanf("%f", &pago);/*escanea el pago que ingreso el cliente*/

           if(pago<valor_en_pesos)/*condicional if en caso de que la persona digite un valor menor al pedido*/
            {
                printf("\nEl valor ingresado es menor al total, por favor ingrese minimo %d\n\n", valor_en_pesos);/*muestra en pantalla el error*/
                printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/

            }
           else/*en caso contrario de que ingrese un valor mayor o igual al pedido ejecutar las siguientes opciones*/
            {
                cambio=(pago-valor_en_pesos);/*operacion para devolver el dinero*/
                printf("\nSu compra fue efectuada con exito!!!!!!\n\n");/*imprime en pantalla que la transaccion fue valida*/
                printf("Su cambio es de: %.2f\n\n",cambio);/*imprime en pantalla el caambio respectivo*/
                printf("\nGenerando recibo.....\n");/*imprime en pantalla la simulacion de que se esta imprimiendo el recibo*/
                printf("\n\nSu recibo se guardo en los Archivos correctamente.\n");/*imprime en pantalla que el recibo fue generado con exito y esta en los archivos*/
                FILE *RECIBO;/*crea un apuntador que va a recibo*/
                RECIBO = fopen("recibo.txt","w"); /*apertura y nombre del archivo y tipo escritura*/
                if (RECIBO == NULL) /*este condicional se usa por si surje un error en la creación del archivo*/
                    {
                        perror("\n No se pudo generar el recibo.");/*se imprime este mensaje si no se puede imprimir el recibo*/
                    }
                else /* si se genera el recibo se ejecutan los siguientes comandos*/
                {
                    fprintf(RECIBO,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
                    fprintf(RECIBO,"\n\nRECIBO DE COMPRA CINE MESA!!!");/*Titulo del archivo de texto*/
                    fprintf(RECIBO,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
                    fprintf(RECIBO,"\n Nombre del Cliente: %s", nombre);/*se imprime el nombre del cliente*/
                    fprintf(RECIBO,"\n\n Tipo de entrada : Preferncial");/*se imprime el tipo de entrada "GENERAL"*/
                    fprintf(RECIBO,"\n\n Cine: %d", cine);/*Se imprime el numero del teatro escogido*/
                    fprintf(RECIBO,"\n\n Sala: %d", sala);/*se imprime el numero de la sala escogida*/
                    fprintf(RECIBO,"\n\n Cantidad de sillas compradas: %d ", cantidad_entradas);/*Se imprime la cantidad de boletas que compraron*/
                    fprintf(RECIBO,"\n\n Total a pagar en Pesos (COP): %d", valor_en_pesos);/*se imprime el valor total de la compra en pesos colombianos*/
                    fprintf(RECIBO,"\n\n Total a pagar en Dolares (USD): %.1f", valor_en_dolares);/*se imprime el valor total de la compra en dolares*/
                    fprintf(RECIBO,"\n\n Usted pago con %.2f COP\n\n Su cambio es de %.2f COP", pago, cambio);/*se imprime con cuanto dinero pago y cual es el cambio que debe ser devuelto*/
                    fprintf(RECIBO,"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
                    fprintf(RECIBO,"\n\n Gracias por visitarnos %s vuelve pronto, te esperamos!!!\n", nombre);/*se imprime en el archivo un mensaje de depedida con el nombre del cliente*/
                    fprintf(RECIBO,"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
    }
    fflush(RECIBO);/*limpia la basura que pueda sobrar para los siguientes clientes*/
    fclose(RECIBO);/*cierra el archivo*/
                return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
        }
      }
     }
    }

  else
  {
      printf("\n\nEsta no es una opcion valida por favor escoja otra");/*imprime en pantalla que hay un error en las opciones que se escogio*/
      return 0;/*comando para indicarle al programa que las instrucciones anteriores se ejecutaron con exito y salga*/
  }

}
void ganancias()
{
    int opciong;
    int opcion2;
    int ganancias_sala;
    int ganancias_teatro;
    int ganancias_totales;
    int i, j;
    int *apu = &general;/*apuntador para recorrer el vector de general*/
    int *apu2 = &preferencial;/*apuntador para recorrer el vector de preferencial*/
    int *apu3 = &apu2;
    int *apu4 =&apu;
    int prueba=1;

    printf("\n\nUd. ha escogido ver ganancias");
    printf("\nQue desea hacer?");
    printf("\n\n1. Ganancias por sala.\n\n2. Ganancias por teatro.\n\n3. Ganancias totales.");
    printf("\n\nOpcion:   ");
    scanf("%d", &opciong);

    switch(opciong)
    {
        case 1:

            printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
            printf("\n\nUd ha escogido ver ganancias por sala.\n\n");
            printf("\n1. General.\n\n2. preferencial.\n\n");
            printf("Opcion:  ");
            scanf("%d",&opcion2);
            printf ("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
            if(opcion2==1)
            {
                printf("GENERAL:");
                printf("\n        \t\t\tSala 1\t\tSala 2\t\tSala 3\t\tSala 4\t\tSala 5\n");/*imprime en pantalla las salas sincronizadas con los cines*/
            for(j=0;j<25;j++)/*comando for para que recorra el vector y ejecute los comandos siguientes*/
            {
                if(j==0)/*para cuando el contador este en 0 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                        printf("\n\nCine 1: Unicentro  ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                        printf("    ");/*decoracion*/
                    }
                 else if(j==5)/*para cuando el contador este en 5 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\n\nCine 2: Santa Fe   ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(j==10)/*para cuando el contador este en 10 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\n\nCine 3: Colina     ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(j==15)/*para cuando el contador este en 15 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\n\nCine 4: Fontanar   ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(j==20)/*para cuando el contador este en 20 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\n\nCine 5: Titan Plaza");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                  *apu=(*apu*precio_general);
                printf("\t         %d",*apu);/*imprime en pantalla con el apuntador el vslor que se encuentra en el*/
                apu++;/*apenas se acaba esta accion se aumentara el contador del apuntador para seguir con las siguientes posiciones*/

         }
            printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
            printf("\nSe esta exportando el archivo...\n\nSe ha exportado el archivo con exito");
            printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
            FILE *GANANCIAS;
            GANANCIAS = fopen("ganancias.txt","w");// nombre del archivo y tipo escritura
            if (GANANCIAS == NULL)
            {// este condicional se usa por si surgue un error en la creación del archivo
            perror("\n No se pudo generar el recibo de ganancias.");// se imprime este mensaje si no se puede imprimir el recibo
            }
            else{// si se genera el recibo
    fprintf (GANANCIAS,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
    fprintf(GANANCIAS,"\t Ganancias Cine Mesa :P");//Titulo del archivo de texto
    fprintf (GANANCIAS,"\n Ganancias por sala general\n");// se imprime el tipo de entrada "GENERAL"
    fprintf (GANANCIAS,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
    printf("\n");// decoración
    fflush;
    apu = &general[posicion_vector];
    for (i=0;i<25;i++)
        {

            if(i==0 ||i==5 ||i==10 ||i==15||i==20)
            {
             fprintf (GANANCIAS,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
             fprintf(GANANCIAS,"salas %d",prueba++);
             fprintf(GANANCIAS,"\n");
            }
            fprintf(GANANCIAS,"$ %d",*apu);
            fprintf(GANANCIAS,"\t");
            apu++;
            fprintf(GANANCIAS,"\n");
        }
        fflush(GANANCIAS);/*limpia la basura que pueda sobrar para los siguientes clientes*/
        fclose(GANANCIAS);/*cierra el archivo*/
        }

        }

        else if(opcion2==2)
        {
            printf("PREFERENCIAL");
            printf("\n        \t\t\tSala 1\t\tSala 2\t\tSala 3\t\tSala 4\t\tSala 5\n");/*imprime en pantalla las salas sincronizadas con los cines*/
            for(j=0;j<25;j++)/*comando for para que recorra el vector y ejecute los comandos siguientes*/
            {
                if(j==0)/*para cuando el contador este en 0 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                        printf("\n\nCine 1: Unicentro  ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                        printf("    ");/*decoracion*/
                    }
                 else if(j==5)/*para cuando el contador este en 5 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\n\nCine 2: Santa Fe   ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(j==10)/*para cuando el contador este en 10 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\n\nCine 3: Colina     ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(j==15)/*para cuando el contador este en 15 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\n\nCine 4: Fontanar   ");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                 else if(j==20)/*para cuando el contador este en 20 imprime en pantalla el cine, esto se hace mas por decoracion, se podria omitir*/
                    {
                      printf("\n\nCine 5: Titan Plaza");/*cine correspondiente que se ubicara como filas del vector expresado como matriz*/
                      printf("    ");/*decoracion*/
                    }
                  *apu2=(*apu2*precio_preferencial);
                printf("\t         %d",*apu2);/*imprime en pantalla con el apuntador el vslor que se encuentra en el*/
                apu2++;/*apenas se acaba esta accion se aumentara el contador del apuntador para seguir con las siguientes posiciones*/

         }
            printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
            printf("\nSe esta exportando el archivo...\n\nSe ha exportado el archivo con exito");
            printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
            FILE *GANANCIAS2;
            GANANCIAS2 = fopen("ganancias2.txt","w");// nombre del archivo y tipo escritura
            if (GANANCIAS2 == NULL)
            {// este condicional se usa por si surgue un error en la creación del archivo
            perror("\n No se pudo generar el recibo de ganancias.");// se imprime este mensaje si no se puede imprimir el recibo
            }
            else{// si se genera el recibo
    fprintf (GANANCIAS2,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
    fprintf(GANANCIAS2,"\t Ganancias Cine Mesa :P");//Titulo del archivo de texto
    fprintf (GANANCIAS2,"\n Ganancias por sala general\n");// se imprime el tipo de entrada "GENERAL"
    fprintf (GANANCIAS2,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
    printf("\n");// decoración
    fflush;
    apu2 = &preferencial[posicion_vector];
    for (i=0;i<25;i++)
        {

            if(i==0 ||i==5 ||i==10 ||i==15||i==20)
            {
             fprintf (GANANCIAS2,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
             fprintf(GANANCIAS2,"salas %d",prueba++);
             fprintf(GANANCIAS2,"\n");
            }
            fprintf(GANANCIAS2,"$ %d",*apu2);
            fprintf(GANANCIAS2,"\t");
            apu2++;
            fprintf(GANANCIAS2,"\n");
        }
        fflush(GANANCIAS2);/*limpia la basura que pueda sobrar para los siguientes clientes*/
        fclose(GANANCIAS2);/*cierra el archivo*/
        }

        }
        else
            {
                error();
                printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
            }
        break;/*comando para que cuando finalice el caso X se salga de bucle*/

        case 2:
            printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
            printf("\n\nUd ha escogido ver ganancias por teatro.\n\n");
            printf("\nSe esta exportando el archivo...\n\nSe ha exportado el archivo con exito");
            printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
            FILE *SALAS;
            apu=general[posicion_vector];
            SALAS = fopen("salas.txt","w");
            if (SALAS == NULL)
            {// este condicional se usa por si surgue un error en la creación del archivo
            perror("\n No se pudo generar el recibo de ganancias.");// se imprime este mensaje si no se puede imprimir el recibo

            }
            else
                {
                 fprintf (SALAS,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
                 fprintf (SALAS,"\tGanancias Cine Mesa :P");//Titulo del archivo de texto
                 fprintf (SALAS,"\n Ganancias por salas\n");// se imprime el tipo de entrada "GENERAL"
                 fprintf (SALAS,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
                 for (i=0;i<25;i+5)
        {

            if(i==0 ||i==5 ||i==10 ||i==15||i==20)
            {
             fprintf (SALAS,"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
             fprintf(SALAS,"salas %d",prueba++);
             fprintf(SALAS,"\n");
            }
            fprintf(SALAS,"$ %d",*apu2);
            fprintf(SALAS,"\t");
            apu2++;
            fprintf(SALAS,"\n");
        }
        fflush(SALAS);/*limpia la basura que pueda sobrar para los siguientes clientes*/
        fclose(SALAS);/*cierra el archivo*/

                }


        break;/*comando para que cuando finalice el caso X se salga de bucle*/

        case 3:

            printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");/*decoracion*/
            printf("\n\nUd ha escogido ver ganancias totales.\n\n");
            printf("\nSe esta exportando el archivo...\n\nSe ha exportado el archivo con exito");
            printf ("\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
            FILE *GANANCIAST;
            GANANCIAST = fopen("gananciasT.txt","w");// nombre del archivo y tipo escritura
            if (GANANCIAST == NULL)
            {// este condicional se usa por si surgue un error en la creación del archivo
            perror("\n No se pudo generar el recibo de ganancias.");// se imprime este mensaje si no se puede imprimir el recibo
            }
            else{// si se genera el recibo
    fprintf (GANANCIAST,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
    fprintf(GANANCIAST,"\tGanancias Cine Mesa :P");//Titulo del archivo de texto
    fprintf (GANANCIAST,"\n Ganancias Totales\n");// se imprime el tipo de entrada "GENERAL"
    fprintf (GANANCIAST,"\n\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/
    printf("\n");// decoración
    fflush;
    apu = &general[posicion_vector];
    apu2 = &preferencial[posicion_vector];
    suma = *apu3+apu2;
    suma2= *apu4+apu;
    suma_total=*apu4+*apu3;
    for (i=0;i<2;i++)
        {

            fprintf(GANANCIAST,"$ %d (COP)",suma_total);
            fprintf(GANANCIAST,"\t");
            fprintf(GANANCIAST,"\n");
        }
        fflush(GANANCIAST);/*limpia la basura que pueda sobrar para los siguientes clientes*/
        fclose(GANANCIAST);/*cierra el archivo*/
        }


        break;/*comando para que cuando finalice el caso X se salga de bucle*/

        default:/*ultimo caso del programa, en caso de que el usuario escoja ---------> una opcion incorrecta*/

            error();/*funcion de error llamada en el void*/
            printf ("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n\n");/*decoracion*/

        break;/*comando para que cuando finalice el caso X se salga de bucle*/

    }
}
