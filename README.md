# trabajo_final_IPO
	TRABAJO FINAL DE IPO(PRACTICA)
	
JUEGO:
	BLACKJACK(21)

INTEGRANTES:
	Maria Alejandra Cornejo Lupa
	CCOMP2-1

INSTRUCCIONES:

El juego comienza instanciando un objeto de la clase player_person y player_mesa.
El usuario asume el papel de player_person, el cual comienza con una cantidad de 20 dolares para jugar.
El usuario puede pedir cartas mientras sea su turno y no pase de 21.
Si se pasa se considera que el jugador "voló" y  perdió lo apostado
Y gana cuando la suma de sus cartas es mayor que el de la mesa, de ser así el juagador gana el doble de lo que aposto.
El rol del player_mesa es asumido por el computador, se ha tratado de simular una IA muy precaria pero que nos ayuda a mantener un flujo en el juego propuesto.
El juego termina cuando al jugador ya no le quedan dolares que apostar o cuando el quiera salir.


# trabajo_final_IPO
ELEMENTOS:
namespace_interfaz.h
	Es una "clase estatica",que agrupa las funciones para el interfaz gráfico

mano.cpp
	es una clase que contiene un vector de la STL<vector> y un iterador, donde para el manejo del mismo se usa las funciones que la STL nos brinda.
	Posee funciones, que retornan enteros y booleanos, metodos para la interaccion con el vector de la clase. así como una sobrecarga del operador "<" Para simular la comparación entre dos objetos de la clase mano.

baraja.cpp
	Incluimos librerias como : #include <cstdlib> y #include <ctime> para las funciones randonicas.
	Es una clase que contiene un objeto de la clase mano.
	tiene dos funciones principales escoger una carta al azar y  poder asignarla por referencia a una mano.

player.cpp
  Hay una clase padre : Player
  Y dos subclases mesa y person
  Ambos heredan el atributo dinero de su padre
  y se vio la necesidad de hacerlos en clases separadas y no como instancias del mismo objeto porque poseen funciones diferentes para su juego pero a la vez coparten atributos como es el int dinero.
  
juego.cpp
  Es  una clase publica  cuya funcion principales son la partida() y win_two_players() que simulan el flujo del juego propuesto. ambas reciben todos los paramentros necesarios(player_mesa a,player_person b,bool win,int apuesta) 

Cabe resaltar que cada uno de los files cuenta con un main comentado para comprobar que las funciones estan funcionando correctamente.
	
PROBLEMAS:

Se manejo el problema del retorno de mas de un dato .Se soluciono con los pasos de informacion por referencia y punteros.

Ademas de las variables booleanas para mantener un orden en el juego

Y la funcion randonica no escapaba de su ambito por lo que se simula un ambiente propio para la funcion
