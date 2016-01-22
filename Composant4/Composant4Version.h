#define ComposantVersion_5 1
#define ComposantVersion_6 2
#define ComposantVersion_7 0
#define ComposantVersion_8 0

/////////// apres cette ligne: ne pas modifier ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

#define COMPOSANT4_VERSION ComposantVersion_5,ComposantVersion_6,ComposantVersion_7,ComposantVersion_8

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define VERSION_TEXT(_version,_build,_interface,_fonction) \
	TOSTRING(_version) TOSTRING(.) TOSTRING(_build) TOSTRING(.) TOSTRING(_interface) STRINGIFY(.) TOSTRING(_fonction)

#define COMPOSANT4_VERSION_STR VERSION_TEXT(ComposantVersion_5,ComposantVersion_6,ComposantVersion_7,ComposantVersion_8)
