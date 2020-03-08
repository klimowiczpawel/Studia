#Paweł Klimowcz
#1K132
#38709

zest_09 = [-12, 9000, 45, 190, -20, -9000, 45000]

def minmax(lista_09):
    minimalna_09 = lista_09[0]
    maksymalna_09 = lista_09[0]
    for liczba_09 in lista_09:
        if minimalna_09 > liczba_09:
            minimalna_09 = liczba_09
        if maksymalna_09 < liczba_09:
            maksymalna_09 = liczba_09
    return minimalna_09,maksymalna_09

min_09,max_09 = minmax(zest_09)

print("Minimalna: ",min_09,", maksymalna: ",max_09)



