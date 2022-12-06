#include <unistd.h>

int main(void)
{
    char ch[] = "2022-09-19";
    write(1, &ch, 10);
    return 0;
}