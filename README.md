# Projeto Final - Sistemas Embarcados 

## Tema: Monitoramento de Umidade do Solo com Alerta Automático (Simulado via MQTT) 

### Descrição 

Este projeto simula um sistema de monitoramento de umidade do solo utilizando um sensor de umidade e um LED como atuador, com envio de dados via MQTT (simulado). O objetivo é representar um sistema de irrigação inteligente, capaz de alertar automaticamente quando o solo estiver seco. 

A simulação foi feita na plataforma [Wokwi](https://wokwi.com/), utilizando o microcontrolador ESP8266 (NodeMCU). Como o Wokwi não suporta MQTT real, as mensagens foram simuladas via `Serial.println()`, representando o envio de payloads em JSON. 

--- 

### Componentes Utilizados (Virtuais) 
- 
- NodeMCU ESP8266 
- Sensor de Umidade do Solo (YL-69) 
- LED vermelho 

--- 

### Funcionamento 

1. O microcontrolador simula a conexão com o Wi-Fi e broker MQTT via mensagens no console. 
2. Lê os valores do sensor de umidade do solo. 
3. Quando a umidade está abaixo de 30%, o LED é aceso e uma mensagem de alerta é "publicada" no tópico MQTT simulado. 
4. Se a umidade estiver adequada, apenas os dados são enviados. 
5. Todo o envio de dados e alertas é simulado via `Serial.println()`. 


--- 

### Código 

[Clique aqui para ver o código](./codigo.ino) 


Ou acesse o projeto diretamente no Wokwi: 

[[link do projeto no Wokwi] ](https://wokwi.com/projects/432073488463801345)

--- 
![Captura de Tela 2025-05-27 às 00 04 35](https://github.com/user-attachments/assets/c5b9f6f4-4aff-4419-af3f-e9c998eade5c)


### Fluxograma do Funcionamento
