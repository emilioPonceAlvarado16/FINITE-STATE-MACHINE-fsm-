#include "funciones.h"
#include <stdlib.h>
extern STATE estado;



void (*estados[]) ()={salir,luz_roja,luz_verde,luz_amarilla};

int get_event()
{
  EVENT evento;
  char c = getchar();

 

  switch(c){
    case 'g':
      evento = GO_COMMAND;
      break;
    case 's':
      evento = STOP_COMMAND;
      break;
    case 't':
      evento = TIMER_TIMEOUT;
      break;
    case 'q':
      estado = EXIT;
      break;
    default:
      evento = NO_EVENT;
      break;
  }

  return evento;
}

void luz_roja()
{
  printf("\033[0;31m");
  printf("\rROJO     >");
  printf("\033[0m");
}

void luz_verde()
{
  printf("\033[0;32m");
  printf("\rVERDE    >");
  printf("\033[0m");
}

void luz_amarilla()
{
  printf("\033[0;33m");
  printf("\rAMARILLO >");
  printf("\033[0m");
}
void LightOn(STATE estado){

	estados[estado]();

}
void salir(){
	exit(-1);
}


STATE HandleEventGo(STATE currentState, EVENT evento){
	if(evento==GO_COMMAND && currentState==RED){
		
		currentState++;
		LightOn(currentState);


	}
	else if(evento==STOP_COMMAND && currentState==GREEN){
		currentState++;	
		LightOn(currentState);
	}else if(evento==TIMER_TIMEOUT && currentState==YELLOW){
		currentState=currentState-2;
		LightOn(currentState);
	}
	LightOn(currentState);
	

	return currentState;
	

}




