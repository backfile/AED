#include <iostream>
#include <list>
using namespace std;

void ascedente(list<int>&L, list<list<int>>&LL){
	for(auto q = L.begin(); q != L.end(); ++q){
		list<int>aux;
		bool entro = false;
		while(*q<*(next(q)) && next(q) != L.end()){
			entro = true;
			aux.push_back(*q);
			++q;
		}
		if(entro){
			aux.push_back(*q);
		}
		LL.push_back(aux);
	}
}

int main(int argc, char *argv[]) {
	list<int> l = {1, 4, 10, 2, 7, 1, 2, 4, 2};
	list<list<int>> LL;
	ascendente(l, LL);
	for(auto x : LL){
		for(auto t : x){
			cout << t << " ";
		}
		cout << endl;
	}
	return 0;
}

