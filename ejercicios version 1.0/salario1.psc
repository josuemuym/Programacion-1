Algoritmo salario1
	Definir edadUsuario Como Entero
	Definir sueldoAnual Como Real
	Escribir 'Ingrese su edad: '
	Leer edadUsuario
	Escribir 'Ingrese su sueldo anual: '
	Leer sueldoAnual // unicamente se coloco mayuscula a algunas variables, como sueldoanual a sueldoAnual
	Si sueldoAnual<10000 Entonces
		Si edadUsuario<=30 Entonces
			descuentoSueldo <- sueldoAnual*0.006
			sueldoTotal <- sueldoAnual-descuentoSueldo
		SiNo
			descuentoSueldo <- sueldoAnual*0.005
		FinSi
	SiNo
		Si sueldoAnual>=10000 Y sueldoAnual<=19999 Entonces
			Si edadUsuario<=30 Entonces
				descuentoSueldo <- sueldoAnual*0.012
				sueldoTotal <- sueldoAnual-descuentoSueldo
			SiNo
				descuentoSueldo <- sueldoAnual*0.01
			FinSi
		SiNo
			Si sueldoAnual>=20000 Y sueldoAnual<=29999 Entonces
				Si edadUsuario<=30 Entonces
					descuentoSueldo <- sueldoAnual*0.024
					sueldoTotal <- sueldoAnual-descuentoSueldo
				SiNo
					descuentoSueldo <- sueldoAnual*0.02
				FinSi
			SiNo
				Si sueldoAnual>=30000 Entonces
					Si edadUsuario<=30 Entonces
						descuentoSueldo <- sueldoAnual*0.030
						sueldoTotal <- sueldoAnual-descuentoSueldo
					SiNo
						descuentoSueldo <- sueldoAnual*0.025
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir 'El aporte seria de: ', descuentoSueldo
FinAlgoritmo
