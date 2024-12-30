#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _aaaaaaaaaaaa;
   int16_t _bbbbbbbbbbbb;
   int16_t _xxxxxxxxxxxx;
   int16_t _yyyyyyyyyyyy;
   printf("Enter _aaaaaaaaaaaa:");
   scanf("%hd", &_aaaaaaaaaaaa);
   printf("Enter _bbbbbbbbbbbb:");
   scanf("%hd", &_bbbbbbbbbbbb);
   printf("%d\n", (_aaaaaaaaaaaa + _bbbbbbbbbbbb));
   printf("%d\n", (_aaaaaaaaaaaa - _bbbbbbbbbbbb));
   printf("%d\n", (_aaaaaaaaaaaa * _bbbbbbbbbbbb));
   printf("%d\n", (_aaaaaaaaaaaa / _bbbbbbbbbbbb));
   printf("%d\n", (_aaaaaaaaaaaa % _bbbbbbbbbbbb));
   _xxxxxxxxxxxx = (((_aaaaaaaaaaaa - _bbbbbbbbbbbb) * 10) + ((_aaaaaaaaaaaa + _bbbbbbbbbbbb) / 10));
   _yyyyyyyyyyyy = (_xxxxxxxxxxxx + (_xxxxxxxxxxxx % 10));
   printf("%d\n", _xxxxxxxxxxxx);
   printf("%d\n", _yyyyyyyyyyyy);
   system("pause");
    return 0;
}
