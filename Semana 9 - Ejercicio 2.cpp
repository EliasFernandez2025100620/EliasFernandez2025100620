#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	int contador = 1;
	while (contador < 100){
		cout << contador << endl;
		contador--; //decrementa en 1 contador
	}
	system ("puase");
	return EXIT_SUCCESS;
}
