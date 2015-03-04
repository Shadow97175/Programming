#include <iostream>

using namespace std;

int main()
{
	int N, sameN=0;

	int sameInt[168] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997 };
	int* sameIntCount; //массив для подсчета составляющих
	
	cin >> N;
	
	if(N<1 || N>1000){
		cout << "Error interval!";
		return -1;
	}else if(N==1){
		cout << "1! = 1";
		return 0;
	}

	int* fact = new int[N];
	for (int i = 0; i < N; i++){
		fact[i] = i + 2;
		if (sameN==0 && sameInt[i]>N)
			sameN = i;
	}
	sameIntCount = new int[sameN];
	for (int i = 0; i < sameN; i++)sameIntCount[i] = 0;

	cout << N << "! = ";

	for (int i = N - 2; i >= 0; i--){
		for (int j = sameN - 1; j >= 0; j--){
			if (fact[i] >= sameInt[j]){
				if (fact[i] % sameInt[j] == 0){
					fact[i] = fact[i] / sameInt[j];
					sameIntCount[j]++;
					i++;
					break;
				}
			}
		}
	}

	//вывод результата
	for (int i = 0; i < sameN && sameIntCount[i]>0; i++){
		if (i!=0) cout << " * ";
		cout << sameInt[i];
		if (sameIntCount[i]>1)
			cout << "^" << sameIntCount[i];
	}
	
	cout << endl;

	system("Pause");
	return 0;
}
