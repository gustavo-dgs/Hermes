#include "Herramientas.h"

std::string Herramientas::getFecha(){
    // Declaring argument for time()
    time_t tt;

    // Declaring variable to store return value of
    // localtime()
    struct tm * ti;

    // Applying time()
    time (&tt);

    // Using localtime()
    ti = localtime(&tt);

    return asctime(ti);
}
