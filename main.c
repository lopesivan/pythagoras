#include <stdio.h>
#include <stdlib.h>

#include "pythagoras.h"

static
int testPythagoras (int argc, char* argv[])
{
    if (argc == 3)
    {
        typedef Scalar (*function) (Scalar, Scalar);
        function f = NULL;

        f = hypotenuse;

        printf ( "hypotenuse: "data_fmt"\n"
                 "cathetu   : "data_fmt"\n"
                 "cathetu   : "data_fmt"\n",
                 f (atos (argv[1]), atos (argv[2])),
                 atos (argv[1]),
                 atos (argv[2])
               );

        puts ("--");

        f = cathetus;

        printf ( "hypotenuse: "data_fmt"\n"
                 "cathetu   : "data_fmt"\n"
                 "cathetu   : "data_fmt"\n",
                 atos (argv[1]),
                 f (atos (argv[1]), atos (argv[2])),
                 atos (argv[2])
               );
    }
    else
        return EXIT_FAILURE;

    return EXIT_SUCCESS;
}

int main (int argc, char* argv[])
{
    printf ("argc = <%d>\n", argc);

    switch (argc)
    {

    case 3:
        if (testPythagoras (argc, argv) == EXIT_FAILURE)
            exit (1);
        break;

    default : /* Optional */
        printf ("No input ...\n");
    }

    return EXIT_SUCCESS;

}
