#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t _aaaaaaaaaaaa;
   int16_t _bbbbbbbbbbbb;
   int16_t _cccccccccccc;
   printf("Enter _aaaaaaaaaaaa:");
   scanf("%hd", &_aaaaaaaaaaaa);
   printf("Enter _bbbbbbbbbbbb:");
   scanf("%hd", &_bbbbbbbbbbbb);
   printf("Enter _cccccccccccc:");
   scanf("%hd", &_cccccccccccc);
   if (_aaaaaaaaaaaa > _bbbbbbbbbbbb) 
   {
   if (_aaaaaaaaaaaa > _cccccccccccc) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", _cccccccccccc);
   goto Outofif;
Abigger:
   printf("%d\n", _aaaaaaaaaaaa);
   goto Outofif;
   }
   }
   if (_bbbbbbbbbbbb < _cccccccccccc) 
   {
   printf("%d\n", _cccccccccccc);
   }
   else
   {
   printf("%d\n", _bbbbbbbbbbbb);
   }
Outofif:
   if (((_aaaaaaaaaaaa == _bbbbbbbbbbbb && _aaaaaaaaaaaa == _cccccccccccc) && _bbbbbbbbbbbb == _cccccccccccc)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_aaaaaaaaaaaa < 0 || _bbbbbbbbbbbb < 0) || _cccccccccccc < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(_aaaaaaaaaaaa < (_bbbbbbbbbbbb + _cccccccccccc))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
