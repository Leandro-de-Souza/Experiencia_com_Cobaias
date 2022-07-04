
N = int(input("Quantos casos de teste serao digitados? "))

ratos = 0
sapos = 0
coelhos = 0

for i in range(0, N):
    quantCobaias = int(input("Quantidade de cobaias: "))
    tipo = input("Tipo de cobaia: ")

    if tipo == 'R':
        ratos = ratos + quantCobaias
    elif tipo == 'S':
        sapos = sapos + quantCobaias
    else:
        coelhos = coelhos + quantCobaias

total = ratos + sapos + coelhos
percentualC = (coelhos / total) * 100.0
percentualR = (ratos / total) * 100.0
percentualS = (sapos / total) * 100.0

print()
print("RELATORIO FINAL:")
print(f"Total: {total} cobaias")
print(f"Total de coelhos: {coelhos}")
print(f"Total de ratos: {ratos}")
print(f"Total de sapos: {sapos}")
print(f"Percentual de coelhos: {percentualC:.2f}")
print(f"Percentual de ratos: {percentualR:.2f}")
print(f"Percentual de sapos: {percentualS:.2f}")



