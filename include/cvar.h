#ifndef CVAR_H
#define	CVAR_H

#include "../erfinv/erfinv.h"

namespace Cvar {

    /*!
    * Calculates Conditional Value-at-Risk as described in formula 15 of https://arxiv.org/abs/2103.02828
    */
    double calculate (double x, double mu, double sigma, double alpha);

    /*!
    * Calculate PDF of normal distribution (https://en.wikipedia.org/wiki/Normal_distribution)
    */
    double normPDF (double x, double mu, double sigma); // little phi
};

#endif