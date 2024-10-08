// Use typedef to create types named Int8, Int16, and Int32.
// Define the types so that they represent 8-bit, 16-bit,
// and 32-bit integers on your machine.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef char Int8;   // char uses 1 byte (8 bits) of memory
    typedef short Int16; // short uses 2 bytes (16 bits) of memory
    typedef int Int32;   // int uses 4 bytes (32 bits) of memory

    return EXIT_SUCCESS;
}
