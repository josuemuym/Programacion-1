Algoritmo calculadora_sueldo
	Definir horasTrabajadas Como Real
    Definir tarifaPorHora Como Real
    Definir salarioBruto Como Real
    
    Escribir 'Introduzca las horas trabajadas (-1 para salir): '
    Leer horasTrabajadas
    
    Mientras horasTrabajadas <> -1 Hacer
        Escribir 'Introduzca la tarifa por horas del empleado: '
        Leer tarifaPorHora
        
        Si horasTrabajadas <= 40 Entonces
            salarioBruto = horasTrabajadas * tarifaPorHora
        SiNo
            salarioBruto = (40 * tarifaPorHora) + ((horasTrabajadas - 40) * tarifaPorHora * 1.5)
        FinSi
        
        Escribir 'El salario es Q', salarioBruto
        
        Escribir 'Introduzca las horas trabajadas (-1 para salir): '
        Leer horasTrabajadas
    FinMientras
FinAlgoritmo
