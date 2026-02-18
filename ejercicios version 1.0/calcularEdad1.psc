Algoritmo calcularEdad1
	Definir anoNacimiento, anoActual Como Entero
	Definir nombreUsuario Como Cadena
	anoNacimiento <- 0
	anoActual <- 0
	nombreUsuario <- ''
	Escribir 'Ingrese su nombre: '
	Leer nombreUsuario
	Escribir 'Ingrese su año de nacimiento: '
	Leer anoNacimiento
	Escribir 'Ingrese el año actual: '
	Leer anoActual
	edadActual <- anoActual-anoNacimiento
	Escribir nombreUsuario, ' tiene ', edadActual
FinAlgoritmo
