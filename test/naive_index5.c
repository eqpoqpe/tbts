/* Naive 5 Index Array TBT Sort
 *  ____________
 * < JUST NAIVE >
 *  ------------
 *       \   ^__^
 *        \  (oo)\_______
 *           (__)\       )\/\
 *               ||--WWW |
 *               ||     ||
 */

#include <stdlib.h>
#include <dtools.h>

struct tbt_arg_st {
	int *nms;
	int siz;
};

struct tbt_min_count_st {
	int head;
	int med;
};

void naive_tbt_sort_5(struct tbt_arg_st nms_dtls)
{
	/* struct tbt_arg_st nms_dtls
	 *
	 * nms
	 * [0]-[1] [2]-[3] [4]-[5]
	 */
	int *nms = nms_dtls.nms;
	int result_buf[5];
	unsigned int index;
	unsigned int inside;
	int template_value;
	if (*(nms + 0) > *(nms + 1)) {
		template_value = *(nms + 0);
		*(nms + 0) = *(nms + 1);
		*(nms + 1) = template_value;
	}
	if (*(nms + 2) > *(nms + 3)) {
		template_value = *(nms + 2);
		*(nms + 2) = *(nms + 3);
		*(nms + 3) = template_value;
	}
	if (*(nms + 4) > *(nms + 5)) {
		template_value = *(nms + 4);
		*(nms + 4) = *(nms + 5);
		*(nms + 5) = template_value;
	}
	/* result
	 *
	 * min [0] [2] [4] non_min [1] [3] [5]
	 * found min value in min, if it is [4]
	 * found min value in non_min, if it is [5]
	 *
	 * [4] [0]-[2] [5] [1]-[3]
	 */
	struct tbt_min_count_st min;
	for (index = 1, template_value = *(nms + 0); \
			index < 3; index++) {
		if (template_value > *(nms + index))
			template_value = *(nms + index);
	}
	min.head = index;
	*(result_buf + 0) = template_value;
	for (index = 4, template_value = *(nms + 3); \
			index < 6; index++) {
		if (template_value > *(nms + index))
			template_value = *(nms + index);
	}
	min.med = index;
	*(result_buf + 3) = template_value;
}
