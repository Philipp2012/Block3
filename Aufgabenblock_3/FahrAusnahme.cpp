#include "FahrAusnahme.h"


//Konstruktor
FahrAusnahme::FahrAusnahme()
{
}

//Konstruktor mit Fahrzeug und Weg Pointer
FahrAusnahme::FahrAusnahme(Fahrzeug* fahr, Weg* abschnitt)
{
	p_pFahrzeug = fahr;
	p_pWeg = abschnitt;
}

//Destruktor
FahrAusnahme::~FahrAusnahme()
{
}
