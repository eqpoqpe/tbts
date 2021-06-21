/* TODO tbt_sort with only 5 index array
 *
 * - ISEQ
 * - ISEV
 *
 * (C) Copyright 2021 Ryan Martin <?>
 */

#include <stdio.h>
#include <stdint.h>

#include <dtools.h>
#ifndef DTOOLS_H
#include "dtools.h"
#endif

#include "../tbt_sort.h"

void naive_tbt_sort(int *nms, int siz, int **_result)
