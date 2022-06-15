#ifndef VIDEOTECA_H_INCLUDED
#define VIDEOTECA_H_INCLUDED
#include "iostream"
#include "videos.h"

using namespace std;

class videoteca
{
    public:
        videoteca();
        int cantidadVideos;
        videos *coleccion;
        videoteca(int);
        void show();
        void set_video(int,videos);
};


#endif // VIDEOTECA_H_INCLUDED
