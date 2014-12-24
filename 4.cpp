Programming
===========
#include <iostream>
#define RUS_CHARS	33
#define ENG_CHARS	21
using namespace std;

int main(void)
{
	setlocale(0, "Russian");
	char s[128];
	int count[((RUS_CHARS*2)+(ENG_CHARS*2))]={0};
	cout<<"Ââåäèòå ñòðîêó: "<<endl;
	cin>>s;
	for (int i=0; i<strlen(s); i++)
	{	
		if (s[i]>='À' && s[i]<='ÿ')			count[(('z'-'A')+1+(s[i]-'À'))]++;	//	ðóññ áóêâû
		else if (s[i]>='A' && s[i]<='z')	count[(s[i]-'A')]++;						//	àíãë áóêâû
	}
	char a;
	cout<<"Ââåäèòå áóêâó êîëè÷åñòâî âõîæäåíèé êîòîðîé Âû õîòèòå óçíàòü: "<<endl;
	cin>>a;
	if (a>='À' && a<='ÿ')		cout<<"Êîëè÷åñòâî âõîæäåíèé: "<<count[(('z'-'A')+1+(a-'À'))]<<endl;	//	ðóññ áóêâà
	else if (a>='A' && a<='z')	cout<<"Êîëè÷åñòâî âõîæäåíèé: "<<count[a-'A']<<endl;	//	àíãë áóêâà	
	else						cout<<"Âû ââåëè íå áóêâó!"<<endl;
	return 0;
}
