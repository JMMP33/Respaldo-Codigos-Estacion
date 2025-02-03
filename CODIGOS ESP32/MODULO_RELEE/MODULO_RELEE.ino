# Programa para hacer funcionar el rele. 

from machine import Pin 
import time 

#Creamos objetos 

rele = Pin (13, Pin.OUT)

while True: 
    rele.value(1)
    print("Led Rojo ensendido")
    time.sleep(3)

    rele.value(0)
    print("Led Rojo apagado")
    time.sleep(3)