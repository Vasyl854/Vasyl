#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _aaaaaaaaaaaa, _aaaaaaaaaaa2, _bbbbbbbbbbbb, _xxxxxxxxxxxx, _ccccccccccc1, _ccccccccccc2;
   printf("Enter _aaaaaaaaaaaa:");
   scanf("%hd", &_aaaaaaaaaaaa);
   printf("Enter _bbbbbbbbbbbb:");
   scanf("%hd", &_bbbbbbbbbbbb);
   for (int16_t _aaaaaaaaaaa2 = _aaaaaaaaaaaa; _aaaaaaaaaaa2 <= _bbbbbbbbbbbb; _aaaaaaaaaaa2++)
   printf("%d\n", _aaaaaaaaaaa2 * _aaaaaaaaaaa2);
   for (int16_t _aaaaaaaaaaa2 = _bbbbbbbbbbbb; _aaaaaaaaaaa2 <= _aaaaaaaaaaaa; _aaaaaaaaaaa2++)
   printf("%d\n", _aaaaaaaaaaa2 * _aaaaaaaaaaa2);
   _xxxxxxxxxxxx = 0;
   _ccccccccccc1 = 0;
   while (_ccccccccccc1 < _aaaaaaaaaaaa)
   {
   {
   _ccccccccccc2 = 0;
   while (_ccccccccccc2 < _bbbbbbbbbbbb)
   {
   {
   _xxxxxxxxxxxx = _xxxxxxxxxxxx + 1;
   _ccccccccccc2 = _ccccccccccc2 + 1;
   }
   }
   _ccccccccccc1 = _ccccccccccc1 + 1;
   }
   }
   printf("%d\n", _xxxxxxxxxxxx);
   _xxxxxxxxxxxx = 0;
   _ccccccccccc1 = 1;
   do
   {
   _ccccccccccc2 = 1;
   do
   {
   _xxxxxxxxxxxx = _xxxxxxxxxxxx + 1;
   _ccccccccccc2 = _ccccccccccc2 + 1;
   }
   while (!(_ccccccccccc2 > _bbbbbbbbbbbb));
   _ccccccccccc1 = _ccccccccccc1 + 1;
   }
   while (!(_ccccccccccc1 > _aaaaaaaaaaaa));
   printf("%d\n", _xxxxxxxxxxxx);
   system("pause");
    return 0;
}
