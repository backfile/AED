#include <iostream>
#include <list>
#include <vector>
using namespace std;

void reemplazar(list<int>&L, list<int>SEQ, list<int>REEM){
	
	if(SEQ.empty()){return;}
	auto t = SEQ.begin();
	int number = SEQ.size();
	int contador = 0;
	list<int> reverseaux = REEM;
	reverseaux.reverse();
	vector<list<int>::iterator> found;
	list<int>::iterator aux;
	
	for(auto q = L.begin(); q != L.end(); ++q){
		if(*q == *(t)){	
			if(contador == 0){
				aux = q;
			}
			++t;
			contador++;
		}else{
			contador = 0;
			t = SEQ.begin();
		}
		if(contador == number){
			contador = 0;
			found.push_back(aux);
			t = SEQ.begin();
		}
		
	}
	for(auto q : found){
		list<int>::iterator it;
		for(auto k = SEQ.begin(); k != SEQ.end(); ++k){
			 it = L.erase(q);
			 q = it;
		}
		auto empezar = it;
		list<int>::iterator it2;
		for(auto k = reverseaux.begin(); k != reverseaux.end(); ++k){
			it2 = L.insert(empezar, *k);
			empezar = it2;
		}
	}
}

int main(int argc, char *argv[]) {
	list<int>L =  {1,2,3,4, 8};
	list<int>SEQ = {2, 3, 4};
	list<int>REEM = {0, 3, 7};
	reemplazar(L, SEQ, REEM);
	for(auto x : L){
		cout << x << " ";
	}
	return 0;
}

