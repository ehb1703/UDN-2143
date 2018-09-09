#include <stdio.h>
#include <conio.h>
main()
{
   clrscr();
   printf("Comparacion de 3 numeros\n");
   printf("EDGAR OSWALDO HERNANDEZ BARAJAS\n");

   int a,b,c;

   printf("Ingresa el primer valor\n");
   scanf("%d",&a);
   printf("Ingresa el segundo valor\n");
   scanf("%d",&b);
   printf("Ingresa el Tercer valor\n");
   scanf("%d",&c);

   
   if((a>b)&&(b>c))
     {
	printf("el Mayor es \n");
	printf("%d\n",a);
   	printf("el Medio es \n");
   	printf("%d\n",b);
   	printf("el menor es \n");
	printf("%d",c);
     }

   if((a>b)&&(b<c))
     {
   	printf("el Mayor es \n");
	printf("%d\n",a);
	printf("el Medio es \n");
	printf("%d\n",c);
	printf("el menor es \n");
	printf("%d\n",b);
     }
   if((a<b)&&(b>c))
     {
   	printf("el Mayor es \n");
	printf("%d\n",b);
	printf("el Medio es \n");
   	printf("%d\n",a);
   	printf("el menor es \n");
	printf("&d\n",c);
     }
   if((a<b)&&(b<c))
   {
   	printf("el mayor es \n");
	printf("%d\n",c);
   	printf("el medio es \n");
	printf("%d\n",b);
   	printf("el menor es \n");
	printf("%d\n",a);
   }
   getch();
   return 0;

}



//Prueba de cambios en un archivo
//Comentario de Miguel