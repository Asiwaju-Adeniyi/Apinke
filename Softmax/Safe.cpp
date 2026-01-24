#include <iostream> 
#include <cmath> 
#include <vector>

std::vector<double> softmax (const std::vector<double>& x) {
    int V = x.size();
    std::vector<double> y(V);

    double m = -std::numeric_limits<double>::infinity();

    for (int k = 0; k < V; k++) {
        m = std::max(m, x[k]);
    };

    double d = 0.0f;

    for (int j = 0; j < V; j++) {
        d += std::exp(x[j] - m);
    }

    for (int i = 0; i < V; i++) {
        y[i] = std::exp(x[i] - m) / d;
    }

    return y;
}
