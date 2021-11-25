#include <stdio.h>

//5. Student G. Apa dostał od kolegi na kartce kod programu zliczającego znaki odstępu, tabulacji i nowego wiersza. Niestety jego młodszy brat pociął kartkę na kawałki zawierające po jednym wierszu kodu, a następnie kawałki te wymieszał. Uporządkuj te kawałki, tak aby powstał działający program.

/* zlicz znaki odstępu, tabulacji
i nowego wiersza */
int main ()
{
int nb, nt, nl;
int c;
nt = 0;
nl = 0;
nb = 0;
if (c == ' ')++nl;
else if (c == '\n')++nb;
else if (c == '\t')++nt;
while ((c=getchar()) != EOF)
printf("%d %d %d\n", nb, nt, nl);
return 0;
}
