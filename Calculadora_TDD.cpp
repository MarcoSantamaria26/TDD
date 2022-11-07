#include <catch2/catch_test_macros.hpp>

class Calculadoras
{
    public:
        int suma ( int num1 , int num2 )
        {
            return num1 + num2 ;
        }
        int resta ( int num1 , int num2 )
        {
            return num1 - num2 ;
        }
        int multiplicacion ( int num1 , int num2 )
        {
            return num1 * num2 ;
        }
        int division ( int num1 , int num2 )
        {
            return num1 / num2 ;
        }
};

TEST_CASE( "calculadora" )
{
    // Arrange - Preparar

    Calculadoras calculadora ;

}

TEST_CASE( "suma" )
{
    // Arrange - Preparar
    Calculadoras calculadora ;
    int num_1 = 4 ;
    int num_2 = 6 ;

    // Act - Actuar
    int resultado = calculadora.suma ( num_1 , num_2 ) ;

    // Assert - Afirmar
    REQUIRE ( resultado == 10 ) ;
}

TEST_CASE( "diferencia" )
{
    // Arrange - Preparar
    Calculadoras calculadora ;
    int num_1 = 18 ;
    int num_2 = 8 ;

    // Act - Actuar
    int resultado = calculadora.resta ( num_1 , num_2 ) ;

    // Assert - Afirmar
    REQUIRE ( resultado == 10 ) ;
}

TEST_CASE( "producto" )
{
    // Arrange - Preparar
    Calculadoras calculadora ;
    int num_1 = 2 ;
    int num_2 = 5 ;

    // Act - Actuar
    int resultado = calculadora.multiplicacion ( num_1 , num_2 ) ;

    // Assert - Afirmar
    REQUIRE ( resultado == 10 ) ;
}

TEST_CASE( "division" )
{
    // Arrange - Preparar
    Calculadoras calculadora ;
    int num_1 = 30 ;
    int num_2 = 3 ;

    // Act - Actuar
    int resultado = calculadora.division ( num_1 , num_2 ) ;

    // Assert - Afirmar
    REQUIRE ( resultado == 10 ) ;
}