
# Online Python - IDE, Editor, Compiler, Interpreter

def fact (n):
    f = 1
    for j in range(f,n+1):
        f *= j
    
    return f
    
def combinatoria (n, k):
    c = fact(n)/(fact(k)*(fact(n-k)))
    
    return c
    
a = int(input("Ingresa un numero, para determinar su factorial"))
print(f"El factorial de {a} es {fact(a)}")

b = int(input("Ingresa el primer numero para determinar su combinatoria"))
c = int(input("Ingresa el segundo numero para determinar su combinatoria"))
print(f"La combinatoria de {b} y {c} es {combinatoria (b,c)}")

