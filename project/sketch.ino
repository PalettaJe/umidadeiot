#include "DHT.h" 
#define DHTPIN 15 // Pino de dados conectado ao DHT22 
#define DHTTYPE DHT22 // Define o tipo do sensor (DHT22) 
DHT dht(DHTPIN, DHTTYPE); 
void setup() { 
  Serial.begin(9600); 
  dht.begin(); 
  
  // Simulação da conexão com Wi-Fi e MQTT 
  Serial.println("Conectando ao Wi-Fi..."); 
  delay(1000); 
  Serial.println("Conectado!");
  Serial.println("Conectando ao broker MQTT..."); 
  delay(1000); 
  Serial.println("Conectado ao broker MQTT!"); 
  } 
  
  void loop() {
     float temperatura = dht.readTemperature(); 
     float umidade = dht.readHumidity(); 
     
     if (isnan(temperatura) || isnan(umidade)) { 
      Serial.println("Falha ao ler o sensor DHT!"); 
      return; 
      } 
      
      // Simulação de mensagem enviada via MQTT 
      Serial.println("{"); 
      Serial.print("\"temperatura\": "); 
      Serial.print(temperatura); 
      Serial.println(","); 
      Serial.print("\"umidade\": "); 
      Serial.print(umidade); 
      Serial.println("\n}"); 
      delay(5000); // Aguarda 5 segundos para a próxima leitura 
      
      }
      {void loop() {
   float temp = dht.readTemperature(); 
   float hum = dht.readHumidity(); 
   // Simulando envio MQTT com JSON 
   String payload = "{ \"temperatura\": " + 
   String(temp) + ", \"umidade\": " + 
   String(hum) + " }"; 
   Serial.println("Publicando no tópico MQTT: /sensor/dht22"); 
   Serial.println(payload); 
   delay(2000); 
   }