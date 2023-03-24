#include <Arduino.h>
int numero = 10;
void loop(){
  Serial.print("En loop: numero =");//en loop() numero =10
  Serial.println(numero);
  duplicar(&numero); //pasamos la direccion de numero ala funcion 
}

void duplicar(int *punteroNumero){
  *punteroNumero = *punteroNumero *2;
  Serial.print("En duplicar()=punteroNumero=");
  Serial.println(*punteroNumero);
}