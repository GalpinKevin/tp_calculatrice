// effectue les divisions

#include <iostream>
#include <cstdint>
using namespace std;

//division INT32
/// \brief Fonction de division de deux nombres de type int32_t
///
/// \param operandeA un entier 32bits
/// \param operandeB un entier 32bits
/// \sa diviser(int64_t, int64_t), diviser(double, double), diviser(float, float)
///
int32_t diviser (int32_t operandeA, int32_t operandeB)
{
  return (operandeA/operandeB);
}

//division INT64
/// \brief Fonction de division de deux nombres de type int64_t
///
/// \param operandeA un entier 64bits
/// \param operandeB un entier 64bits
/// \sa diviser(int32_t, int32_t), diviser(double, double), diviser(float, float)
///
int64_t diviser (int64_t operandeA, int64_t operandeB)
{
  return (operandeA/operandeB);
}

//division float
/// \brief Fonction de division de deux nombres de type float
///
/// \param operandeA un float
/// \param operandeB un float
/// \sa diviser(int64_t, int64_t), diviser(double, double), diviser(int32_t, int32_t)
///
float diviser (float operandeA, float operandeB)
{
  return (operandeA/operandeB);
}

//division double
/// \brief Fonction de division de deux nombres de type double
///
/// \param operandeA un double
/// \param operandeB un double
/// \sa diviser(int64_t, int64_t), diviser(int32_t, int32_t), diviser(float, float)
///
double diviser (double operandeA, double operandeB)
{
  return (operandeA/operandeB);
}
