/*-----------------------------------------------------
 * Dato de Entrada: largo, ancho (double)
 * Dato de Salida: perimetro, area (double)
 ----------------------------------------------------*/

#include "CRectangulo.h"

int main()
{ CRectangulo   R1;

    R1.setLargo(14.0);
    R1.setAncho(7.5);
    cout << "El area es : " << R1.area() << "\n";
    cout << "El perimetro es: " << R1.perimetro() << "\n";

    cout << "ahora creamos el segundo objeto de la clase CRentangulo \n";
    double l,a;
    cout << "Largo: ";
    cin >> l;
    cout << "Acho: ";
    cin >> a;
    CRectangulo R2(l,a);
    cout << "El perimetro es: " << R2.perimetro() << "\n";
    cout << "El area      es: " << R2.area() << "\n";
    cout << "Repetimos el calculo pero modificando previamente los valores del largo y ancho en el objeto R2\n";
    //--- ahora modificamos los valores de los atributos de R2, para luego calcular nuevamente el
    //--- el area y el perimtero.
    R2.setLargo(R2.getLargo() + 10);
    R2.setAncho(R2.getAncho() + 10);
    cout << "El perimetro es: " << R2.perimetro() << "\n";
    cout << "El area      es: " << R2.area() << "\n";
    return 0;
}
