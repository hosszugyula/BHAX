kiserletek_szama = 10000
nyeremeny = sample(1:3, kiserletek_szama, replace = T)
jatekos = sample(1:3, kiserletek_szama, replace = T) 
musorvezeto = vector(length = kiserletek_szama)


#ESET 1-------------------------------------------------------------------------------------------------------
#Nem vltoztatunk a vlasztsunkon
for (i in 1:kiserletek_szama)
{
    if (nyeremeny[i] == jatekos[i])
    {
        
        mibol = setdiff(c(1, 2, 3), nyeremeny[i])

    } else 
    {
        mibol = setdiff(c(1, 2, 3), c(nyeremeny[i], jatekos[i]))

    }

    musorvezeto[i] = mibol[sample(1:length(mibol), 1)]
}

nemvaltoztatesnyer = which(nyeremeny == jatekos)


#ESET 2------------------------------------------------------------------------------------------------------
#Vltoztatunk a vlasztsunkon

jatekos_uj = vector(length = kiserletek_szama)

for (i in 1:kiserletek_szama)
{
    holvalt = setdiff(c(1, 2, 3), c(musorvezeto[i], jatekos[i])) 


    jatekos_uj[i] = holvalt
}

valtoztatesnyer = which(nyeremeny == jatekos_uj)
print("Kisrletek szma:", quote = FALSE)
print(kiserletek_szama)
print("Hnyszor nyernk vltoztats nlkl:", quote = FALSE)
print(length(nemvaltoztatesnyer))
print("Hnyszor nyernk vltoztatssal:", quote = FALSE)
print(length(valtoztatesnyer))
print("Nemvltoztats / Vltoztats:", quote = FALSE)
print(length(nemvaltoztatesnyer) / length(valtoztatesnyer))
print("Nemvltoztats + Vltoztats:", quote = FALSE)
print(length(nemvaltoztatesnyer) + length(valtoztatesnyer))