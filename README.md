![PXL_20250123_215917301](https://github.com/user-attachments/assets/5f207de2-f029-4c2a-beee-f13e466c583d)

# Setup para Pocket Gone

Tras el pago de la inscripción reciben un link con un video paso a paso de este procedimiento.

1. Instalar el software Arduino IDE https://www.arduino.cc/en/software

2. Abrir el Arduino IDE e instalar la librería ESp2sota (click en el icono de libros de la izquierda, tipear "ESp2sota", instalar), luego ir a Archivo, Preferencias, Placas adicionales y cargar: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

3. Descargar [getMacOTA.ino](https://github.com/ronibandini/tallerPocketGone/blob/main/getMacOta.ino), abrirlo con el Arduino IDE (va a crear una carpeta), conectar la placa NodeMCU ESP-32S con un cable micro USB, seleccionar el puerto USB respectivo y el tipo de placa "DOIT ESP32 DevKit1" y subir el sketch

4. Usando la computadora o el teléfono, buscar en las redes WiFi PocketGone:00:00:00:00:00 y anotar el MAC (los números que aparecen separados por :)

5. Solicitar el software del Pocket Gone cargando los datos de la compra del taller y el MAC en el link que figura en el email

Importante: el software se entrega como un BIN compilado para la placa ESP32 informada. Si llegaran a necesitar un cambio de placa, eso tiene un costo ya que es un procedimiento manual.

Junto al envío del BIN compilado van a recibir los archivos para impresión 3d y el link al paso 2, que contiene el montaje del circuito y el gabinete

# Placa ESP32 con USBC

Un alumno del taller virtual reportó haber utilizado un ESP32 con USBC, pieza F42-ESP32-CP2102-TYPEC Se consigue en AliExpress

# Algunos Pocket Gone que salieron del taller

![PocketGoneUruguay](https://github.com/user-attachments/assets/d0d42cdd-2a53-4920-a716-7157fbde7380)

![PocketGoneNaranja](https://github.com/user-attachments/assets/c4475be1-280f-4bef-987e-fcd33faa13c4)

![PocketGoneEduardoSanMartin](https://github.com/user-attachments/assets/d2fb5b5b-baf3-4d6e-ba29-49794cda4a63)

![PocketConCustomPCBUav](https://github.com/user-attachments/assets/416dcded-95e7-4cf8-8ffe-16f74d5da6d1)

![PocketNegro](https://github.com/user-attachments/assets/5fc81357-3be2-4aa2-a21a-de99eb035241)

![PocketAuto](https://github.com/user-attachments/assets/257e4322-da4f-4368-8e51-4d537dc3f114)

![PocketCustom](https://github.com/user-attachments/assets/81d68306-f2e9-4238-8e35-a6926cecb764)









