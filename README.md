# Setup para Pocket Gone

Tras el pago de la inscripción reciben un link con un video paso a paso de este procedimiento.

1. Instalar el software Arduino IDE https://www.arduino.cc/en/software

2. Abrir el Arduino IDE e instalar la librería ESp2sota (click en el icono de libros de la izquierda, tipear "ESp2sota", instalar)

3. Descargar [getMacOTA.ino](https://github.com/ronibandini/tallerPocketGone/blob/main/getMacOta.ino), abrirlo con el Arduino IDE (va a crear una carpeta), conectar la placa NodeMCU ESP-32S con un cable micro USB, seleccionar el puerto USB respectivo y el tipo de placa "DOIT ESP32 DevKit1" y subir el sketch

4. Usando la computadora o el teléfono, buscar en las redes WiFi PocketGone:00:00:00:00:00 y anotar el MAC (los números que aparecen separados por :)

5. Solicitar el software del Pocket Gone cargando los datos de la compra del taller y el MAC en el link que figura en el email

Importante: el software se entrega como un BIN compilado para la placa ESP32 informada. Si llegaran a necesitar un cambio de placa, eso tiene un costo ya que es un procedimiento manual.

Junto al envío del BIN compilado van a recibir los archivos para impresión 3d y el link al paso 2, que contiene el montaje del circuito y el gabinete




