//2) SelectionSort. Escribir una funcion void selection_sort(list<int> &L), que ordena los
//elementos de L de menor a mayor. Para ello debe tomarse el menor elemento de L e intercambiarlo
//(swap) con el primer elemento de la lista. Luego intercambiar el menor elemento de la lista
//restante, con el segundo elemento, y as sucesivamente. Esta funcion debe ser IN PLACE



#include <iostream>
#include <list>
using namespace std;
	
	
void selection_Sort(list<int>&l){
	int cont = 0;
	for(auto it = l.begin(); it != l.end(); ++it){
		//list<int>::iterator actual, menor;
		
		auto actual = it;
		auto menor = actual;
		for(next(actual); actual != l.end(); actual++){
			if(*actual<*menor){
				menor = actual;			}
		}
		int aux_menor_hallado = *menor;
		int aux = *it;
		*it = aux_menor_hallado;
		*menor = aux;
	}
}


int main(int argc, char *argv[]) {
	
	list<int>l = {1, 4, 2, 7, 9, 0};
	selection_Sort(l);
	for(auto x : l){
		cout << x << " ";
	}
	
	return 0;
}

