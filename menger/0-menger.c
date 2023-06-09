#include "menger.h"
/**
 * menger - function that draws a 2D Menger Sponge
 * @level: level is the level of the Menger Sponge to draw
 * Return: void
 */

void menger(int level)
{
size_t size;
size_t i;
size_t j;

if (level < 0)
{
return;
}
size = pow(3, level);
for (j = 0; j < size; j++)
{
for (i = 0; i < size; i++)
{
bool b = false;
size_t tmp1 = j;
size_t tmp2 = i;
while (tmp1 && tmp2)
{
if (tmp1 % 3 == 1 && tmp2 % 3 == 1)
{
b = true;
}
tmp1 /= 3;
tmp2 /= 3;
}
if (b == true)
printf(" ");
else
printf("#");
}
printf("\n");
}
}
