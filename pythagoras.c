#include "pythagoras.h"

#include <math.h>
/*****************************************************************************
 *                                                                           *
 * ------------------------------- hypotenuse ------------------------------ *
 *                                                                           *
 *****************************************************************************/

Scalar hypotenuse (Scalar a, Scalar b)
{

    Scalar absa = ABS (a), absb = ABS (b);

    if (absa > absb)
        return absa * sqrt (1.0 + SQR (absb / absa));
    else
        return (absb == 0.0 ? 0.0 : absb * sqrt (1.0 + SQR (absa / absb)));
}

/****************************************************************************/
/*                                                                          */
/* h^2 = a^2 + b^2                                                          */
/* a^2 = h^2 - b^2                                                          */
/*           ____________                                                   */
/*         /                                                                */
/* a   =  v  (h^2 - b^2)                                                    */
/*                                                                          */
/*                                                                          */
/****************************************************************************/
Scalar cathetus (Scalar h, Scalar b)
{

    Scalar absa = ABS (h), absb = ABS (b);

    if (absa > absb)
        return absa * sqrt (1.0 - SQR (absb / absa));
    else
        return (absb == 0.0 ? 0.0 : absb * sqrt (1.0 - SQR (absa / absb)));
}
