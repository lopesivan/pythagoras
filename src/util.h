#ifndef UTIL_H
#define UTIL_H

/*****************************************************************************
 *                                                                           *
 * ---------------------------- Public Interface --------------------------- *
 *                                                                           *
 *****************************************************************************/

#define SQR(a)       ((a) == 0.0 ? 0.0 : (a*a))

#define CUBE(a)      ((a) == 0.0 ? 0.0 : (a*a*a))

/* absolute value of a */
#define ABS(a)       (((a)<0) ? -(a) : (a))

#define SWAP(v1, v2) (temp=(v1), (v1)=(v2), (v2)=(temp))

/* find minimum of a and b */
#define MIN(a, b)    (((a) < (b)) ? (a) : (b))

/* find maximum of a and b */
#define MAX(a, b)    (((a) > (b)) ? (a) : (b))

/* epsilon surrounding for near zero values */

#define     EQN_EPS     1e-9
#define     is_zero(x)  ((x) > -EQN_EPS && (x) < EQN_EPS)

#endif       /* UTIL_H */
