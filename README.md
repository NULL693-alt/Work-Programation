Nuestro trabajo trata sobre un codigo con operaciones matematicas como la Suma, resta y multiplicacion.
Donde el codigo esta dividivo en 3 archivos aunque el trabajo era de solo 2 archivos.
Un archivo es una en .cpp y el otro en .h .
En el archivo .h lo que se hace es simplemente lo que es la declaracion de funciones.
Donde se uso directivas como #ifndef, #define y #endif.
En uno de los archivos .cpp es donde se va a definir las funciones que declare en el .h y para eso tengo que usar un #include "operaciones.h".
El "operaciones.h" sirve para llamar las funciones declaradas en el archivo .h al que se le conoce como archivo de cabezera.
Volviendo al .cpp donde llame a las funciones del .h en cada funcion coloco un "Return (con la respectivas variables declaradas y el signo de la respectiva operacion);" .
Ya en el ultimo archivo que es el 'main.cpp', en este es el que se usara la funcion main, como un programa sencillo de toda la vida con el #include <iostream> y adicional el #include "operaciones.h".
El operaciones.h es para llamar las funciones declaradas, despues declaramos en el archivo.cpp las variables que pueden ser cualquier letra, en nuestro caso es la "x" y "y".
Ambas variables les damos un valor fijo, las igualamos a que "int x = 10" y que "int y = 4".
Ya para finalizar llamando a la funcion "main", dentro de ella imprimimos en pantalla los resultados, cada una de ellas ya sea suma, resta y multiplicacion.
Se lo hizo con los "cout<<". cout << "El resultado de la suma es: " << sumar(x, y) << endl;
En cada una se llamdo a cada operacion que usamos.
