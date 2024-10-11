//
// Created by Hilda Bermejo on 10/10/24.
//

#include "CRectangulo.h"


double  CRectangulo::area()
{
    return largo * ancho;
}


double  CRectangulo::perimetro()
{
   return 2*largo + 2*ancho;
}