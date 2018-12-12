#include <iostream>

using namespace std;

int main(){

	int index,i,mais=0,menos=0,quedas_totais,quedas_menino,players,flag=0;

	cin >> players >> quedas_totais >> quedas_menino;

	int a[players];

	for(i=0;i<players;i++)
		a[i]=0;
	
	for(i=0;i<quedas_totais;i++)
	{
		cin >> index;
		a[index-1]++;
	}

	for(i=0;i<players;i++)
	{
		if(a[i]<quedas_menino)
			cout << "Jogador " << i+1 << " caiu menos que o menino NeyRio" << endl;
		else if(a[i]==quedas_menino)
			cout << "Jogador " << i+1 << " caiu tanto quanto o menino NeyRio" << endl;
		else
		{
			cout << "Jogador " << i+1 << " caiu mais que o menino NeyRio" << endl;
			flag=1;
		}
	}

	if(flag)
		cout << "Injustica com o menino NeyRio" << endl;
	else
		cout << "Menino NeyRio eh merecidamente o SBC" << endl;

	return 0;

}