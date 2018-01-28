/*
 * https://www.youtube.com/watch?v=sxtP16dAVno
 * 
 * Tuve problemas con el monitor, ejecute por consola
 * sudo chmod a+rw /dev/ttyACM0
 * no tuve exito.
 * Desconecte y volví a conectar el arduino a la maquina y salió andando
 */

#include <DHT.h>

int SENSOR = 2;
int temp, humedad;

DHT dht (SENSOR, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  humedad = dht.readHumidity();
  temp = dht.readTemperature();

  Serial.print("Temperatura: ");
  Serial.print(temp);
  Serial.print("°C Humedad: ");
  Serial.print(humedad);
  Serial.println("%");

  delay(1000);
}
