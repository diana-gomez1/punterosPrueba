#include <Arduino.h>


 int numero = 10;
 void setup() {

 Serial.print(numero);

}

void duplicar(int *punteroNumero){
  *punteroNumero = *punteroNumero *2;
    Serial.print("En duplicar()=punteroNumero=");
    Serial.println(*punteroNumero);
} 

void loop(){
  Serial.print("En loop: numero =");//en loop() numero =10
  Serial.println(numero);
  duplicar( &numero); //pasamos la direccion de numero ala funcion 
  char institucion[]= {'U','C','E','V','A','\n'};
    for (int i = 0; i < 6; i++)
      Serial.print(institucion[i]);
        //Serial.print(*(institucion + i));
      //  Serial.print(*(institucion+ i * sizeof(char)));
      Serial.flush();
      exit(0);
   
}

