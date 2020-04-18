#Paweł Klimowcz
#1K132
#38709

zest_09 = [-12, 9000, 45,-2,  190, -20, -9000, 45000, 4, -54, 25, -641, 427]

def babel(lista_09):
    ileEl_09 = len(lista_09)
    ilosczmian_09 = 0
    przebieg_09 = 0
    iteracji_09 = 0
    laczna_ilosc_zmian_09 = 0
    while ilosczmian_09 or przebieg_09 == 0:
        przebieg_09 += 1
        laczna_ilosc_zmian_09 += ilosczmian_09
        ilosczmian_09 = 0
        iteracji_09 +=1
        for i in range(ileEl_09 - przebieg_09):
            if lista_09[i]>lista_09[i+1]:
                lista_09[i],lista_09[i+1] = lista_09[i+1],lista_09[i]
                ilosczmian_09 +=1
    return iteracji_09,laczna_ilosc_zmian_09

print("Lista przed sortowaniem:")
print(zest_09)
ilosc_iteracji_09,lacznie_zmian_09 = babel(zest_09)
print("Lista po sortowaniu:")
print(zest_09)
print("Wykonano ",ilosc_iteracji_09," iteracji wykonując ",lacznie_zmian_09," przestawień elementów.")
