from random import randint, choice

propaganda = [ #kifogások listája
    "A brüsszeli szankciók tönkretesznek minket!",
    "Brüsszel az ön adójából fizetné a háborút!",
    "Ne táncoljunk úgy, ahogy ők fütyülnek!",
    "Ők adót emelnek, és ukrán aranybudira költik a pénzed.",
    "Magyarország előre megy, nem hátra!",
    "Dühíti önt Brüsszel?"
]

def fidesz(a,n): #fidesz sort
    maxIdx = 0 
    for i in range(n): #leggazdagabb (oligarcha) megkeresése
        if a[i]>a[maxIdx]:
            maxIdx = i
    for i in range(n): #mindenki más meglopása
        if i!=maxIdx:
            a[maxIdx]+= a[i]
            a[i] = 0
    print(choice(propaganda)) #az ellenzék hibáztatása

n = 16
a = []
for i in range(n): 
    a.append(randint(0,99))
print(*a)
fidesz(a,n)
print(*a)

# Tényleges szortírozás nem valósul meg, pont ahogy
# a fidesz alatt sem történik megfelelő kormányzás,
# viszont cserébe mindenki meg lesz lopva.