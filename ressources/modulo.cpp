// effectue les modulos

#include <iostream>
#include <cstdint>
using namespace std;

//modulo INT32
/// \brief Fonction de modulo de deux nombres de type int32_t
///
/// \param operandeA un entier 32bits
/// \param operandeB un entier 32bits
/// \sa modulo(int64_t, int64_t)
///
int32_t modulo (int32_t operandeA, int32_t operandeB)
{
  return (operandeA%operandeB);
}

//modulo INT64
/// \brief Fonction d'addition de deux nombres de type int64_t
///
/// \param operandeA un entier 64bits
/// \param operandeB un entier 64bits
/// \sa modulo(int32_t, int32_t)
///
int64_t modulo (int64_t operandeA, int64_t operandeB)
{
  return (operandeA%operandeB);
}
