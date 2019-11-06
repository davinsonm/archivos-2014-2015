#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>

struct provincia{
	int cod_pro;
	char nom_pro[30];
};
struct comunidad{
	int cod_com;
	char nomb_com[30];
	char re_com[30];
	int cod_pro;
};
struct habitantes{
	char ced_habi[11];
	char ap_habi[30];
	char nom_habi[30];
	int cod_com;
};
struct consumo{
	int cod_com;
	char ced_habi[11];
	int mes_con;
	float me_cu_con;
};
using namespace std;
void main()
{
	provincia re_pro;
	comunidad re_com;
	habitantes re_habi;
	consumo re_con;
	FILE *Provincia;
	FILE *Comunidad;
	FILE *Habitantes;
	FILE *Consumo;
	FILE *Consultas;
	int opcion;
	do
	{
		system("cls");
		printf("\n   1. Comunidad.");
		printf("\n   2. Habitantes.");
		printf("\n   3. Consumo.");
		printf("\n   4. Provincia.");
		printf("\n   5. Consultas.");
		printf("\n   6. Salir.");
		printf("\n\n   Introduzca opcion (1-6): ");
		scanf_s("%d", &opcion);
		switch (opcion)
		{
		case 1:
			do{
				system("cls");
				printf("\n   1. Registro de una Comunidad.");
				printf("\n   2. Modificacion del registro de una Comunidad.");
				printf("\n   3. Eliminacion del registro de una Comunidad.");
				printf("\n   4. Atras.");
				printf("\n\n   Introduzca opcion (1-4): ");
				scanf_s("%d", &opcion);
				switch (opcion)
				{
				case 1:
					printf("\t\t\t Registro de comunidad");
					printf("\n Ingrese codigo de comunidad : ");
					fflush(stdin);
					scanf_s("%d", &re_com.cod_com);
					printf("\n Ingrese nombre de la comunidad :");
					fflush(stdin);
					gets_s(re_com.nomb_com);
					printf("\n Ingrese representante de la comunidad :");
					fflush(stdin);
					gets_s(re_com.re_com);
					printf("\nIngrese codigo de provincia :");
					fflush(stdin);
					scanf_s("%d", &re_com.cod_pro);
					Comunidad = fopen("C:/Datos/Comunidad.txt", "a");
					fprintf(Comunidad, "Codigo de la Comunidad: %d \n", re_com.cod_com);
					fprintf(Comunidad, "Nombre de la Comunidad: %s \n", re_com.nomb_com);
					fprintf(Comunidad, "Representante de la Comunidad: %s \n", re_com.re_com);
					fprintf(Comunidad, "Codigo de Provincia: %d \n", re_com.cod_com);
					printf("\n Datos guardados");
					printf("\n");
					system("pause");
					fclose(Comunidad);

					break;
				case 2:
					
					break;
				case 3:
					break;
				}
			} while (opcion != 4);

			break;
		case 2:
			do{
				system("cls");
				printf("\n   1. Registro de un Habitante.");
				printf("\n   2. Modificacion del registro de un Habitante.");
				printf("\n   3. Eliminacion del registro un Habitante.");
				printf("\n   4. Atras.");
				printf("\n\n   Introduzca opcion (1-4): ");
				scanf_s("%d", &opcion);
				switch (opcion)
				{
				case 1:
					printf("\t\t\tRegistro de Habitantes ");
					printf("\nIngrese codigo de habitante : ");
					fflush(stdin);
					scanf_s("%d", &re_habi.ced_habi);
					printf("\n Ingrese nombre del habitante:");
					fflush(stdin);
					gets_s(re_habi.nom_habi);
					printf("\n Ingrese apellidos del habitante:");
					fflush(stdin);
					gets_s(re_habi.ap_habi);
					printf("\nIngrese codigo de comunidad:");
					fflush(stdin);
					scanf_s("%d", &re_habi.cod_com);
					Habitantes = fopen("C:/Datos/Habitantes.txt", "a");
					fprintf(Habitantes, "Codigo del habitante: %d \n", re_habi.ced_habi);
					fprintf(Habitantes, "Nombre del habitante: %s \n", re_habi.nom_habi);
					fprintf(Habitantes, "Apellidos del habitante: %s \n", re_habi.ap_habi);
					fprintf(Habitantes, "Codigo de comunidad: %d \n", re_habi.cod_com);
					printf("\n Datos guardados");
					printf("\n");
					system("pause");
					fclose(Habitantes);

					break;
				case 2:
					break;
				case 3:
					;
				}
			} while (opcion != 4);
			break;

		case 3:
			do{
				system("cls");
				printf("\n   1. Registro de Consumo.");
				printf("\n   2. Modificacion del registro de Consumo.");
				printf("\n   3. Eliminacion del registro Consumo.");
				printf("\n   4. Atras.");
				printf("\n\n   Introduzca opcion (1-4): ");
				scanf_s("%d", &opcion);
				switch (opcion)
				{
				case 1:
					printf("\t\t\tRegistro de Consumo ");
					printf("\nIngrese codigo de Comunidad : ");
					fflush(stdin);
					scanf_s("%d", &re_con.cod_com);
					printf("\n Ingrese cedula de habitantes:");
					fflush(stdin);
					gets_s(re_con.ced_habi);
					printf("\n Ingrese Mes de consumo:");
					fflush(stdin);
					scanf_s("%d", &re_con.mes_con);
					printf("\nIngrese metros cubicos consumidos:");
					fflush(stdin);
					scanf_s("%f", &re_con.me_cu_con);
					Consumo = fopen("C:/Datos/Consumo.txt", "a");
					fprintf(Consumo, "Codigo de Comunidad: %d \n", re_con.cod_com);
					fprintf(Consumo, "Cedula de habitantes: %s \n", re_con.ced_habi);
					fprintf(Consumo, "Mes de consumo: %d \n", re_con.mes_con);
					fprintf(Consumo, "Metros cubicos consumidos: %f \n", re_con.me_cu_con);
					printf("\n Datos guardados");
					printf("\n");
					system("pause");
					fclose(Consumo);

					break;
				case 2:
					break;
				case 3:
					;
				}
			} while (opcion != 4);
			break;

		case 4:
			do{
				system("cls");
				printf("\n   1. Registro de una Provincia.");
				printf("\n   2. Modificacion del registro de una Provincia.");
				printf("\n   3. Eliminacion del registro de una Provincia.");
				printf("\n   4. Atras.");
				printf("\n\n   Introduzca opcion (1-4): ");
				scanf_s("%d", &opcion);
				switch (opcion)
				{
				case 1:
					printf("\t\t\tRegistro de Provincia ");
					printf("\nIngrese codigo de provincia : ");
					fflush(stdin);
					scanf_s("%d", &re_pro.cod_pro);
					printf("\n Ingrese nombre de la provincia: ");
					fflush(stdin);
					gets_s(re_pro.nom_pro);
					Provincia = fopen("C:/Users/user/Desktop/Provincia.txt", "a");
					fprintf(Provincia, "Codigo de la provincia: %d \n", re_pro.cod_pro);
					fprintf(Provincia, "Nombre de la provincia: %s \n", re_pro.nom_pro);
					printf("\n Datos guardados");
					printf("\n");
					system("pause");
					fclose(Provincia);
					break;
				case 2:
					break;
				case 3:
					;
				}
			} while (opcion != 4);
			break;
		case 5:
			;
		}
	} while (opcion != 6);
	system("pause");
}
