Autor: Carlos Sanguña

Descripción del problema: Realizar un codigo en C++ el cual tras recibir un entero N, este se le sea calculado su secuencia de Collatz y sea retornado en un objeto Json.

Descripción de la solución: Se creó un archivo main.cpp con el cual se obtenie el número N por entrada estandar, el cual es enviado a una acción recursiva encaragada de calcular la secuencia de collatz, dicha función determina si el número es par y en caso afirmativo divide el mismo entre 2, en caso contrario se multiplica por 3 y y se le suma 1, ese número resultante vuele a ser enviado a la función Collatz hasta que dicho número sea 4. 

La funcion collatz es la encargada a su vez de imprimir el número recibido e ingresarlo al json. 
https://github.com/nlohmann/json
Para las funciones de json se utilizó una librerira obtenida a través del siguiente enlace: https://github.com/nlohmann/json.

Cabe destacar que se opto por una función recursiva debido a que dependiendo del número la secuencia de Collatz puede llegar a ser una cadena muy larga.