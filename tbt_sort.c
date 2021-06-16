/* one with one sort
 *
 * (C) Copyright 2021 Ryan Martin <l_.ll@hotmail.com>
 *
 *    cmp [0]-[1] [2]-[3] [4]
 *
 * result [1] [0] [2] [3] [4]
 *
 *    cmp [1]-[2] [0]-[3] [4]
 *
 * result [2] [1] [0] [3] [4]
 *
 * One for loop and 4 cmp
 */

/* TODO test for 5 indexs */
void naive_5index_tbt_sort(int *nms, int siz)
{
	int min_val;
	int buf[siz];
	int index_s[(siz - 1)];
	int first_val = *(nms + 0);
	unsigned int index = 1;
	for (; index < siz; index++) {
		if (first_val > *(nms + index))
			first_val = *(nms + index);
	}
	/* min_val = first_val;
	 * buf[0] = min_val;
	 */
	buf[0] = first_val;
	dtools.next(nms, index);
	/* the first cmp */
	unsigned int _index = 0;
	int template;
	for (; _index < 1; _index++) {
		if (*(nms + 0) < *(nms + 1)) {
			template = *(nms + 0);
			*(nms + 0) = *(nms + 1);
			*(nms + 1) = template;
		}
		if ((*nms + 2) < *(nms + 3)) {
			template = *(nms + 2);
			*(nms + 2) = *(nms + 3);
			*(nms + 3) = template;
		}
	}
	/* front 1 3 end 2 4 */
	_index = 0;
	for (; _index < 1; _index++) {
		if (*(nms + 1) > *(nms + 3)) {
			template = *(nms + 1);
			*(nms + 1) = *(nms + 3);
			*(nms + 3) = template;
		}
		if (*(nms + 2) > *(nms + 4)) {
			template = *(nms + 2);
			*(nms + 2) = *(nms + 4);
			*(nms + 4) = template;
		}
	}
	/* the index result is 1 3 2 4 */
	_index = 1;
	_index_s_index = 0;
	index_s = {1,3,2,4};
}

#ifndef  DTOOLS_H
#include "dtools.h"
#else
#include <dtools.h>
#endif

struct arg_st {
	int *nms; /* original array */
	int siz;  /* size of array */
} arg_st;

struct cmp_st {
	const int index; /* the index of min value in the array,
			  * it'll happy
			  */
	int min_val;     /* the min value in the array */
} cmp_st;

void navie_tbt_sort(struct arg_st dtls)
{
}

int main()
{
	struct arg_st ldtls = {
		.nms = lnms,
		.siz = ARR_LEN(lnms),
	};
	return 0;
}
