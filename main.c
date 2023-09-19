#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
 char first[255], last[255];
 askname(first, last);
 printf("Hello, %s %s!\n ArTeMkA-BaBiN is the second!!!", first, last);
 return 0;
}
