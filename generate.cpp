#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "generate.h"


int generate() {
	float sch = ((double)rand() /(RAND_MAX+0.01))*10;
		return sch;
}
