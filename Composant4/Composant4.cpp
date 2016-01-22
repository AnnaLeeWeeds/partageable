
#include "../interfaces/Composant4.h"
#include "Composant4Version.h"
#include "../Composant3/Composant3.h"

// declaration des fonctions internes

int composant4(int p1, int p2)
{
	return composant3(p1, p2);
}
char * getComposant4Version()
{

	return "Composant 4 version " COMPOSANT4_VERSION_STR;
}
