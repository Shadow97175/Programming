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
	cout<<"Введите строку: "<<endl;
	cin>>s;
	for (int i=0; i<strlen(s); i++)
	{	
		if (s[i]>='À' && s[i]<='ÿ')			count[(('z'-'A')+1+(s[i]-'À'))]++;	
		else if (s[i]>='A' && s[i]<='z')	count[(s[i]-'A')]++;						
	}
	char a;
	cout<<"Введите букву, количество вхождений которой Вы хотите узнать: "<<endl;
	cin>>a;
	if (a>='À' && a<='ÿ')		cout<<"Количество вхождений: "<<count[(('z'-'A')+1+(a-'À'))]<<endl;	
	else if (a>='A' && a<='z')	cout<<"Количество вхождений: "<<count[a-'A']<<endl;	
	else				cout<<"Вы ввели не букву!"<<endl;
	return 0;
}
