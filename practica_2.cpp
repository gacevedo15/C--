/**************************************
    * NOMBRE: #Gustavo#
    * PRIMER APELLIDO: #Acevedo#
    * SEGUNDO APELLIDO: #Alfonso#
    * DNI: #52021927K#
    * EMAIL: #gacevedoalfonso@gmail.com#
    ***************************************/

/*=============================================================================================================
                                              DIRECTIVA DE COMPILACI�N
==============================================================================================================*/
#include <stdio.h>


/*=============================================================================================================
                                              PARTE EJECUTABLE DEL PROGRAMA
==============================================================================================================*/
int main(){

  int lado;        /* Longitud del lado */
  int linea;       /* N�mero de linea */
  int blanco;      /* Contador de blancos */
  int caracter;    /* Contador de car�cteres */

  /*--------------------------------------------- LECTURA DEL LADO -------------------------------------------*/

  printf("�Lado del Rombo?");
  scanf("%d",&lado);
  printf("\n");

  /*-------------------------------------------- IMPRESI�N DEL ROMBO -----------------------------------------*/

  /*Si el lado introducido es 1, entonces printamos solo @*/
  if(lado==1){
    printf("@\n");
  }

  /*El lado del rombo nunca ser� mayor a 20*/
  if(lado>1&&lado<=20){

      /*--- Tri�ngulo superior ---*/

      /* Definimos el n�mero de lineas del Tri�ngulo superior */
      for(int linea=1;linea<=lado;linea++){

        /* Imprimimos la mitad IZQUIERDA del Tri�ngulo superior */
          /* Imprimimos espacios en blanco hasta el rombo*/
          for(int blanco=1;blanco<=(lado-linea);blanco++){
            printf(" ");
          }

          /* N�mero de caracteres de la parte superior IZQUIERDA */
          for(int caracter=1;caracter<=linea;caracter++){
            /* Caracter a imprimir */
            if(caracter%4==1){
              printf("@");
            }
            if(caracter%4==2){
              printf(".");
            }
            if(caracter%4==3){
              printf("o");
            }
            if(caracter%4==0){
              printf(".");
            }
          }

        /* Imprimimos la mitad DERECHA del Tri�ngulo superior */
          /* N�mero de caracteres de la parte superior DERECHA */
          for(int caracter=linea;caracter>=2;caracter--){
            /* Caracter a imprimir */
            if(caracter%4==2){
              printf("@");
              }
            if(caracter%4==3) {
              printf(".");
            }
            if(caracter%4==0){
              printf("o");
            }
            if(caracter%4==1){
              printf(".");
            }
          }
        printf ("\n");
        }

      /*--- Tri�ngulo inferior ---*/

      /* Definimos el n�mero de lineas del Tri�ngulo inferior */
      for(int linea=1;linea<=lado;linea++){

        /* Imprimimos la mitad IZQUIERDA del Tri�ngulo inferior */
          /* Imprimimos espacios en blanco hasta el rombo*/
          for(int blanco=1;blanco<=linea;blanco++){
            printf(" ");
          }

          /* N�mero de caracteres de la parte inferior IZQUIERDA */
          for(int caracter=1;caracter<=(lado-linea);caracter++){
            /* Caracter a imprimir */
            if(caracter%4==1){
              printf("@");
            }
            if(caracter%4==2){
              printf(".");
            }
            if(caracter%4==3){
              printf("o");
            }
            if(caracter%4==0){
              printf(".");
            }
          }

        /* Imprimimos la mitad DERECHA del Tri�ngulo inferior */
          /* N�mero de caracteres de la parte inferior DERECHA */
          for(int caracter=(lado-linea);caracter>=2;caracter--){
            /* Caracter a imprimir */
            if(caracter%4==2){
              printf("@");
            }
            if(caracter%4==3){
              printf(".");
            }
            if(caracter%4==0){
              printf("o");
            }
            if(caracter%4==1){
              printf(".");
            }
          }
          printf ("\n");
      }
  }
}
