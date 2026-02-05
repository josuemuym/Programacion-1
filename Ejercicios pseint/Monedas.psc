Algoritmo Monedas
	Definir opc, montocentavos, cantidad Como Entero
	Definir monto Como Real
	opc <- 0
	Mientras opc==0 O opc==1 Hacer
		Escribir 'Ingrese la cantidad de dinero: '
		Leer monto
		montocentavos <- trunc(monto*100)
		cantidad <- trunc(montocentavos/20000)
		montocentavos <- montocentavos MOD 20000
		Si cantidad>0 Entonces
			Escribir cantidad, ' billete(s) de 200'
		FinSi
		cantidad <- trunc(montocentavos/10000)
		montocentavos <- montocentavos MOD 10000
		Si cantidad>0 Entonces
			Escribir cantidad, ' billete(s) de 100'
		FinSi
		cantidad <- trunc(montocentavos/5000)
		montocentavos <- montocentavos MOD 5000
		Si cantidad>0 Entonces
			Escribir cantidad, ' billete(s) de 50'
		FinSi
		cantidad <- trunc(montocentavos/2000)
		montocentavos <- montocentavos MOD 2000
		Si cantidad>0 Entonces
			Escribir cantidad, ' billete(s) de 20'
		FinSi
		cantidad <- trunc(montocentavos/1000)
		montocentavos <- montocentavos MOD 1000
		Si cantidad>0 Entonces
			Escribir cantidad, ' billete(s) de 10'
		FinSi
		cantidad <- trunc(montocentavos/500)
		montocentavos <- montocentavos MOD 500
		Si cantidad>0 Entonces
			Escribir cantidad, ' billete(s) de 5'
		FinSi
		cantidad <- trunc(montocentavos/100)
		montocentavos <- montocentavos MOD 100
		Si cantidad>0 Entonces
			Escribir cantidad, ' moneda(s) de 1'
		FinSi
		cantidad <- trunc(montocentavos/50)
		montocentavos <- montocentavos MOD 50
		Si cantidad>0 Entonces
			Escribir cantidad, ' moneda(s) de 0.50'
		FinSi
		cantidad <- trunc(montocentavos/25)
		montocentavos <- montocentavos MOD 25
		Si cantidad>0 Entonces
			Escribir cantidad, ' moneda(s) de 0.25'
		FinSi
		cantidad <- trunc(montocentavos/10)
		montocentavos <- montocentavos MOD 10
		Si cantidad>0 Entonces
			Escribir cantidad, ' moneda(s) de 0.10'
		FinSi
		cantidad <- trunc(montocentavos/5)
		montocentavos <- montocentavos MOD 5
		Si cantidad>0 Entonces
			Escribir cantidad, ' moneda(s) de 0.05'
		FinSi
		cantidad <- trunc(montocentavos/1)
		montocentavos <- montocentavos MOD 1
		Si cantidad>0 Entonces
			Escribir cantidad, ' moneda(s) de 0.01'
		FinSi
		Escribir '¿Desea ingresar otra cantidad? (1=si y 2=no): '
		Leer opc
	FinMientras
	Escribir 'se cerro el programa'
FinAlgoritmo
