#include <stdio.h>
#include <stdlib.h>
//#include "LinkedList.h"
//#include "Controller.h"
#include "Employee.h"
#define SIZE 2
#define LLENO 1
#define VACIO -1

int findEmployeeById(Employee arrayEmployee[],int size)
{
    int i ;
    for( i=0; i<size; i++)
    {
        if(arrayEmployee[i].isEmpty==VACIO)
        {
            arrayEmployee[i].id=i+1;
            break;
        }

    }
    return i;
}

void initEmployees(Employee arrayEmployee[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        arrayEmployee[i].isEmpty=VACIO;
    }

}
int ArraySpace(Employee arrayEmployee[],int size)
{
    int aux=VACIO;
    int i;

    for(i=0; i<size; i++)
    {
        if(arrayEmployee[i].isEmpty==VACIO)
        {
            aux=i;
            break;
        }
    }

    return aux;
}
void addEmployees(Employee arrayEmployee[],int size,int i)
{

    int n;
    int a;
    int flagName=0;
    int flagLastName=0;
    char salary;
    char sector;



    printf(" \n                  ***   >>> DAR DE ALTA A EMPLEADOS <<<   ***\n\n");


    printf("ID es:%d",findEmployeeById(arrayEmployee,SIZE));

    printf("\nIngrese nombre: ");



    do
    {
        flagName= 0;
        fflush(stdin);
        gets(arrayEmployee[i].nombre);
        for(n=0; n<strlen(arrayEmployee[i].nombre); n++)
        {
            if((arrayEmployee[i].nombre[n] < 'a' || arrayEmployee[i].nombre[n] > 'z') &&
                    (arrayEmployee[i].nombre[n] < 'A' || arrayEmployee[i].nombre[n] > 'Z'))
            {
                printf("Error, el nombre solamente puede ir compuesto por letras.  Reingrese nombre: ");
                flagName = LLENO;
                break;
            }
        }
    }
    while(flagName);


    printf("\nIngrese salario: ");
    scanf("%f", & arrayEmployee[i].sueldo);

    while(arrayEmployee[i].sueldo<0)
    {
        printf("\nERROR. Reingrese salario: ");
        scanf("%f", & arrayEmployee[i].sueldo);

    }

    printf("\nIngrese horas trabajadas: ");
    scanf("%d", & arrayEmployee[i].horasTrabajadas);
    while(arrayEmployee[i].horasTrabajadas<0)
    {
        printf("\nERROR.Reingrese horas trabajadas: ");
        scanf("%d", & arrayEmployee[i].horasTrabajadas);

    }

    arrayEmployee[i].isEmpty=LLENO;
}


void removeEmployee(Employee arrayEmployee[],int size)
{

    int flag=0;
    int aceptar1;
    int auxId2;


    printf("\nIngrese el ID que desea dar de baja: ");
    scanf("%d", & auxId2);

    for(int i=0; i<size; i++)
    {
        if(arrayEmployee[i].isEmpty!=VACIO && auxId2==arrayEmployee[i].id)
        {
            flag=1;
            printf("\nDesea dar de baja a este empleado?\n s/para continuar n/para salir\n");
            aceptar1=getch();
            if(aceptar1 =='s')
            {
                printf("\nse ha dado de baja a este empleado.\n");
                arrayEmployee[i].isEmpty=VACIO;
                break;
            }
            else if (aceptar1!='s')
            {
                printf("\nPrecione s para volver al menu\n");
            }

        }

    }

    if(flag==0)
    {
        printf("\nNo existe ID ingresalo nuevamente\n");
    }
}



