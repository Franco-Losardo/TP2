# Compilacion
Una vez descomprimido el zip, posicionado en el directorio TP2, se debera correr el comando `make main valgrind`. Este comando compilara el programa y lo ejecutara con los flags correspondientes de valgrind.
En caso de solo querer compilarlo, podra hacerlo con `make` o `make main` y correr el programa con `./Andypolis`.

Los archivos `materiales.txt`, `ubicaciones.txt`, `edificios.txt` y `mapa.txt` tienen que ir dentro de la carpeta `archivos_de_texto` para el correcto funcionamiento del programa.
# Aclaraciones
Hemos decidido crear una sola clase de Material dado que no nos parecia razon suficiente el hecho de que cada material salude cuando es muy parecido para todos solo con una letra de diferencia.

Por otra parte, en cada hijo de la clase Edificio, implementamos un metodo para borrar las ubicaciones de dicho hijo ya que todos los objetos de un mismo tipo de edificio comparten un arreglo de subarreglos de ubicaciones. 
Por lo tanto, de haberlo hecho con el destructor de cada hijo, al destruir ese edificio se ejecuta su destructor eliminando TODAS las ubicaciones de los objetos de ese tipo de edificio.

Con respecto al diagrama UML, se adjunta en la entrega la foto del mismo. En caso de querer verlo un poco mejor y comentar, adjuntamos el link abajo de esta linea:

https://drive.google.com/file/d/10QP_w4DPnSijxQzi_Pl1jO2fF1Q0OxKr/view?usp=sharing
