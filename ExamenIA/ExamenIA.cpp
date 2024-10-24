#include <iostream>

using namespace std;

int suma(int num1, int num2)
{
	return num1 + num2;
}

int cuadrados(int num)
{
	return num * num;
}

void imprimirMensaje()
{
	cout << "Llamaste esta funcion" << endl;
}

int main()
{
	cout << "MODULO 1" << endl;
	int edad;
	float dinero;

	//1.2 Condicionales
	cout << "Ingresa la edad: " << endl;
	cin >> edad;

	if (edad > 20 && edad < 40)
	{
		cout << "Es una persona joven" << endl;
	}
	else
	{
		cout << "No es una persona joven" << endl;
	}

	cout << "Ingresa cantidad de dinero" << endl;
	cin >> dinero;

	//1.3 Switch Case
	switch (static_cast<int>(dinero))
	{
	case 100:
		cout << "Poco dinero" << endl;
		break;

	case 500:
		cout << "Dinero moderado" << endl;
		break;

	case 1000:
		cout << "Mucho dinero" << endl;
		break;
	default:
		cout << "Cantidad variada de dinero" << endl;
		break;
	}

	//1.4 Tamaño del triangulo

	int tamano;
	cout << "De que tamaño quieres imprimir el triangulo?" << endl;
	cin >> tamano;

	for (int i = 1; i <= tamano; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*" << endl;
		}
		cout << endl;
	}

	//1.5 Triangulo a la derecha
	cout << "De que tamaño quieres imprimir el triangulo?" << endl;
	cin >> tamano;

	for (int i = 1; i <= tamano; i++
		)
	{
		for (int j = 0; j < tamano - i; j++)
		{
			cout << " " << endl;
		}

		for (int j = 0; j < i; j++)
		{
			cout << "*" << endl;
		}
		cout << endl;
	}

	//1.6 Crear 3 funciones
	int numero1, numero2;

	cout << "Ingresa el primer numero" << endl;
	cin >> numero1;
	cout << "Ingresa el segundo numero" << endl;
	cin >> numero2;

	cout << "La suma de " << numero1 << " y " << numero2 << " es: " << suma(numero1, numero2) << endl;
	cout << "El cuadrado de " << numero1 << " es: " << cuadrados(numero1) << endl;

	imprimirMensaje();

	cout << "MODULO 2" << endl;

	return 0;
	
}
