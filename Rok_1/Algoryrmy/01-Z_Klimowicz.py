#Paweł Klimowcz
#1K132
#38709

"""
    Z treści zadania nie do końca rozumiem czy lista 3 do której
    należy wpisać sumę kwadratów ma być calkowicie pusta jak aktualnie
    czy ma być tej samej długości jak lista 1 i 2 (wersja wykomentowana).
    W komentarzach pozostawiłem wersję przy liście zawierającą taką samą
    listę elementów jak lista 1 i 2. W przypadku zmiany należy odkomentować
    te linie kodu a w zamian zakomentować linie poprzedzające komentarz.
"""

from math import sqrt

lista_1_09 = [2,4,3,9,3,5,6,5,3,8]
lista_2_09 = [3,6,1,8,9,2,3,7,4,5]
lista_3_09 = []
#lista_3_09 = ['','','','','','','','','','']
suma_09 = 0
licznik_09 = 0
print("Kolejne elementy:")
while licznik_09 < 10:
    lista_3_09.append(lista_1_09[licznik_09]**2 + lista_2_09[licznik_09]**2)
    #lista_3_09[licznik_09] = (lista_1_09[licznik_09]**2 + lista_2_09[licznik_09]**2)
    suma_09 += lista_3_09[licznik_09]
    licznik_09 += 1
pierwiastek_sumy_09 = sqrt(suma_09)
print("Lista lista_1_09 = ",lista_1_09)
print("Lista lista_2_09 = ",lista_2_09)
print("Lista lista_3_09 = ",lista_3_09)
print("Suma elementów listy lista_3_09 = ",suma_09)
print("Pierwiastek sumy elementów listy lista_3_09 = ",pierwiastek_sumy_09)


    



