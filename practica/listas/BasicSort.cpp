#include <iostream>
#include <list>
using namespace std;

//1) BasicSort. Escribir una funcion void basic_sort(list<int> &L), que ordena los elementos de L
//de menor a mayor. Para ello emplear el siguiente algoritmo simple: utilizando una lista auxiliar L2,tomar 
//l menor elemento de L, eliminarlo de L e insertarlo al nal de L2 hasta que L este vaca.
//Luego insertar los elementos de L2 en L.

list<int>::iterator encontrar_menor_lista(list<int>&l){
	

	auto min = l.begin();
	
	for(auto it = next(l.begin()); it != l.end(); ++it)	{
		if(*it<*min){
			min = it;
		}
	}
		
	return min;
}
	
	
void BasicSort(list<int>&L){
	list<int>aux;

	while(!L.empty()){
		auto menor = encontrar_menor_lista(L);
		aux.push_back(*menor);
		L.erase(menor);
	}
	
	L = aux;
}	
	
int main() {
	
	list<int>l = {1, 5, 3, 8, -1};
	BasicSort(l);
	for(auto x : l){
		cout << x << " ";
	}
	
	
	
	return 0;
}

