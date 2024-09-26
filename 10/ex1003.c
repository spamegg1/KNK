// 3. Suppose that a program has only one function(main).
// How many different variables named i could this program contain ?

// There is no limit to the number of blocks that can be
// declared within `main`, so there is no limit to the
// number of `i` variables that the program could contain.
// Otherwise, there can be one external variable
// and one internal variable named `i`.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    {
        int i;
        {
            int i;
            {
                // and so on... infinitely!
            }
        }
    }

    return EXIT_SUCCESS;
}
