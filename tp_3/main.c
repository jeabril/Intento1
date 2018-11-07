#include <stdio.h>
#include <stdlib.h>
//#include "LinkedList.h"
//#include "Controller.h"
#include "Employee.h"
#define SIZE 1000
#define LLENO 1
#define VACIO -1


/*/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*******************************************************/


int main()
{
    //int option = 0;
    int flag=0;
    int indice;
    char seguir;
    /* LinkedList* listaEmpleados = ll_newLinkedList();
     do{
         switch(option)
         {
            case 1:
             controller_loadFromText("data.csv",listaEmpleados);
                break;
         }
     }while(option != 10);
     */
    do
    {
        switch(menu())
        {
        case 1:
            flag=1;
            indice=ArraySpace(arrayEmployee,SIZE);
            if(indice!=VACIO)
            {
                addEmployees(arrayEmployee, SIZE,indice);
            }
            else
            {
                printf("No hay espacio\n");
            }
            break;
            break;
        case 2:

            //modifyEmployee(employee, SIZE);
            system("pause");
            break;
        case 3:

            //removeEmployee(employee,SIZE); //eEmployee lock[], int lenght, int id
            break;
        case 4:

            //sortEmployees(employee, SIZE);
            system("pause");
            //viewEmployees(employee, SIZE);
            break;
        case 5:

            seguir = 'n';
            system("pause");
            break;
        case 6:

            seguir = 'n';
            system("pause");
            break;
        case 7:

            seguir = 'n';
            system("pause");
            break;
        case 8:

            seguir = 'n';
            system("pause");
            break;
        case 9:

            seguir = 'n';
            system("pause");
            break;
        case 10:

            seguir = 'n';
            system("pause");
            break;

        }

    }
    while ( seguir == 's');




    return 0;
}

int menu()
{
    int option;
    system("color F5");
    system("cls");


    printf("************************************************************************************\n");
    printf("*     Menu:                                                                         *\n");
    printf("*     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto)   *\n");
    printf("*     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario) *\n");
    printf("*     3. Alta de empleado                                                           *\n");
    printf("*     4. Modificar datos de empleado                                                *\n");
    printf("*     5. Baja de empleado                                                           *\n");
    printf("*     6. Listar empleados                                                           *\n");
    printf("*     7. Ordenar empleados                                                          *\n");
    printf("*     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).    *\n");
    printf("*     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).  *\n");
    printf("*    10. Salir                                                                      *\n");
    printf("************************************************************************************\n");
    scanf("%d",&option);



    return option;
}

