#Paweł Klimowcz
#1K132
#38709

zest_09 = [-12, 9000, 45, 190, -20, -9000, 45000]

def minmax(lista_09):
    minimalna_09 = lista_09[0]
    min_id_09 = 0
    maksymalna_09 = lista_09[0]
    max_id = 0
    licznik_09 = 0
    while licznik_09<len(lista_09):
        if minimalna_09 > lista_09[licznik_09]:
            minimalna_09 = lista_09[licznik_09]
            min_id_09 = licznik_09
        if maksymalna_09 < lista_09[licznik_09]:
            maksymalna_09 = lista_09[licznik_09]
            max_id = licznik_09
        licznik_09 += 1
    return minimalna_09,min_id_09,maksymalna_09,max_id

min_09,idmin_09,max_09,idmax_09 = minmax(zest_09)

print("Minimalna: ",min_09,", maksymalna: ",max_09)
print("Id minimalnego: ",idmin_09,", id maksymalnego: ",idmax_09)




