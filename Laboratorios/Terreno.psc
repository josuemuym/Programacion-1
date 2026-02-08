Algoritmo Terreno
	Definir largo, ancho, precio_metro2, perimetro, area, precio, alambre Como Real
	Escribir 'Ingrese el ancho del terreno en metros: '
	leer ancho
	Escribir 'Ingrese el largo del terreno en metros: '
	leer largo
	Escribir 'Ingrese el precio del metro cuadrado: '
	leer precio_metro2
	
	area = ancho*largo
	precio = area * precio_metro2
	perimetro = 2 * (ancho + largo)
	alambre = perimetro * 3
	
	Escribir 'Detalles del terreno'
	escribir 'ancho: ', ancho
	Escribir 'Largo: ', largo
	Escribir 'precio de m2: ', precio_metro2
	escribir 'Precio del terreno: ', precio
	Escribir 'Metros de alambre necesarios: ', alambre
FinAlgoritmo
