#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED
#include "episodio.h"

class serie: public episodio
{
    public:
        serie();
        int num_ep;
        int num_temp;
        episodio *episodios;
        int *calificaciones;
        int cal_gral;
        serie(int,int);
        void set_ep(int,episodio);
        void set_cal(int,int);
        void set_cal_gral(int);
};


#endif // SERIE_H_INCLUDED
