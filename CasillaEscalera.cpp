#include "CasillaEscalera.hpp"
#include "Ctesconf.hpp"

//Inicializa la Casilla Escalera configurada con su premio/castigo y su tipo
CasillaEscalera::CasillaEscalera()
{
    
}

//Inicializa la Casilla Escalera como Casilla Normal tipo Escalera y agregando el premio/castigo
CasillaEscalera::CasillaEscalera(int numero):CCasilla{numero, "L"}
{
    
}