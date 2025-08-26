//5) Junta. Escribir una funcion void junta(list<int> &L, int c) que, dada una lista L, agrupa de
//a c elementos, dejando su suma in place. Por ejemplo, si se le pasa como argumento la lista
//L=(1,3,2,4,5,2,2,3,5,7,4,3,2,2), despues de aplicar el algoritmo junta(L,3) debe quedar	L=(6,11,10,14,4) (notar que se agrupan los ultimos elementos, pese a no completar los tres
//requeridos). El algoritmo debe tener un tiempo de ejecucion O(n).

#include <iostream>
#include <list>
using namespace std;


void junta(list<int> &L, int c){
	for(auto it = L.begin(); it != L.end(); ++it){
		int aux = 0;
		int acum = 0;
		while(aux < c){
			if(it == L.end()){
				break;
			}
			acum += *it;
			aux++;
			it = L.erase(it);
			
		}
		it = L.insert(it,  acum);
		
	}
}

int main() {
	list<int>L = {1, 2, 3, 4, 5, 6, 7, 3};
	junta(L, 3);
	for(auto x : L){
		cout << x << " ";  
	}
	return 0;
}

