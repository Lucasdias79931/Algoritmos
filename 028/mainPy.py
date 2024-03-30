''''
    1 inicio
    2 leia vetor a[10]
    3 leia vetor b[10]
    4 escreva somente os que aparecem e a ou em b (ordem: primeiro os de a, depois os de b)
    fim

'''
tam = 2
a = []
b = []

print("Valores de a")
for i in range(tam):
    a.append(int(input("\nDigite um valor: ")))

print("Valores de b")
for i in range(tam):
    b.append(int(input("\nDigite um valor: ")))

c = []

for i in a:
    chave = False
    for j in b:
        if i == j:
            chave = True
            break
    
    if not chave:
        c.append(i)

for i in b:
    chave = False
    for j in a:
        if i == j:
            chave = True
            break
    
    if not chave:
        c.append(i)

print(c)


