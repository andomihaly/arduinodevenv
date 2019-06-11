
#ifndef __lib_h__
#define __lib_h__


#ifdef __cplusplus
extern "C"
{
#endif

/** The "libary" begins here  */

/* integer bitwise AND */
int  op_and 	(int x, int y);

/* integer bitwise OR */
int  op_or 		(int x, int y);

/* integer bitwise XOR */
int  op_xor 	(int a, int b);

/* integer bitwise XNOR */
int  op_xnor 	(int a, int b);

/* integer add 			 */
int  op_add 	(int x, int y);

/* integer sub 			 */
int  op_sub 	(int x, int y);

/* integer mul 			 */
int  op_mul 	(int x, int y);


#ifdef __cplusplus
}
#endif

#endif /* __lib_h__ */

