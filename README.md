### **ÁRBOL BINARIO**

------------

***Programa de consola utilizando la Estructura no Lineal Árbol ***

------------

Este programa fue realizado en el lenguaje de programación C++, asimismo el compilador utilizado fue Dev C++, el código fuente esta anexado junto con este archivo, pero aqui mismo se describe gran parte del código fuente, por último, se presenta unas capturas de pantalla de la ejecución del programa para comprobar que efectivamente el programa funciona correctamente.

Concepto de árbol binario en programación:
> Un  árbol  consta  de  un  conjunto  finito  de  elementos,  llamados  nodos  y  de  un  conjunto finito de líneas dirigidas, llamadas ramas, que conectan los nodos.
Un árbol binario es un conjunto finito de cero o más nodos, tales que:

> - Existe un nodo denominado raíz del árbol.
- Cada nodo puede tener 0, 1 o 2 subárboles, conocidos como subárbol izquierdo y subárbol derecho.

------------

La siguiente captura de pantalla se trata de la creación de una estructura llamada **nodo_alum**, la cual nos servirá para almacenar los datos que ingresa el usuario de cada alumno, como por ejemplo el nombre, numero de control, apellidos, entre otros. Por otro lado tambien contiene punteros, asimismo contiene variables pero esta vez no son del tipo primitivo sino se trata del tipo **nodo_alum**.

