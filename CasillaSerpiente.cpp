#include "CasillaSerpiente.hpp"
#include "CCasilla.hpp"
#include "Ctesconf.hpp"

// Inicializa la Casilla Serpiente en una posicion valida, con su premio/castigo y tipo
CasillaSerpiente::CasillaSerpiente()
{
    
}

// Inicializa la Casilla Serpiente como Casilla Normal configurada como Serpiente y agrega el premio/castigo
CasillaSerpiente::CasillaSerpiente(int numero):CCasilla{numero, "S"}
{
    
}