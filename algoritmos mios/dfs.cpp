#include <iostream>
#include <vector>
using namespace std;


// Recorrido en profundidad nodos (dfs)


vector<vector<int>>ady; // Nodos
vector<bool>visited;


void dfs(int nodo){
	cout << "Recorriendo el nodo: "<< nodo << endl;
	visited[nodo] = 1;
	for(int nod : ady[nodo]){
		if(!visited[nod]){
			dfs(nod);
		}
	}
	
}

int main(int argc, char *argv[]) {
	int n,m; 
	cin>>n >> m; //nodos y aristas;
	
	visited = vector<bool>(n, false);//preprarar vector visited
	ady.resize(n);
	
	//Cargar lista de adyacencia
	for(int i=0;i<m;i++) { 
		int a,b;
		cin >> a >>  b;
		a--;
		b--;
		ady[a].push_back(b);
		ady[b].push_back(a);
	}
	
	int componente = 0;
	for(int i=0;i<n;i++) { 
		if(!visited[i]){
			componente++;
			dfs(i);
		}
	}
	
	for(bool aux : visited){
		cout << aux << endl;
	}
	
	cout << "Componentes ->" << componente;
	
	return 0;
}

