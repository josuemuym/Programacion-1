Algoritmo Terreno1
	Definir largoTerreno, anchoTerreno, precioMetro2, perimetroTerreno, areaTerreno, precioTerreno, alambreTerreno Como Real
	Escribir 'Ingrese el ancho del terreno en metros: '
	Leer anchoTerreno
	Escribir 'Ingrese el largo del terreno en metros: '
	Leer largoTerreno
	Escribir 'Ingrese el precio del metro cuadrado: '
	Leer precioMetro2
	areaTerreno <- anchoTerreno*largoTerreno
	precioTerreno <- areaTerreno*precioMetro2 // se agrego la palabra Terreno a cada variable
	perimetroTerreno <- 2*(anchoTerreno+largoTerreno)
	alambreTerreno <- perimetroTerreno*3
	Escribir 'Detalles del terreno'
	Escribir 'ancho: ', anchoTerreno
	Escribir 'Largo: ', largoTerreno
	Escribir 'precio de m2: ', precioMetro2
	Escribir 'Precio del terreno: ', precioTerreno
	Escribir 'Metros de alambre necesarios: ', alambreTerreno
FinAlgoritmo
