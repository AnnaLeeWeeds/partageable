
#include "Composant1.h"
#include "Composant4Version.h"
#include "composant3.h"

// declaration des fonctions internes

int composant1(int p1, int p2)
{
	return composant3(p1, p2);
}
char * getComposant1Version()
{

	return "Composant 4 version " COMPOSANT4_VERSION_STR;
}
