#ifndef CVAR_HPP
#define	CVAR_HPP

#include "../erfinv/erfinv.h"

class Cvar {



    public:

        float mu;
        float sigma;

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