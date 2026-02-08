Algoritmo Horas 
	definir hora como entero
	Escribir 'Ingrese la hora actual (0-23): '
	leer hora
	si hora >= 0 Y hora <= 5 Entonces
		escribir 'Madrugada'
	sino 
		si hora >= 6 Y hora <= 11 Entonces
			escribir 'Mañana'
		sino 
			si hora >= 12 Y hora <= 13 Entonces
				Escribir 'Mediodía'
			SiNo
				si hora >= 14 Y hora <= 19 Entonces
					Escribir 'Tarde'
				SiNo
					si hora >= 20 Y hora <=23 Entonces
						Escribir 'Noche'
					sino 
						Escribir 'hora invalida'
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
