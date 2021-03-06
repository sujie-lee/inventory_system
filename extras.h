#ifndef _EXTRAS_H_
#define _EXTRAS_H_

#include "record.h"

// function prototypes
void sort(Record records[], int * psize, int * pmax);
int defragment(Record[], int * psize, int * pmax);
void calculate_asset(Record records[], int * psize);
Record * rescale_system(Record * records, int * pmax);
Record * reset_system(Record * records, int * psize, int * pmax);

#endif
