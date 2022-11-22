#include <stdio.h>
#include <stdlib.h>
/* EJERCICIO 71
Descripción: E.P. que utilice un apuntador de arreglo con datos de tipo float,
pedir el usuario el número de elementos, luego reservar memoria
dinámica con calloc, leer dicho arreglo y posteriormente, imprimir
todos sus elementos; por último, liberar el espacio de memoria
dinámica utilizado.
Version: 1.0
Fecha: 04/04/2022
Autor: HERVE ORDAZ OSORIO - WindowsXP
*/
int main ()
{
	//DEFINIR VARIABLES:
	
    int i,n; // i se utiliza para almacenar el tamaño del arreglo, n se utiliza como indice del arreglo.
    float * pArreglo; //Se define el apuntador

//PROCESO:
    printf ("Ingrese el numero de elementos del arreglo: "); //Entrada de los elementos del arreglo
    scanf ("%i",&i);
    pArreglo = (float*) calloc (i,sizeof(float)); //Se llama calloc para reservar memoria dinamica
    
    if (pArreglo==NULL){
    exit (1);	
	}
	 
    for (n=0;n<i;n++) //Se utiliza FOR para llenar los elementos del arreglo
    {
                 printf ("Ingrese el elemento #% d: ", n + 1);
        scanf ("%f",&pArreglo[n]);
    }
     printf("\n\n");
    
    printf ("Los elementos ingresados son: ");
    for (n=0;n<i;n++) printf ("// %.2f ",pArreglo[n]); //SALIDA: Se imprimen los elementos del arreglo
    printf("\n\n");
   
    free (pArreglo); //Se libera el espacio asignado por calloc
    
    system("pause");
    return 0;
}

/*Q/A: El programa funciona correctamente. Utiliza todos los elementos solicitados
(apuntador de arreglo, funcion calloc y se libera la memoria).
Se probo con los siguientes datos:
Ingrese el numero de elementos del arreglo: 5
Ingrese el elemento # 1: 4
Ingrese el elemento # 2: -8
Ingrese el elemento # 3: 3.5
Ingrese el elemento # 4: 7
Ingrese el elemento # 5: 0
Los elementos ingresados son: // 4.00 // -8.00 // 3.50 // 7.00 // 0.00
El codigo está fundamentado.
Revisado por: Reynaldo Alexander Couoh Martin*/
