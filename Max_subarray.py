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

    