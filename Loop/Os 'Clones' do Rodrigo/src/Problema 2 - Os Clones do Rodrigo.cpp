#include <iostream>

using namespace std;

int main(){

	int a,p,i,maior_nivel=0,maior_androide=1;

	cin >> a;

	for(i=0;i<a;i++)
	{
		cin >> p;
		if(p>maior_nivel)
		{
			maior_nivel=p;
			maior_androide=i+1;
		}
	}

	cout << maior_androide << " " << maior_nivel << endl;

	return 0;	
}