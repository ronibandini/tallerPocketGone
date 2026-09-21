<img width="1032" height="1394" alt="PocketGone5Carry" src="https://github.com/user-attachments/assets/0d00dc9a-d12e-4d05-a33a-c32a72a22a07" />

# 🔊 Pocket Gone — Taller y Soporte Técnico

**Centro de soporte técnico para alumnos del Taller de Pocket Gone**

[![GitHub](https://img.shields.io/badge/GitHub-tallerPocketGone-black?logo=github)](https://github.com/ronibandini/tallerPocketGone)
[![Website](https://img.shields.io/badge/Web-pocketgone.com-blue)](https://pocketgone.com/)
[![Current Version](https://img.shields.io/badge/Versi%C3%B3n-5-orange)](https://pocketgone.com/)

Pocket Gone es un dispositivo maker experimental para **diagnóstico de parlantes Bluetooth**, con funciones adicionales orientadas a pruebas con equipos propios.

Este repositorio funciona como **soporte técnico del taller**: armado, firmware, diagnóstico, resolución de problemas, preguntas frecuentes, fotografías y materiales relacionados.

> ⚠️ **Importante:** utilizá Pocket Gone únicamente con equipos propios o con autorización, y respetá la legislación local aplicable al uso del espectro radioeléctrico.

---

## 📚 Índice

* [🚀 Primeros pasos](#-primeros-pasos)
* [🆘 Soporte técnico](#-soporte-técnico)
* [📡 ¿Qué es Pocket Gone?](#-qué-es-pocket-gone)
* [📦 Cómo obtener un Pocket Gone](#-cómo-obtener-un-pocket-gone)
* [🧰 Especificaciones actuales](#-especificaciones-actuales)
* [🧩 Materiales del taller](#-materiales-del-taller)
* [💻 Firmware y software](#-firmware-y-software)
* [🖥️ Monitor Serie](#️-monitor-serie)
* [🧪 Modo diagnóstico V4/V4D](#-modo-diagnóstico-v4v4d)
* [🔧 Troubleshooting](#-troubleshooting)
* [🔥 10 temas más recurrentes](#-10-temas-más-recurrentes)
* [💬 Mensajes de soporte frecuentes](#-mensajes-de-soporte-frecuentes)
* [📷 Cómo reportar un problema](#-cómo-reportar-un-problema)
* [📐 Gabinete y archivos 3D](#-gabinete-y-archivos-3d)
* [🍑 Peach Cantenna](#-peach-cantenna)
* [❓ Preguntas frecuentes](#-preguntas-frecuentes)
* [📜 Versiones](#-versiones)
* [📜 Licencia y condiciones de uso](#-licencia-y-condiciones-de-uso)
* [🔗 Enlaces](#-enlaces)

---

# 🚀 Primeros pasos

Si acabás de armar tu Pocket Gone:

### 1. 🔧 Revisá el hardware

Verificá:

* ESP32 correctamente conectado.
* Módulo de radiofrecuencia correctamente conectado.
* GND común.
* Alimentación correcta.
* LED correctamente conectado.
* Pulsador correctamente conectado.
* Antena correctamente conectada.

### 2. 🔌 Conectá el ESP32 por USB

Usá un **cable USB que transmita datos**, no solamente alimentación.

### 3. 📥 Cargá el firmware

Seguí el procedimiento correspondiente a tu versión de Pocket Gone y a la placa ESP32 utilizada.

### 4. 🖥️ Abrí el Monitor Serie

En Arduino IDE:

**Tools → Serial Monitor**

Configuración:

```text
115200 baud
```

### 5. 🔘 Probá el botón

Presioná el botón y observá el Monitor Serie.

El Monitor Serie es una de las herramientas más importantes para diagnosticar:

* versión de software
* comunicación con el módulo RF
* reconocimiento del botón
* información de diagnóstico
* problemas de inicialización

### 6. 🆘 Si sigue sin funcionar

Buscá primero una solución en las Issues cerradas antes de abrir una nueva.

---

# 🆘 Soporte técnico

## Antes de abrir una Issue

1. 🔎 Buscá tu problema en las [Issues cerradas](https://github.com/ronibandini/tallerPocketGone/issues?q=is%3Aissue%20state%3Aclosed)
2. 📖 Consultá el [manual](https://www.scribd.com/document/895676548/Manual-de-Pocket-Gone)
3. 🖥️ Probá el Monitor Serie a **115200 baud**
4. 📷 Prepará fotografías claras del montaje
5. 📋 Copiá el mensaje completo del Monitor Serie

---

## 📝 Abrir una consulta

Usá el sistema de Issues del repositorio:

👉 [Abrir una nueva Issue de soporte](https://github.com/ronibandini/tallerPocketGone/issues/new/choose)

Elegí:

**🛠️ Soporte técnico**

El repositorio está destinado al soporte de alumnos del taller, tanto presencial como virtual.

---

## 📧 Contacto

También podés consultar por correo:

**[holapocketgone@gmail.com](mailto:holapocketgone@gmail.com)**

Sitio oficial:

👉 [pocketgone.com](https://pocketgone.com/)

---

# 📡 ¿Qué es Pocket Gone?

Pocket Gone es un proyecto **experimental y educativo** orientado al diagnóstico de parlantes Bluetooth.

Entre sus funciones se incluyen:

* 📶 detección de canales Bluetooth congestionados
* 🔎 detección de dispositivos Bluetooth en modo de pairing
* 📊 información de señal como RSSI en los modos compatibles
* 🔊 funciones de diagnóstico con parlantes propios
* 📡 experimentación con antenas externas
* 🧰 montaje y aprendizaje de hardware y firmware

La versión publicada actualmente en el sitio oficial es:

> **Pocket Gone 5 — Septiembre de 2026**

Pocket Gone **no se comercializa como producto terminado**. El proyecto se obtiene mediante el taller, que proporciona los materiales y la documentación necesarios para armarlo.

> ⚠️ Si encontrás un Pocket Gone ofrecido como producto comercial terminado, verificá cuidadosamente la procedencia.

---

# 📦 Cómo obtener un Pocket Gone

El sitio oficial propone obtener Pocket Gone mediante el **Taller Pocket Gone**.

El taller incluye:

* 🧩 lista de materiales
* 🎥 video paso a paso
* 💻 firmware compilado
* 📐 archivos para imprimir el gabinete
* 📖 manual
* 🆘 soporte técnico

No hace falta tener conocimientos avanzados de electrónica.

Para el armado básico se utilizan herramientas simples, principalmente:

* USB
* navegador
* destornillador

No es obligatorio disponer de una impresora 3D: el gabinete puede imprimirse por terceros o reemplazarse por un diseño propio.

👉 [Más información y taller](https://pocketgone.com/)

---

# 🧰 Especificaciones actuales

Información publicada para **Pocket Gone 5**:

| Característica                 | Especificación                           |
| ------------------------------ | ---------------------------------------- |
| 📦 Versión actual              | Pocket Gone 5                            |
| 📅 Fecha                       | Septiembre de 2026                       |
| 📏 Dimensiones                 | 39 × 70 × 32 mm                          |
| 📡 Antena                      | Rubber duck                              |
| 🔌 Alimentación                | USB-C                                    |
| ⚡ Fuente                       | 5 V DC                                   |
| 🔋 Alimentación portátil       | Smartphone / power bank                  |
| 💡 Indicadores                 | LED de alimentación y operación          |
| 📶 Banda de trabajo            | 2,4 GHz                                  |
| 🔎 Diagnóstico Bluetooth       | Sí                                       |
| 📊 Información de dispositivos | RSSI / MAC / nombre en modos compatibles |
| 📡 Antena externa              | Compatible                               |
| 🍑 Peach Cantenna              | Compatible como experimento              |
| 🧰 Gabinete                    | Archivos imprimibles disponibles         |

---

# 🧩 Materiales del taller

La propuesta actual del taller utiliza una cantidad reducida de componentes.

El sitio oficial indica aproximadamente **dos componentes principales, con un costo total orientativo cercano a US$15**, dependiendo del proveedor y del país.

Los componentes se pueden conseguir mediante:

* Amazon
* MercadoLibre
* casas de electrónica
* proveedores locales

Los precios y la disponibilidad pueden cambiar.

---

# 💻 Firmware y software

## Firmware compilado

Para determinadas versiones del taller se proporciona un archivo:

```text
.bin
```

Este firmware puede cargarse en el ESP32 mediante el procedimiento indicado en el taller.

---

## ⚠️ El archivo `.bin` no funciona como un sketch Arduino

El archivo compilado debe cargarse en la placa siguiendo el procedimiento correspondiente.

No es necesario modificar el firmware para realizar las pruebas habituales del taller.

---

## Pocket Gone V1: herramienta `getMacOta.ino`

En Pocket Gone V1 se utilizó el sketch:

```text
getMacOta.ino
```

Este programa permite obtener la dirección MAC de la placa y preparar el acceso para la actualización del firmware.

El flujo histórico de V1 utiliza la dirección:

```text
http://10.10.10.1/update
```

> ℹ️ Esta herramienta corresponde a versiones antiguas. No asumir que el procedimiento V1 es aplicable a Pocket Gone 5.

---

# 🖥️ Monitor Serie

El Monitor Serie de Arduino IDE es una herramienta fundamental para soporte.

Configuración:

```text
115200 baud
```

Si algo no funciona, **copiá el texto completo del Monitor Serie** en la Issue.

No envíes solamente una captura parcial cuando sea posible.

### Información especialmente útil

```text
Versión de software
Inicialización del ESP32
Inicialización del módulo RF
MAC autorizada
Pulsaciones del botón
Mensajes de error
```

---

# 🧪 Modo diagnóstico V4/V4D

> ⚠️ Esta sección corresponde específicamente a las versiones **V4/V4D** documentadas en el repositorio y el manual. No asumir que la misma conexión aplica a Pocket Gone 5.

El modo diagnóstico permite:

* 📶 estimar canales congestionados en 2,4 GHz
* 🔎 visualizar dispositivos Bluetooth Classic que anuncian disponibilidad de pairing
* 📊 consultar información como RSSI, MAC y nombre

---

## 🔌 Activación del modo diagnóstico

En las versiones documentadas como V4/V4D se utiliza un jumper entre:

```text
D25 ───── GND
```

Luego:

1. Conectá el ESP32 por USB.
2. Abrí el Monitor Serie.
3. Seleccioná:

```text
115200 baud
```

4. Observá la salida de diagnóstico.

> ℹ️ Retirá el jumper antes de utilizar el modo correspondiente al botón.

---

# 🔧 Troubleshooting

## 🔌 1. El ESP32 enciende pero la computadora no lo detecta

Probá:

* otro cable USB
* otro puerto USB
* otro equipo
* verificar el Administrador de dispositivos
* revisar si aparece un puerto COM/serial

### Causa muy frecuente

El cable USB puede proporcionar alimentación pero no datos.

---

## 🖥️ 2. No aparece ningún puerto COM

En Windows:

1. Abrí **Administrador de dispositivos**
2. Revisá **Puertos (COM y LPT)**
3. Desconectá y reconectá la placa
4. Observá si aparece o desaparece algún dispositivo

Si no aparece nada, el problema puede estar relacionado con:

* cable USB
* driver
* placa
* conector USB
* alimentación

Issue representativa:

👉 [#40 — Sin puertos COM](https://github.com/ronibandini/tallerPocketGone/issues/40)

---

## 🧩 3. No aparece "DOIT ESP32 DEVKIT V1"

Este es uno de los problemas más repetidos del taller.

Revisá que el paquete de placas ESP32 esté instalado correctamente.

En Arduino IDE:

```text
Tools
→ Board
→ Boards Manager
→ ESP32
```

Después verificá las placas disponibles.

Issues relacionadas:

* [#9 — Doit Dev Kit V1 no aparece](https://github.com/ronibandini/tallerPocketGone/issues/9)
* [#17 — No me aparece el DOIT ESP32 DevKit V1](https://github.com/ronibandini/tallerPocketGone/issues/17)
* [#27 — No aparece DOIT ESP32 DEVKIT V1](https://github.com/ronibandini/tallerPocketGone/issues/27)
* [#39 — No encuentra la placa](https://github.com/ronibandini/tallerPocketGone/issues/39)

---

# 📥 4. El firmware no carga

Los errores de carga pueden aparecer por:

* puerto incorrecto
* placa incorrecta
* cable USB
* modo de boot
* conexión con el puerto serial
* problemas con `esptool`
* imagen `.bin` incorrecta o dañada

### Prueba básica

```text
1. Desconectar ESP32
2. Cerrar Monitor Serie
3. Reconectar USB
4. Seleccionar puerto correcto
5. Seleccionar placa correcta
6. Volver a cargar
```

Issues relacionadas:

* [#10 — MD5 de archivo no coincide](https://github.com/ronibandini/tallerPocketGone/issues/10)
* [#31 — Error de carga](https://github.com/ronibandini/tallerPocketGone/issues/31)
* [#38 — Wrong boot mode detected](https://github.com/ronibandini/tallerPocketGone/issues/38)
* [#56 — ESPtool](https://github.com/ronibandini/tallerPocketGone/issues/56)

---

# 🌐 5. No puedo abrir `10.10.10.1/update`

Este problema corresponde principalmente al procedimiento histórico de actualización de versiones antiguas.

Revisá:

* que estés conectado a la red Wi-Fi correcta
* que el ESP32 haya creado su red
* que la URL sea exactamente la indicada
* que el firmware utilizado corresponda a tu versión

Issue relacionada:

👉 [#43 — Problema en cargar el código BIN](https://github.com/ronibandini/tallerPocketGone/issues/43)

> ℹ️ No utilizar este procedimiento como guía para Pocket Gone 5 salvo que la documentación específica de esa versión lo indique.

---

# 💡 6. No enciende el LED

Revisá:

* alimentación
* GND
* polaridad del LED
* resistencia
* conexiones de la placa
* cableado del botón, si forma parte del circuito del LED

Issue representativa:

👉 [#2 — No funciona LED](https://github.com/ronibandini/tallerPocketGone/issues/2)

---

# 🔘 7. El botón no funciona

Primero verificá el Monitor Serie.

Si el ESP32 funciona pero al pulsar el botón no aparece ninguna actividad:

* revisá el cableado
* verificá GND
* revisá el modelo de pulsador
* verificá los pines utilizados

Issues relacionadas:

* [#3 — No funciona botón](https://github.com/ronibandini/tallerPocketGone/issues/3)
* [#4 — Botón](https://github.com/ronibandini/tallerPocketGone/issues/4)
* [#29 — El botón de activación se pone engañoso](https://github.com/ronibandini/tallerPocketGone/issues/29)

---

# 📡 8. Problemas con el módulo RF

Revisá:

* VCC
* GND
* líneas de señal
* alimentación estable
* conectores
* soldaduras
* antena

No asumas inmediatamente que el problema está en el firmware.

Primero comprobá:

```text
Alimentación
↓
Cableado
↓
Inicialización
↓
Botón
↓
Módulo RF
```

Issue representativa:

👉 [#37 — Problemas en el funcionamiento luego del montado](https://github.com/ronibandini/tallerPocketGone/issues/37)

---

# 🔊 9. No silencia el parlante

Antes de abrir una Issue comprobá:

### Parlante

Debe tratarse de un parlante que esté:

* reproduciendo audio por Bluetooth
* utilizando Bluetooth Classic
* recibiendo efectivamente la música por Bluetooth

No es equivalente a:

* entrada AUX
* USB
* reproducción desde otra fuente

### Distancia

La geometría entre:

```text
Transmisor → Parlante → Pocket Gone
```

es importante.

El manual recomienda realizar las primeras pruebas con el transmisor y el Pocket Gone separados del parlante y probar distintas posiciones.

### También verificá

* antena
* módulo RF
* alimentación
* cableado
* Monitor Serie

Issues representativas:

* [#11 — No desconecta el parlante JBL](https://github.com/ronibandini/tallerPocketGone/issues/11)
* [#20 — No silencia la música, solo la entrecorta](https://github.com/ronibandini/tallerPocketGone/issues/20)
* [#26 — No corta la música](https://github.com/ronibandini/tallerPocketGone/issues/26)
* [#62 — Pocket Gone 3](https://github.com/ronibandini/tallerPocketGone/issues/62)

---

# 📉 10. Funciona, pero tiene muy poco alcance

El alcance depende de múltiples variables:

* potencia del módulo RF
* antena
* posición de la antena
* posición del transmisor
* posición del parlante
* posición del Pocket Gone
* obstáculos
* paredes
* humedad y otros factores de propagación
* alimentación del módulo

Si el alcance es muy bajo, probá primero:

1. otra posición
2. otra antena
3. otro módulo RF, si tenés uno disponible
4. conexiones más cortas
5. alimentación estable

Issue particularmente útil:

👉 [#46 — Aparentemente funciona, pero muy poco alcance](https://github.com/ronibandini/tallerPocketGone/issues/46)

---

# 📡 Antenas externas

Pocket Gone puede utilizar antenas externas compatibles.

Antes de cambiar la antena:

* verificá el conector
* verificá que sea compatible
* revisá que no exista un problema de cableado
* compará los resultados con la antena original

Issues relacionadas:

* [#8 — Antena](https://github.com/ronibandini/tallerPocketGone/issues/8)
* [#35 — Antenna doubt](https://github.com/ronibandini/tallerPocketGone/issues/35)
* [#36 — Mayor penetración en pared](https://github.com/ronibandini/tallerPocketGone/issues/36)

---

# 🔄 11. El dispositivo se reinicia

Si el ESP32 entra en un ciclo de reinicios:

Revisá especialmente:

* alimentación
* fuente de 5 V
* conexiones
* módulo RF
* cables Dupont
* cortocircuitos

Un comportamiento repetitivo de:

```text
LED ON
↓
LED OFF
↓
RESET
↓
LED ON
```

puede indicar que el sistema está reiniciándose o que la alimentación no es estable.

Issue relacionada:

👉 [#22 — Reseteo](https://github.com/ronibandini/tallerPocketGone/issues/22)

---

# 🔤 12. El Monitor Serie mues
