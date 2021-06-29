/* TBT SORT, Two By Two Sort
 *
 * (C) Copyright 2021 Ryan Martin <l_.ll@hotmail.com>
 *
 * TBT_SORT: https://github.com/Eqpoqpe/tbt_sort
 * Dtools: https://github.com/Eqpoqpe/libdtools
 */

#ifndef TBT_SORT_H
#define TBT_SORT_H

struct tbt_arg_st;
struct tbt_min_blc;

struct tbt_arg_st {
	int *nms;
	int siz;
};

/* if equity return 0 */
#define ISEQ(nm0, nm1)	(int)(!(nm0 ^ nm1) ? 0 : 1)

/* if it's event return 0 */
#define ISEV(nm0)	(int)((!(nm0%2) | 0) ? 0 : 1)

#endif
