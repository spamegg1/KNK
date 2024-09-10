// Which of the following are not valid C identifiers?
// (a) 100_bottles
// (b) _100_bottles
// (c) one__hundred__bottles
// (d) bottles_by_the_hundred_

#include <stdio.h>

int main(void)
{
    // int 100_bottles = 0;                              // this one is illegal!
    int _100_bottles = 0;
    int one__hundred__bottles = 0;
    int bottles_by_the_hundred_ = 0;

    return 0;
}
