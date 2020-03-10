#include <iostream>
#include <vector>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int somar_quad_digitos(int n)
{
	int soma_quad = 0;

	while(n > 0) 
	{
		
		int resto = n % 10;
		
		soma_quad = soma_quad + resto * resto;
	
		n /= 10;
	}
	return soma_quad;
}

int main(int argc, char *argv[])
{
	int n;
	vector<int> v; 
	bool feliz = false, existe_vetor = false;
	
	cout << "Digite um numero inteiro: ";
	cin >> n;
	while(1)
	{
		int soma_quad;

		
		for(unsigned int i = 0; i < v.size(); i++)
		{
			if(v[i] == n)
			{
				existe_vetor = true;
				break;
			}
		}
		
		
		if(existe_vetor == true)
			break;
		
		v.push_back(n); 
		soma_quad = somar_quad_digitos(n);
		if(soma_quad == 1)
		{
			feliz = true;
			break;
		}
		n = soma_quad;
	}
	
	if(feliz == true)
		cout << "feliz\n";
	else
		cout << "triste\n";
	return 0;
}
