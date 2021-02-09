#ifndef EMPRESA_H
#define EMPRESA_H
#include "DBOperacion.h"
#include "Clasebase.h"
#include "Entidad.h"
#include "Usuario.h"

class Empresa : public Entidad, public ClaseBase
{
protected:
    std::string rif;
    int gerente;
    std::string tipo_empresa;
    int ranking;
public:
    Empresa();
    Empresa(std::string, std::string, int, std::string, std::string, std::string, std::string);
    Empresa(std::string, std::string, std::string, std::string, std::string, std::string);
    ~Empresa();

    std::string getRif() const;
    void setRif(const std::string &value);
    int getGerente() const;
    void setGerente(int value);
    std::string getTipo_empresa() const;
    void setTipo_empresa(const std::string &value);
    int getRanking() const;
    void setRanking(int value);

    void crear();
    bool consultar(std::string, std::string);
    void actualizar();
    void eliminar();

    list<Usuario*>* getListaEmpleados();
};

#endif // EMPRESA_H
