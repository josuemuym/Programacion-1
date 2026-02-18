Algoritmo calculadora
	Definir opcionElegir Como Entero
	Definir sumaValores, restaValores, divisionValores, multiplicarValores, modValores Como Real
	Definir totalOperacion Como Real
	Definir valor1, valor2 Como Real
	Repetir
		Escribir 'calculadora'
		Escribir 'Que operacion desea realizar'
		Escribir '1. suma'
		Escribir '2. resta'
		Escribir '3. multiplicacion'
		Escribir '4. division'
		Escribir '5. modulo'
		Escribir '6. salir'
		Escribir 'Eliga una opcion (1-6): '
		Leer opcionElegir
		Si opcionElegir==1 Entonces
			Escribir 'ingrese el primer valor'
			Leer valor1
			Escribir 'ingrese el segundo valor'
			Leer valor2
			sumaValores <- valor1+valor2
			totalOperacion <- sumaValores
			Escribir totalOperacion
		SiNo
			Si opcionElegir==2 Entonces
				Escribir 'ingrese el primer valor'
				Leer valor1
				Escribir 'ingrese el segundo valor'
				Leer valor2
				restaValores <- valor1-valor2
				totalOperacion <- restaValores
				Escribir totalOperacion
			SiNo
				Si opcionElegir==3 Entonces
					Escribir 'ingrese el primer valor'
					Leer valor1
					Escribir 'ingrese el segundo valor'
					Leer valor2
					multiplicarValores <- valor1*valor2
					totalOperacion <- multiplicarValores
					Escribir totalOperacion
				SiNo
					Si opcionElegir==4 Entonces
						Escribir 'ingrese el primer valor'
						Leer valor1
						Escribir 'ingrese el segundo valor'
						Leer valor2
						divisionValores <- valor1/valor2
						totalOperacion <- divisionValores
						Escribir totalOperacion
					SiNo
						Si opcionElegir==5 Entonces
							Escribir 'ingrese el primer valor'
							Leer valor1
							Escribir 'ingrese el segundo valor'
							Leer valor2
							modValores <- valor1 MOD valor2
							totalOperacion <- modValores
							Escribir totalOperacion
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	Hasta Que opcionElegir==6
FinAlgoritmo
