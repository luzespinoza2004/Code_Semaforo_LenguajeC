#include <stdio.h>
#include <unistd.h>

//Definicion de los colores para mostrar en la consola
//Codigo de colores sacado de la pagina :https://www.somosbinarios.es/como-usar-colores-en-c/
#define LETRA_COLOR_ROJO_T "\x1b[31m"
#define LETRA_COLOR_VERDE_T "\x1b[32m"
#define LETRA_COLOR_AMARRILLO_T "\x1b[33m"

//Prototipo Funcion para efectuar las acciones de las luces de mi semaforo
void Funcion_MostrarLuzSemaforo(char *mensaje_semaforo, int tiempo_semaforo);
//Prototipo de la Funcion para efectuar las llamadas a las luces de mi semaforo
void Llamadas_Luces_Semaforo();
//Funcion principal
int main() {
	    
	//Ciclo para simular el funcionamiento continuo
    while(1){
    	Llamadas_Luces_Semaforo();
    }
  
    return 0;
}
//Funcion para efectuar las acciones de las luces de mi semaforo
void Funcion_MostrarLuzSemaforo(char *mensaje_semaforo, int tiempo_semaforo){
	//Se imprime el mensaje de cual luz de nuestro semaforo esta encendida
	printf("%s\n",mensaje_semaforo);
	//Con sleep se simula el paso del tiempo y las transiciones entre las luces.
    sleep(tiempo_semaforo);
}
//Funcion para efectuar las llamadas a las luces de mi semaforo
void Llamadas_Luces_Semaforo(){
	//Definicion de las variables constantes de los Tiempos de los colores del semaforo
	const int tiempo_semaforo_verde = 20;
	const int tiempo_semaforo_roja = 15;
	const int tiempo_semaforo_amarrilla = 5;
	//Definicion de las variables de los mensajes de los colores del semaforo
	char mensaje_semaforo_verde[] = "Luz Verde encendida!";
	char mensaje_semaforo_roja[] = "Luz Roja encendida!";
	char mensaje_semaforo_amarrilla[] = "Luz Amarrilla encendida!";
	
	printf(LETRA_COLOR_VERDE_T);//Color de la letra de la consola
	Funcion_MostrarLuzSemaforo(mensaje_semaforo_verde, tiempo_semaforo_verde);
	printf(LETRA_COLOR_ROJO_T);//Color de la letra de la consola
    Funcion_MostrarLuzSemaforo(mensaje_semaforo_roja, tiempo_semaforo_roja);
	printf(LETRA_COLOR_AMARRILLO_T);//Color de la letra de la consola
	Funcion_MostrarLuzSemaforo(mensaje_semaforo_amarrilla, tiempo_semaforo_amarrilla);    
}

