#include <stdio.h>
#include <stdlib.h>


 typedef enum {
        espera1 = 0,
        conmutacion = 1,
        arracque/paro = 2,
        espera2 = 3
       }estados_t;
	
	
typedef enum {
  conTension = 1;
  sinTension = 0;
}posicionConmutador;

typedef enum {
 grupoEncendido = 1;
 grupoApagado = 0;
}estados_grupo;
	
	
	int sensor ();
	int f_espera1 ();
	int f_conmutacion ():
	int f_arranque_paro ();
	int f_espera2 ();
	
	
	
int main() {
	
	
	int t ;
	t = sensor;
	
	estados_t estado = espera1;
	 estados_t (*accion[])(estados_t) = {f_espera1, f_conmutacion, f_arranque_paro, f_espera2}
	 while (1) estado = (*accion[estado])
	 
	 return 0;
}
	 
	 int f_espera1 () {
	 
	 
	 if (t == 1 ) {
	 	estado = 0;
	 }
	 else {
	       estado = 1;
	 }
	 
	 return estado;
}
	 
	 int F_conmutacion (){
	 	
		 posicionConmutador == o;
		 
		 estado == 2 ;
		 
		 return estado;
	 	
	 }
	 
	 int f_arranque_paro () {
	 	
	 	if (t==0 and posicionConmutador ==0){
	 		estados_grupo = 1
	 		estados = 3
		 }
		 
		 if (t==1 and posicionConmutador ==1){
		 	estados_grupo = 0
		 	estado=0
		 }
		 
		 return estado;
	 }
	 
	 int f_espera2 () {
	 
	 
	 if (t == 0 ) {
	 	estado = 3;
	 }
	 else {
	       estado = 1;
	 }
	 
	 return estado;
}
	 
