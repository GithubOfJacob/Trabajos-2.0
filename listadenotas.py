import random

def promedio(lista):
    prom = 0
    for i in lista:
        prom += i
    return prom/len(lista)
    
def desvest(lista):
    prom = promedio(lista)
    tot = 0 
    for i in lista:
        tot += (I-prom)**2
    return (tot/len(lista))**0.5

    
lista = [0]*10
#Genera una conjunto de 10 espacios, cada una con 0 en los valores
#lista = []
#Genera una conjunto vacio

for i in range(10):
#in range genera i en 10 oportunidades

    #lista.append(random.randint(0, 50)/10)
    #.append añade elementos a conjunto

    lista[i] = (random.randint(0, 50)/10)
    
print (f"la lista de datos es {lista}")


