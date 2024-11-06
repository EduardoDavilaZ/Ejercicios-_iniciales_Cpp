/*Utilice el algoritmo de Euclides para encontrar el Máximo Común Divisor entre dos números. El
proceso es muy parecido al utilizado en el programa R7.
DIVIDENDO = 550.
DIVISOR = 75.
550 / 75 = 7, resto 25.
75 / 25 = 3, resto 0, el M.C.D es el 25.

Observar el proceso: se divide DIVIDENDO por DIVISOR, si el resto es diferente de 0, el
DIVISOR pasa a DIVIDENDO, y el resto a DIVISOR; se repite el proceso hasta que una división
de resto 0, entonces, el último DIVISOR es el M.C.D. de los dos números entrados.*/