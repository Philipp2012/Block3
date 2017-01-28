#include "AktivesVO.h"

int AktivesVO::p_iMaxID = 1;

//Standardkonstruktor
AktivesVO::AktivesVO()
{
	vInitialisierung();
}

//Konstruktor mit Namen
AktivesVO::AktivesVO(string sName)
{
	vInitialisierung();

	this->p_sName = sName;
}

//Destruktor
AktivesVO::~AktivesVO() {}

//Initialisierungsfunktion von AkitvesVo
void AktivesVO::vInitialisierung()
{
	p_sName = "";
	p_dZeit = 0;
	p_iID = p_iMaxID;
	p_iMaxID++;
}

//Überladung von <<
ostream& operator << (ostream& daten, AktivesVO& VO) { return VO.ostreamAusgabe(daten);}

//Aufbau der AktivesVO Ausgabe mit ostream
ostream& AktivesVO::ostreamAusgabe(ostream& daten)
{
	daten << setw(4) << resetiosflags(ios::right) << setiosflags(ios::left) << setfill(' ')
		<< "ID: " << setw(4) << setfill(' ') << p_iID << setw(9) << setfill(' ') << p_sName ;

	return daten;
}

//Gibt den Namen des VO zurück
string AktivesVO::getName() const { return this->p_sName; }