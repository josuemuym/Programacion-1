Algoritmo Salario
	Definir edad Como Entero
	Definir sueldoanual Como Real
	
	Escribir 'Ingrese su edad: '
	leer edad
	escribir 'Ingrese su sueldo anual: '
	leer sueldoanual
	
	si sueldoanual < 10000 Entonces
		si edad <= 30 entonces 
			descuento = sueldoanual * 0.006
			sueldototal = sueldoanual - descuento
		sino 
			descuento = sueldoanual * 0.005
		FinSi
	sino 
		si sueldoanual >= 10000 Y sueldoanual <= 19999 Entonces
			si edad <= 30 Entonces
				descuento = sueldoanual * 0.012
				sueldototal = sueldoanual - descuento
			sino 
				descuento = sueldoanual * 0.01
			FinSi
		SiNo
			si sueldoanual >= 20000 y sueldoanual <= 29999 Entonces
				si edad <= 30 Entonces
					descuento = sueldoanual * 0.024
					sueldototal = sueldoanual - descuento
				sino 
					descuento = sueldoanual * 0.02
				FinSi
			SiNo
				si sueldoanual >= 30000 Entonces
					si edad <= 30 Entonces
						descuento = sueldoanual * 0.030
						sueldototal = sueldoanual - descuento
					sino 
						descuento = sueldoanual * 0.025
						escribir 'El aporte seria de: ', descuento
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	escribir 'El aporte seria de: ', descuento
FinAlgoritmo
