#ifndef CVAR_HPP
#define	CVAR_HPP

#include "../erfinv/erfinv.h"

class Cvar {

    float mu;
    float sigma;

    public:

        Cvar() {}

        ~Cvar() {}

        /*!
        *
        */
        void initDistribution (float mu, float sigma);

        /*!
        *
        */
        float calculate (float x, float mu, float sigma, float alpha);


        /*!
        *
        */
        float normPdf (float x, float mu, float sigma);

        /*!
        *
        */
        float erfInv (float alpha);

};


#endif