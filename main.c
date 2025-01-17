#include "testing.h"
#include <stdlib.h>
#include <stdio.h>
#include "testing.c"

/* ******************************************************************
 *                        PROGRAMA PRINCIPAL
 * *****************************************************************/

void pruebas_hash_catedra(void);
void pruebas_volumen_catedra(size_t);

int main(int argc, char *argv[])
{
    if (argc > 1) {
        // Asumimos que nos están pidiendo pruebas de volumen.
        long largo = strtol(argv[1], NULL, 10);
        pruebas_volumen_catedra((size_t) largo);
        return 0;
    }

    printf("~~~ PRUEBAS CÁTEDRA ~~~\n");
    pruebas_hash_catedra();

    return failure_count() > 0;
}
