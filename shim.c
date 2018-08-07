#include "interface.h"
#include <stdlib.h>
#include <stdio.h>

extern void original_library_function(char* str);

void library_function(char* str)
{
     printf("SHIM LAYER HACK BY JOONAS\n");
     printf("pre call\n");
     original_library_function(str);
     printf("post call\n");
}
