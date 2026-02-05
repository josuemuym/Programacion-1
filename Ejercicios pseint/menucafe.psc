Algoritmo menu
	cafe <- 5
	hotdog <- 15
	papas <- 10
	Definir opc Como Entero
	Definir monto Como Real
	Definir agregar Como Cadena
	monto <- 0
	agregar <- 'si'
	Repetir
		Escribir ' Menú de café '
		Escribir '1. Café --- Q5'
		Escribir '2. Hotdog --- Q15'
		Escribir '3. Papas --- Q10'
		Escribir '¿Cuál desea comprar? (1-3)'
		Leer opc
		Si opc==1 Entonces
			monto <- monto+cafe
			Escribir 'agregaste cafe. Subtotal: Q', monto
		SiNo
			Si opc==2 Entonces
				monto <- monto+hotdog
				Escribir 'agregaste hotdog. Subtotal: Q', monto
			SiNo
				Si opc==3 Entonces
					monto <- monto+papas
					Escribir 'Agregaste papas. Subtotal: Q', monto
				SiNo
					Escribir 'no existe ese numero en el menú'
				FinSi
			FinSi
		FinSi
		Escribir '¿Deseas continuar tu pedido? (si/no)'
		Leer agregar
	Hasta Que (agregar=='no' O agregar=='NO')
	Escribir 'Su total es: Q', monto
FinAlgoritmo
