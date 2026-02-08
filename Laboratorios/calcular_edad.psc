Algoritmo calcular_edad
	definir añonacimiento, añoactual como entero
	definir nombre como caracter 
	añonacimiento<-0
	añoactual<-0
	nombre<-''
	escribir 'Ingrese su nombre: '
	leer nombre
	escribir 'Ingrese su año de nacimiento: '
	leer añonacimiento
	escribir 'Ingrese el año actual: '
	leer añoactual
	edadactual=añoactual-añonacimiento
	escribir nombre, ' tiene ', edadactual
FinAlgoritmo