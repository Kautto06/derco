#include <stdio.h>
#define cantRegiones 16
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"
#include "menus.h"
#include "funcionesBasicasVentas.h"
#include "funcionesBasicasMarcas.h"
#include "funcionesBasicasProductos.h"
#include "sucursalConMasVentas.h"
#include "productoMayorRecalls.h"
#include "usuarioMayorGastado.h"
#include "marcasConMasVentas.h"
#include "funcionesBasicasRegiones.h"


int main(){
    struct SistemaDerco *derco=NULL;
    derco=(struct SistemaDerco *)malloc(sizeof (struct SistemaDerco));
    derco->regiones=crearRegiones();
    derco->ventas=NULL;
    SwitchMenuPrincipal(derco);
}




