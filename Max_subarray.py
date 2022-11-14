#DEFINIMOS EL CASO BASE
def maxArreglo(arregloRecibido):
    if len(arregloRecibido) == 1: # SI EL subarreglo ES DE UN SOLO ELEMENTO DEVOLVEMOS ESE
        return arregloRecibido[0]
    # DIVIDIMOS
    mitadArreglo = len(arregloRecibido) // 2
    arreglo_Izq = arregloRecibido[0 : mitadArreglo] # COMIENZA DE 0 A LA mitad
    arreglo_Der = arregloRecibido[mitadArreglo : ] # VA DE LA mitad HASTA LLEGAR AL FINAL
    maximoPorIzq = maxArreglo(arreglo_Izq)
    maximoPorDer = maxArreglo(arreglo_Der)
    maximoMitad = calcularMaximoMitad(arregloRecibido, mitadArreglo)

    return max(maximoPorIzq, maximoPorDer, maximoMitad)

def calcularMaximoMitad(arregloRecibido, mitad):
    suma = 0
    maximoPorIzq = -1000000000
    for numero in arregloRecibido[mitad - 1 :: - 1]:
        suma = suma + numero
        if (suma > maximoPorIzq):
            maximoPorIzq = suma
    suma2 = 0
    maximoPorDer = -1000000000
    for numero in arregloRecibido[mitad : ]:
        suma = suma + numero
        if (suma > maximoPorDer):
            maximoPorDer = suma
    return maximoPorIzq + maximoPorDer

arreglo = [-3,1-2,2,-1,2]
arregloMaximo = maxArreglo(arreglo)
print(arregloMaximo)