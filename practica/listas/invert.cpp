//4) Invierte. Escribir una funcion void invert(list<int> &L), que invierte el orden de la lista L.
//Este algoritmo debe implementarse in place y debe ser O(n). Restriccion: no utilizar el metodo
//size().


#include <iostream>
#include <list>
using namespace std;


void invert(list<int>&L){
	auto inicio = L.begin();
	auto end = prev(L.end());
	
	if((L.size() % 2) == 0){
		
		while(inicio != next(end)){
			
			int aux1 = *inicio;
			int aux2 = *end;
			*end = aux1;
			*inicio = aux2;
			inicio++;
			end--;
		}
	}else{
		while(inicio != end){
			
			int aux1 = *inicio;
			int aux2 = *end;
			*end = aux1;
			*inicio = aux2;
			inicio++;
			end--;
		}
	}
}


int main(int argc, char *argv[]) {
	list<int>L = {2, 5, 1, 3, 5};
	list<int>L2 = {2, 5, 1, 3, 5, 3};
	
	invert(L);
	invert(L2);
	

	
	for(auto x : L){
		cout << x <<" ";
	}
	cout << endl;
	for(auto x : L2){
		cout << x <<" ";
	}
	
	return 0;
}

