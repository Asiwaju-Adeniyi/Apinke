#include <vector>
#include <cmath>
#include <limits>
#include <algorithm>

std::vector<double> online_safe_softmax(const std::vector<double>& x) {
    int V = x.size();
    std::vector<double> y(V);

    double m = -std::numeric_limits<double>::infinity();
    double d = 0.0;

    for (int j = 0; j < V; j++) {
        double new_m = std::max(m, x[j]);
        d = d * std::exp(m - new_m) + std::exp(x[j] - new_m);
        m = new_m;
    }

    for (int i = 0; i < V; i++) {
        y[i] = std::exp(x[i] - m) / d;
    }

    return y;
}
