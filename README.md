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

# 🆘 Soporte técnico

## Antes de abrir una Issue

1. 🔎 Buscá tu problema en las [Issues cerradas](https://github.com/ronibandini/tallerPocketGone/issues?q=is%3Aissue%20state%3Aclosed)
2. 📖 Consultá el [manual](https://pocketgone.com/read/manual.html)
3. 🖥️ Si ya cargaste el software y no funciona, conecta el cable USB a la computadora y abrí Arduino IDE, Monitor Serie a **115200 baud** o bien la app de Android Serial USB Terminal. Ahí vas a poder ver información de utilidad sobre el error

---

## 📝 Abrir una consulta

Usá el sistema de Issues del repositorio:

👉 [Abrir una nueva Issue de soporte](https://github.com/ronibandini/tallerPocketGone/issues/new/choose)

Elegí:

**🛠️ Soporte técnico**

El repositorio está destinado al soporte de alumnos del taller, tanto presencial como virtual.

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

La última versión es:

> **Pocket Gone 5 — Septiembre de 2026**

Pocket Gone **no se comercializa como producto terminado**. El proyecto se obtiene mediante el taller, que proporciona los materiales y la documentación necesarios para armarlo.

> ⚠️ Si encontrás un Pocket Gone ofrecido como producto comercial es una estafa.

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

# 🧪 Modo diagnóstico 

El modo diagnóstico permite:

* 📶 estimar canales congestionados en 2,4 GHz
* 🔎 visualizar dispositivos Bluetooth Classic que anuncian disponibilidad de pairing
* 📊 consultar información como RSSI, MAC y nombre

---

## 🔌 Activación del modo diagnóstico

Instalá un jumper entre:

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

---
---

# 🍑 Peach Cantenna

La **Peach Cantenna** es una antena externa experimental que puede utilizarse con Pocket Gone.

🎥 Tutorial:

👉 [Peach Cantenna — video](https://www.youtube.com/shorts/9D4QXmoz1AM)

También existen otras experiencias con antenas externas documentadas en el proyecto.

> ℹ️ El rendimiento de una antena depende de la geometría, conectores, cableado, posición y entorno. Una antena físicamente más grande no implica automáticamente un mejor resultado.

---

# ❓ Preguntas frecuentes

## ¿Hace falta saber electrónica?

No.

El taller está pensado para poder realizar el montaje siguiendo las instrucciones y el video paso a paso.

---

## ¿Necesito una impresora 3D?

No.

Podés imprimir el gabinete mediante un servicio externo o utilizar una solución propia.

---

## ¿Qué alimentación utiliza?

Pocket Gone 5 utiliza **USB-C y 5 V DC**.

Se puede alimentar con:

* smartphone 
* power bank
* fuente de 5 V

---

## ¿Pocket Gone funciona con cualquier parlante Bluetooth?

La función de diagnóstico/silenciamiento documentada está orientada a parlantes que reciben audio mediante **Bluetooth Classic**.

No debe asumirse el mismo comportamiento para:

* AUX
* USB
* otras fuentes de audio
* otras tecnologías inalámbricas

---

## ¿Pocket Gone puede abrir o desactivar un cierre de automóvil?

No.

Los sistemas de cierre remoto de vehículos normalmente operan en bandas distintas de la banda de 2,4 GHz utilizada por Pocket Gone.

---

## ¿Pocket Gone puede desactivar GPS o GSM?

No.

GPS y redes celulares utilizan otras bandas de frecuencia.

---

## ¿Pocket Gone bloquea Wi-Fi?

El funcionamiento de diagnóstico no debe interpretarse como un inhibidor general de Wi-Fi. La frecuencia de 5.8ghz no se ve afectada y la de 2.4 solo en ciertos canales y dejando una ventana de comunicación.

El sistema está orientado a experimentación y diagnóstico en el contexto específico documentado por Pocket Gone.

---

## ¿Por qué a veces no funciona cuando el teléfono está muy cerca del parlante?

Cuando el emisor está muy cerca del parlante puede resultar difícil o imposible disputar la señal.  

Probá modificando la posición de Pocket Gone.

Issue relacionada:

👉 [#61 — Información](https://github.com/ronibandini/tallerPocketGone/issues/61)

---

## ¿Por qué mi Pocket Gone funciona con una antena y no con otra?

Revisá:

* tipo de conector
* continuidad
* cable
* adaptación
* montaje
* posición

Issue relacionada:

👉 [#35 — Antenna doubt](https://github.com/ronibandini/tallerPocketGone/issues/35)

---

## ¿Por qué funciona durante unos segundos y después parece detenerse?

El ciclo de operación es 50 segundos versus 10 segundos de ventana.

---

# 📜 Versiones

Pocket Gone ha evolucionado en varias versiones.

| Versión | Fecha aproximada | Nota                           |
| ------- | ---------------- | ------------------------------ |
| Beta    | Diciembre 2024   | Primer desarrollo              |
| V1      | Febrero 2025     | Primera versión del taller     |
| V2      | Junio 2025       | Evolución de hardware/software |
| V3      | Agosto 2025      | Nueva iteración                |
| V4D     | Octubre 2025     | Diagnóstico ampliado           |
| V5      | Septiembre 2026  | Versión actual publicada       |

> ⚠️ Los procedimientos de firmware, pines y diagnóstico pueden cambiar entre versiones.

---

# 🎥 Videos y demostraciones

* 🎵 [Demostración de Pocket Gone](https://www.youtube.com/shorts/B_DeBmhiZeQ)
* 🍑 [Peach Cantenna](https://www.youtube.com/shorts/vaToShxM9N8)
* 🧱 [Prueba a través de paredes](https://www.youtube.com/shorts/JLdHBQQWPZI)
* 🏖️ [Demostración en playa](https://x.com/RoniBandini/status/1877721578584117513)

---

# 📖 Manual

👉 [Manual de Pocket Gone](https://pocketgone.com/read/manual.html)

El manual contiene información adicional sobre:

* montaje
* alimentación
* diagnóstico
* versiones
* antenas
* resolución de problemas
* modos de funcionamiento

---

# 🔗 Enlaces

| Recurso            | Enlace                                                                                                |
| ------------------ | ----------------------------------------------------------------------------------------------------- |
| 🌐 Sitio oficial   | [pocketgone.com](https://pocketgone.com/)                                                             |
| 💻 Soporte         | [tallerPocketGone](https://github.com/ronibandini/tallerPocketGone)                                   |
| 🆘 Issues cerradas | [GitHub Issues](https://github.com/ronibandini/tallerPocketGone/issues?q=is%3Aissue%20state%3Aclosed) |
| 📝 Nueva Issue     | [Abrir Issue](https://github.com/ronibandini/tallerPocketGone/issues/new/choose)                      |
| 📖 Manual          | [Manual de Pocket Gone](https://pocketgone.com/read/manual.html)              |

---

# 📜 Licencia y condiciones de uso

Pocket Gone es un proyecto **experimental y educativo**.

El proyecto no constituye un instrumento certificado de medición de RF y los resultados de diagnóstico no deben interpretarse como mediciones profesionales.

Cada usuario es responsable por:

* el uso del dispositivo
* el cumplimiento de las normas locales
* la utilización sobre equipos propios o autorizados
* cualquier modificación realizada al hardware o software

Consultá la legislación aplicable antes de utilizar cualquier equipo que pueda afectar comunicaciones inalámbricas.

Revisá el archivo [`LICENSE`](LICENSE) del repositorio para conocer las condiciones de distribución del código y materiales.

