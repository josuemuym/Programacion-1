Algoritmo Monedas1
	Definir opcionARealizar, montoCentavos, cantidadBilletes Como Entero
	Definir montoIngresado Como Real
	opcionARealizar <- 0
	Mientras opcionARealizar==0 O opcionARealizar==1 Hacer
		Escribir 'Ingrese la cantidad de dinero: '
		Leer montoIngresado // se cambiaron los nombres de variables como cantidad a cantidadBilletes, montocentavos a montoCentavos, opc a opcionARealizar
		montoCentavos <- trunc(montoIngresado*100)
		cantidad <- trunc(montoCentavos/20000)
		montoCentavos <- montoCentavos MOD 20000
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' billete(s) de 200'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/10000)
		montoCentavos <- montoCentavos MOD 10000
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' billete(s) de 100'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/5000)
		montoCentavos <- montoCentavos MOD 5000
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' billete(s) de 50'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/2000)
		montoCentavos <- montoCentavos MOD 2000
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' billete(s) de 20'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/1000)
		montoCentavos <- montoCentavos MOD 1000
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' billete(s) de 10'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/500)
		montoCentavos <- montoCentavos MOD 500
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' billete(s) de 5'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/100)
		montoCentavos <- montoCentavos MOD 100
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' moneda(s) de 1'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/50)
		montoCentavos <- montoCentavos MOD 50
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' moneda(s) de 0.50'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/25)
		montoCentavos <- montoCentavos MOD 25
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' moneda(s) de 0.25'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/10)
		montoCentavos <- montoCentavos MOD 10
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' moneda(s) de 0.10'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/5)
		montoCentavos <- montoCentavos MOD 5
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' moneda(s) de 0.05'
		FinSi
		cantidadBilletes <- trunc(montoCentavos/1)
		montoCentavos <- montoCentavos MOD 1
		Si cantidadBilletes>0 Entonces
			Escribir cantidadBilletes, ' moneda(s) de 0.01'
		FinSi
		Escribir '¿Desea ingresar otra cantidad? (1=si y 2=no): '
		Leer opcionARealizar
	FinMientras
	Escribir 'se cerro el programa'
FinAlgoritmo
