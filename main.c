#include "funciones.h"

STATE estado;
EVENT evento;

int main(int argc, char const *argv[])
{
  
  estado=RED;
  evento=NO_EVENT;

  while(1){
    
   estado=HandleEventGo(estado,evento);
    

    evento = get_event();
  }
}


