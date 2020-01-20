Autor: Carlos Sangu�a

Descripci�n del problema: Realizar un codigo en C++ el cual tras recibir un entero N, este se le sea calculado su secuencia de Collatz y sea retornado en un objeto Json.

Descripci�n de la soluci�n: Se cre� un archivo main.cpp con el cual se obtenie el n�mero N por entrada estandar, el cual es enviado a una acci�n recursiva encaragada de calcular la secuencia de collatz, dicha funci�n determina si el n�mero es par y en caso afirmativo divide el mismo entre 2, en caso contrario se multiplica por 3 y y se le suma 1, ese n�mero resultante vuele a ser enviado a la funci�n Collatz hasta que dicho n�mero sea 4. 

La funcion collatz es la encargada a su vez de imprimir el n�mero recibido e ingresarlo al json. 
https://github.com/nlohmann/json
Para las funciones de json se utiliz� una librerira obtenida a trav�s del siguiente enlace: https://github.com/nlohmann/json.

Cabe destacar que se opto por una funci�n recursiva debido a que dependiendo del n�mero la secuencia de Collatz puede llegar a ser una cadena muy larga.