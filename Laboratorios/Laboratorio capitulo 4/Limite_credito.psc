Algoritmo Limite_credito
	definir cuentaCliente Como Entero
    definir saldoInicial, totalArticulosCargados, totalCreditosAplicados Como Real
    Definir limiteCredito Como Real
	
    Escribir 'Ingrese numero de cuenta o -1 para salir:'
    Leer cuentaCliente
	
    Mientras cuentaCliente <> -1 Hacer
        Escribir 'Ingrese su saldo inicial del mes: '
        Leer saldoInicial
        Escribir 'Ingrese los cargos totales: '
        Leer totalArticulosCargados
        Escribir 'Ingrese los creditos totales: '
        Leer totalCreditosAplicados
        Escribir 'Ingrese el limite de credito: '
        Leer limiteCredito
		
        nuevoSaldo = (saldoInicial + totalArticulosCargados) - totalCreditosAplicados
		
        Escribir 'Cuenta: ', cuentaCliente
        Escribir 'Limite de crédito: ', limiteCredito
        Escribir 'Nuevo saldo: ', nuevoSaldo
        Si limiteCredito < nuevoSaldo Entonces
            Escribir 'Se excedio el limite de su credito'
        FinSi
		
        Escribir 'Ingrese numero de cuenta o -1 para salir:'
        Leer cuentaCliente
    FinMientras
FinAlgoritmo
