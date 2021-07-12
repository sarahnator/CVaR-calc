#include <cvar.h>

#include <cmath>

namespace Cvar {

    double calculate (double x, double mu, double sigma, double alpha) {
        return mu + sigma * (normPDF(erfinv(alpha), mu, sigma) / (1 - alpha));
    }

    double normPDF (double x, double mu, double sigma) {
        return (1 / (sigma * std::sqrt(2 * M_PI)) * std::exp(-0.5 * pow((x - mu) / sigma, 2)));
    }

}