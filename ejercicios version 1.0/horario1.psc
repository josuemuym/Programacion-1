Algoritmo horario1
	Definir horarioActual Como Entero
	Escribir 'Ingrese la hora actual (0-23): '
	Leer horarioActual // se cambio hora a horarioActual
	Si horarioActual>=0 Y horarioActual<=5 Entonces
		Escribir 'Madrugada'
	SiNo
		Si horarioActual>=6 Y horarioActual<=11 Entonces
			Escribir 'Mañana'
		SiNo
			Si horarioActual>=12 Y horarioActual<=13 Entonces
				Escribir 'Mediodía'
			SiNo
				Si horarioActual>=14 Y horarioActual<=19 Entonces
					Escribir 'Tarde'
				SiNo
					Si horarioActual>=20 Y horarioActual<=23 Entonces
						Escribir 'Noche'
					SiNo
						Escribir 'hora invalida'
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
