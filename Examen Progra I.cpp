#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int escuela=0, tipoMaterial=0,puntosMaterial=0;
	int tipoEscuela;
	double cantMaterial=0;
	double contPlastico=0,contPapel=0, contVidrio=0,contAluminio=0;
	double cantTotalMaterial=0;
	double puntosTotalPlastico=0,puntosTotalPapel=0,puntosTotalVidrio=0,puntosTotalAluminio=0, puntosTotales=0, premioFinal=0;
	char opcion;
	
	
	printf("*******************************************************************************************\n");
	printf("Bienvenido al concruso anual de reciclaje UTC Escuelas Distrito SAN JOSE");
	printf("\n");
	printf("********************************************************************************************\n");
	printf("\n");
	printf("ESTE 2024 TU ESCUELA GANARSE HASTA 300.000 MIL COLONES EN MATERIALES PARA RESTURAR LAS AULAS\n");
	printf("\n");
	printf("********************************************************************************************\n");
	printf("\n");
	printf("PATROCINADOR UTC - NATURALIZA - ");
	printf("\n");
	printf("\n");
	printf("********************************************************************************************\n");
	printf("\n");
	printf("Aca te dejamos un manual en caso de que aun no sepas como empezar a reciclar https://n9.cl/iq7c4\n");
	printf("\n");
	printf("********************************************************************************************\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("Esta es la lista de escuelas que pertenecen al Distrito SAN JOSE\n");
	printf("Por favor escoga el numero correspondiente a la escuela que desea ingresar:\n");
	printf("\n");
		
			while(true){
			printf("1. Escuela Marcelino Garcia Flamenco\n");
			printf("2. Escuela Republica de Nicaragua\n");
			printf("3. Escuela Omar Dengo\n");
			printf("4. Escuela Carolina Dent\n");
			printf("\n");
			printf("Escuela: ");
			scanf("%d", &escuela);
			getchar();
			printf("\n");
			if(escuela == 1 || escuela == 2 || escuela == 3 || escuela == 4){
				break;
			}else printf("***Escuela no encontrada, por favor digite una escuela valida \n");
			printf("\n");
		}
	
	do{	
		while(true){
			printf("Por favor escoga el tipo de material que va a reciclar:\n");
			printf("\n");
			printf("1. PLASTICO\n");
			printf("2. PAPEL\n");
			printf("3. VIDRIO\n");
			printf("4. ALUMINIO\n");
			printf("\n");
			printf("Tipo material: ");
			scanf("%d", &tipoMaterial);
			getchar();
			printf("\n");
			if(tipoMaterial == 1 || tipoMaterial == 2 || tipoMaterial == 3 || tipoMaterial == 4){
				break;
		}else printf("***Tipo de maerial NO VALIDO, ingrese una opcion de material correcta\n");
		printf("\n");
		}
		
		while(true){
			printf("Ingrese la cantidad de material en kilogramos que va a ingresar:\n");
			printf("\n");
			printf("Cantidad: ");
			scanf("%lf", &cantMaterial);
			getchar();
			printf("\n");
			if(cantMaterial>0){
				break;
		}else printf("***Cantidad NO VALIDO, ingrese cantidad mayor a 0 \n");
		printf("\n");
		}
		switch(tipoMaterial){
			case 1: puntosMaterial=2;
					contPlastico=contPlastico+cantMaterial;
					puntosTotalPlastico=contPlastico*puntosMaterial;
					break;
			case 2: puntosMaterial=4;
					contPapel=contPapel+cantMaterial;
					puntosTotalPapel=contPapel*puntosMaterial;
					break;
			case 3: puntosMaterial=6;
					contVidrio=contVidrio+cantMaterial;
					puntosTotalVidrio=contVidrio*puntosMaterial;
					break;
			case 4: puntosMaterial=10;
					contAluminio=contAluminio+cantMaterial;
					puntosTotalAluminio=contAluminio*puntosMaterial;
					break;
		}
		cantTotalMaterial=contPlastico+contPapel+contVidrio+contAluminio;
		puntosTotales=puntosTotalPlastico+puntosTotalPapel+puntosTotalVidrio+puntosTotalAluminio;
			
		printf("\nDesea ingresar otro material para reciclar? (S / N):\n");
        printf("\n");
        scanf("%c", &opcion);
        printf("\n");

	}while(opcion == 's' || opcion == 'S');	
	
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	printf("EL VALOR EN PUNTOS POR KILOGRAMO DE LOS MATERIALES RECICLADOS ES EL SIGUIENTE:");
	printf("\n");
	printf("-PLASTICO 2 PTS\n-PAPEL 4 PTS\n-VIDRIO 6 PTS\n-ALUMINIO 10 PTS\n");
	printf("\n");
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	printf("\n");
	switch(escuela){
			case 1: printf("-------------   Escuela Marcelino Garcia Flamenco  --------------");
					break;
			case 2: printf("-------------   Escuela Republica de Nicaragua   --------------");
					break;
			case 3: printf("-------------   Escuela Omar Dengo   --------------");
					break;
			case 4: printf("-------------   Escuela Carolina Dent   --------------");
					break;
					
		}
	printf("\n");
	printf("\n");	
	printf("******************************************************************\n");	
	printf("******************************************************************\n");
	printf("\n");	
	printf("La cantidad de plastico recolectado es de: %.2f",contPlastico);
	printf(" Kg\n");
	printf("La cantidad de papel recolectado es de: %.2f",contPapel);
	printf(" Kg\n");
	printf("La cantidad de vidrio recolectado es de: %.2f",contVidrio);
	printf(" Kg\n");
	printf("La cantidad de aluminio recolectado es de: %.2f",contAluminio);
	printf(" Kg\n");
	printf("\n");
	printf("******************************************************************\n");
	printf("\n");	
	printf("La cantidad total de material reclicado es de: %.2f",cantTotalMaterial);
	printf(" Kg\n");
	printf("\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("Total del puntos obtenidos por plastico recolectado es de: %.2lf \n", puntosTotalPlastico);
	printf("Total del puntos obtenidos por papel recolectado  es  de : %.2lf \n",   puntosTotalPapel);
	printf("Total del puntos obtenidos por vidrio  recolectado es de : %.2lf \n",   puntosTotalVidrio);
	printf("Total del puntos obtenidos por aluminio recolectado es de: %.2lf \n", puntosTotalAluminio);
	printf("\n");
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("\n");
	printf("La totalidad de puntos obtenidos es de: %.2lf ", puntosTotales);
	printf(" pts\n");
	printf("\n");
	printf("******************************************************************\n");
	printf("******************************************************************\n");
	printf("\n");
	printf("\n");
	if (puntosTotales>=100 && puntosTotales<500) {
		printf("Su escuela ha ganado 100.000 colones canjeables en materiales de ferreteria para restaurar las aulas.");
	}else{
		if (puntosTotales>=500 && puntosTotales<800) {
		printf("Su escuela ha ganado 150.000 colones canjeables en materiales de ferreteria para restaurar las aulas.");
	}else{
		if (puntosTotales>=800 && puntosTotales<1000) {
		printf("Su escuela ha ganado 250.000 colones canjeables en materiales de ferreteria para restaurar las aulas.");
	}else{
		if (puntosTotales>=1000 && puntosTotales<50000) {
		printf("Su escuela ha ganado 300.000 colones canjeables en materiales de ferreteria para restaurar las aulas.");
	}else{
		if (puntosTotales<100) {
		printf("Gracias por el esfuerzo de su grupo, SIGAN RECICLANDO, pasen a la mesa de premios de consolacion");
	}else{
	}
	}
	}
	}
	}				

	printf("\n");
	printf("\n");
	system("pause");
	return 0;
}