![imagen](https://user-images.githubusercontent.com/71055467/97678395-5b3bf680-1a59-11eb-9c84-9c92701066de.png)

La creación de un puntero de tipo **nodo_alum**, es fundamental para la creación de variables como veremos más adelante. 

![imagen](https://user-images.githubusercontent.com/71055467/97679319-bc17fe80-1a5a-11eb-86ba-5f410a6930f9.png)

Las funciones son esenciales en este programa, como es un programa algo complejo, para que sea más entendible cada proceso, es por eso que se recurrió a la utilización de funciones, las cuales se encargan de realizar una parte del programa, en la siguiente captura se pueden ver que estan siendo declarados ya que más adelante serán creados y llamados desde otras funciones.

![imagen](https://user-images.githubusercontent.com/71055467/97679787-537d5180-1a5b-11eb-8087-dd17266c6d1f.png)

La primer función que aparece en este programa es del menú y se encarga de realizar es presentar un menú de opciones y conforme a lo que el usuario digite se ejecutara un caso u otro y por ende en los dos primeros casos pide un número de control que será el elemento del árbol binario, y despues se manda a llamar la función respectiva para que se ejecuten.

![imagen](https://user-images.githubusercontent.com/71055467/97680309-19f91600-1a5c-11eb-9eb6-58a0a3dda059.png)
![imagen](https://user-images.githubusercontent.com/71055467/97680345-2da47c80-1a5c-11eb-9992-b72d310c6cef.png)

En el  siguiente screenshot se muestra la creación de las variables, es decir, el programa pide datos al usuario acerca del alumno como su nombre, apellido, carrera, entre otras más, y conforme va ingresando los datos, este se va guardando en cada una de las variables declaradas anteriormente en la estructura. 

![imagen](https://user-images.githubusercontent.com/71055467/97681349-76a90080-1a5d-11eb-98aa-d6f3310a5c1f.png)

Una de las funciones principales de un árbol es insertar elementos, y en este caso trataremos de ello. La captura siguiente trata de la creación de la función **insertar**, y como lo hemos dicho se encarga de agregar los elementos al árbol, asimismo esta recibe un parámetro de tipo entero, en este caso lo nombramos como **control1**, y no es más que el elemento que formará parte del árbol.

![imagen](https://user-images.githubusercontent.com/71055467/97684743-75c49e80-1a5e-11eb-840b-7cdd70fd35be.png)

Otra de las funciones principales es eliminar un elemento del árbol, para ello, en este  programa hemos creado dicha función en la que recibe ciertos parámetros, como anteriormente en el caso 2 el programa pide un dato que se desea eliminar, en esta parte es donde el programa recibe datos de las funciones de búsqueda que se describen más adelante, son  tres funciones y cada una de ellas se encarga de hacer una busqueda en cada subárbol tanto derecho como izquierdo, y el último en el nodo padre. Si el elemento buscado no se encuentra en ninguno de los subárboles, simplemente imprime un mensaje por consola,  diciendo que no ha sido posible encontrar dicho dato pero en  caso contrario se procede a las sentencias del siguiente if.

![imagen](https://user-images.githubusercontent.com/71055467/97687554-3c406300-1a5f-11eb-845c-b87fad32ca3a.png)

Como un árbol binario tiene la  característica  de  que  los  valores  de  cualquier  subárbol izquierdo son menores que el valor de su nodo padre, y que los valores de cualquier subárbol derecho son mayores que el valor de su nodo padre, es por ello que para eliminar un elemento tiene que recorrer cada uno de los subárboles y del nodo padre, para hacer más fácil las tareas, se dividió en tres partes. La primera función busca el elemento digitado del subárbol izquierdo y si la búsqueda es satisfactoria elimina dicho elemento.

![imagen](https://user-images.githubusercontent.com/71055467/97691111-875c7500-1a63-11eb-94cb-9739c434ff2d.png)

La segunda función se trata de buscar el elemento digitado en el subárbol derecho, y pasa lo mismo que en el anterior, si lo encuentra lo elimina y manda un mensaje por consola diciendo que el dato ha sido eliminado.

![imagen](https://user-images.githubusercontent.com/71055467/97691346-e28e6780-1a63-11eb-91ee-02a4214eb245.png)

La última función de búsqueda se encarga de buscar el elemento digitado por el usuario en el nodo padre y si el elemento aparece este lo prepara para que sea eliminado por la función eliminar.

![imagen](https://user-images.githubusercontent.com/71055467/97692899-fe930880-1a65-11eb-8fb3-25474c14f69d.png)

Para imprimir los elementos del árbol se utiliza una función específica para esta tarea y realiza ciertos recorridos para poder imprimir todos los elementos en un orden que sea entendible por el usuario.

![imagen](https://user-images.githubusercontent.com/71055467/97693107-44e86780-1a66-11eb-9aee-e58f89b93cbe.png)

Como en todos los programas la función main es importante debido a que es de donde parte la ejecución de cualquier programa, es por ello que aqui no es la excepción y en esta parte se encarga de llamar la función menu la cual seguirá una cadena de ejecución con las demás funciones hasta llegar a la última.

![imagen](https://user-images.githubusercontent.com/71055467/97693262-88db6c80-1a66-11eb-8dbe-13970ffaaabd.png)

------------

------------



La siguienta parte y más importante para esta práctica es la ejecución del programa para comprobar que todo lo explicado anteriormente es correcto.

Como de costumbre también se presentan las capturas por partes de la ejecución.

Al iniciar la ejecución nos presenta una impresión por consola del menú de opciones.

![imagen](https://user-images.githubusercontent.com/71055467/97694856-ce009e00-1a68-11eb-9690-ca85f40b928a.png)

Como hemos digitado 1 nos pide un número de control que en este caso será el elemento que formará parte del árbol, a continuación se presenta la captura de lo dicho. Despues se encarga de pedir datos del usuario, en este caso de un alumno (Esto fue opcional ya que la materia consiste en estructura de datos).

![imagen](https://user-images.githubusercontent.com/71055467/97695089-1cae3800-1a69-11eb-8662-6a366e55f8a9.png)

![imagen](https://user-images.githubusercontent.com/71055467/97695374-8f1f1800-1a69-11eb-94c6-2493243d6222.png)

Como es el primer elemento que hemos ingresado este  se situará en el nodo padre. Ahora digitamos un número menor a 5 y vemos lo que pasa.

![imagen](https://user-images.githubusercontent.com/71055467/97695462-b0800400-1a69-11eb-995f-d7b13f6d2a17.png)

![imagen](https://user-images.githubusercontent.com/71055467/97695506-c4c40100-1a69-11eb-82d8-fb373e149832.png)

![imagen](https://user-images.githubusercontent.com/71055467/97695547-d86f6780-1a69-11eb-904a-56110a20c877.png)

Para ver lo que sucede, elegimos la opción 3 que nos imprime el árbol con los elementos que hemos seleccionado.

![imagen](https://user-images.githubusercontent.com/71055467/97695670-048ae880-1a6a-11eb-85d0-2ce57ec25222.png)

![imagen](https://user-images.githubusercontent.com/71055467/97695712-1076aa80-1a6a-11eb-9131-285c38042c91.png)

Como el 4 es menor a 5 este se situa en la parte de adelante hacia abajo, si fuera un número mayor a 5 este estaría en la parte de adelante hacia arriba, para verlo vamos a ingresar otro elemento y mostraremos la captura del resultado,

![imagen](https://user-images.githubusercontent.com/71055467/97695912-65b2bc00-1a6a-11eb-8d54-d5cf4eae1f71.png)

![imagen](https://user-images.githubusercontent.com/71055467/97695932-6cd9ca00-1a6a-11eb-8b6f-f92bd01f2429.png)

![imagen](https://user-images.githubusercontent.com/71055467/97696008-8ed34c80-1a6a-11eb-8962-d591faba150e.png)

![imagen](https://user-images.githubusercontent.com/71055467/97696035-998de180-1a6a-11eb-817a-7c5c03975aff.png)

![imagen](https://user-images.githubusercontent.com/71055467/97696087-a4487680-1a6a-11eb-9fb2-05c59f42546b.png)

Como vemos efectivamente se ha impreso lo que hemos dicho anteriormente, y con esto comprobamos que si se trata de un programa en donde se hace uso de un árbol binario, ya que cumple con las condiciones necesarias.

Ahora si ingresamos un número que está entre el 5 y el 7 este número formará parte del subárbol 7, esto lo podemos ver en las capturas siguientes.

![imagen](https://user-images.githubusercontent.com/71055467/97696391-2042be80-1a6b-11eb-927e-c9b819878129.png)

![imagen](https://user-images.githubusercontent.com/71055467/97696404-289af980-1a6b-11eb-8965-a4e112d93495.png)

![imagen](https://user-images.githubusercontent.com/71055467/97696461-3cdef680-1a6b-11eb-9447-83c391a3bb62.png)

![imagen](https://user-images.githubusercontent.com/71055467/97696786-ae1ea980-1a6b-11eb-85a3-de716ed613b1.png)

![imagen](https://user-images.githubusercontent.com/71055467/97696811-b840a800-1a6b-11eb-848f-4ff9c4ac916c.png)

Vemos en la última captura que el número 6 se ha colocado en la parte adelante hacia abajo del número 7 lo que quiere decir que es correcto.

Para tener un panorama más claro acerca de la lo que se trata un árbol de forma gráfica, ingresaremos unos elementos más e imprimiremos el resultado final que es el árbol.

![imagen](https://user-images.githubusercontent.com/71055467/97697118-2b4a1e80-1a6c-11eb-9711-3f3aedf3dbad.png)


- Se ingresa el número 3

![imagen](https://user-images.githubusercontent.com/71055467/97697177-4157df00-1a6c-11eb-8e91-418bdeeadd3e.png)



- Se ingresa el número 9

![imagen](https://user-images.githubusercontent.com/71055467/97697238-56cd0900-1a6c-11eb-812b-2d53a11302f5.png)



- Se ingresa el número 2

![imagen](https://user-images.githubusercontent.com/71055467/97697432-9bf13b00-1a6c-11eb-9ec8-3171ef7a1898.png)



- Impresión del árbol

![imagen](https://user-images.githubusercontent.com/71055467/97697479-af9ca180-1a6c-11eb-9078-0cc4d901546f.png)

![imagen](https://user-images.githubusercontent.com/71055467/97697529-baefcd00-1a6c-11eb-9401-4c98655c4492.png)

Con la impresión de los nuevos elementos podemos ver que ya tiene una estructura más entendible, cada elemento excepto el 5 pertenece a un subárbol, por ejemplo el 4 y 7 como uno es menor y el otro mayor a 5 respectivamente, se derivan del nodo padre que es 5, el número 3 como es menor que 4 aparece en la parte de adelante hacia abajo y el 2 se deriva del 3 debido  a que también es menor, pasa lo mismo con el 6 y 9, ambos son subárboles del nodo 7 porque uno es menor y el otro mayor a 7.

------------


------------


En conclusión, lo que aprendimos en la realización de este programa es un buen conocimiento, ya que es un tema diferente a los anteriores porque ya no se trata de una estructura lineal sino todo lo contrario, por ende cada una de las funciones ya no funcionan de la misma forma por ejemplo cuando se desea recorrer los elementos del árbol, porque no se encuentral secuencialmente sino que estan dispersos los datos. 
