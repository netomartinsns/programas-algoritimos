
// Resolve o jogo da Torre de Hanói utilizando recursão
#include <stdio.h>
#include <stdlib.h>
// protótipo da função recursiva
void mover (int n, char Orig, char Temp, char Dest);

int main()
{
mover(3, 'O', 'T', 'D');
system("pause");
return 0;
}

void mover(int n, char Orig, char Temp, char Dest)
{
	if (n == 1)
		printf("\nMova o disco 1 da haste %c para a haste %c\n", Orig, Dest);
	else
	{
		mover(n - 1, Orig, Dest, Temp);
		printf("\nMova o disco %d da haste %c para a haste %c\n", n, Orig, Dest);
		mover(n - 1, Temp, Orig, Dest);
	}
}
// O programa imprime a sequência de movimentos necessários para mover os discos da haste de origem para a haste de destino, utilizando uma haste temporária como apoio.