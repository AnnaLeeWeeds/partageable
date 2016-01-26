#include "Composant3.h"
#include "Composant3Version.h"

// declaration des fonctions internes
int addition_interne(int a1, int a2);



COMPOSANT3_INTERFACE int  composant3(int p1, int p2)
{

	return p1 + p2;
}

COMPOSANT3_INTERFACE char * getComposant3Version()
{
	return "  Composant 3 version " COMPOSANT3_VERSION_STR;
}
