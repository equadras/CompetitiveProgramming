#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

struct Ponto {
    int x, y;
    double distancia;

    // Construtor para calcular a distância à origem
    Ponto(int x, int y) : x(x), y(y) {
        distancia = std::sqrt(x*x + y*y);
    }

    // Função de comparação para ordenação
    bool operator<(const Ponto& outro) const {
        // Ordena com base na distância à origem
        if (distancia != outro.distancia)
            return distancia < outro.distancia;
        // Se as distâncias são iguais, mantém a ordem original
        return false;
    }
};

int main() {
    int N; cin >> N;

    vector<Ponto> pontos;

    for (int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        pontos.emplace_back(x, y);
    }

    sort(pontos.begin(), pontos.end());

    for (const auto& ponto : pontos) {
        std::cout << ponto.x << " " << ponto.y << "\n";
    }

    return 0;
}

