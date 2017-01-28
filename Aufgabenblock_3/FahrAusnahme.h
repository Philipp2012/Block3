#pragma once
#include "AktivesVO.h"
class Fahrzeug;
class Weg;

class FahrAusnahme
{
public:
	//Konstruktor und Destruktor
	FahrAusnahme();
	FahrAusnahme(Fahrzeug* pFahrzeug, Weg* pWeg);
	virtual ~FahrAusnahme();
	
	//Methoden
	virtual void vBearbeiten() = 0;

protected:
	Fahrzeug* p_pFahrzeug;
	Weg* p_pWeg;
};

