#include <iostream>
#include <vector>
#include <unordered_map>

void dfs(std::unordered_map<int, std::vector<int>> G, int s);

int main() {
    std::unordered_map<int, std::vector<int>> g1;

    g1[1] = {2, 3, 4};
    g1[2] = {1, 5, 6};
    g1[3] = {1, 7};
    g1[4] = {1, 8, 9};
    g1[5] = {2};
    g1[6] = {2};
    g1[7] = {3, 10};
    g1[8] = {4};
    g1[9] = {4};
    g1[10] = {7};

    dfs(g1, 1);
    return 0;
}

void dfs(std::unordered_map<int, std::vector<int>> G, int s){
    int counter = 0;
    
    std::unordered_map<int, std::vector<int>> new_order;
    // Pomocnicza lista indeksów jeszcze nie sprawdzonych.
    std::vector<int> lista_numerow;
    for (int i = 1; i <= G.size(); i++){
        lista_numerow.push_back(i);
    }
    std::vector<int> lista = {s};

    while(lista.size() < 0){
        break;
    }
}