
#include "lib.h"



/* integer bitwise AND */
int  op_and 	(int x, int y) {
	return x&y;
}

/* integer bitwise OR */
int  op_or 		(int x, int y) {
	return x|y;
}

/* integer bitwise XOR */
int  op_xor 	(int x, int y) {
	return x^y;
}

/* integer bitwise XNOR */
int  op_xnor 	(int x, int y) {
	return ~(x^y);
}

/* integer add 			 */
int  op_add 	(int x, int y) {
	return x+y;
}

/* integer sub 			 */
int  op_sub 	(int x, int y) {
	return x-y;
}

/* integer mul 			 */
int  op_mul 	(int x, int y) {
	return x*y;
}


