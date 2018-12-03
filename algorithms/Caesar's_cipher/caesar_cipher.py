text=input("Enter encrypted message:")
clue=input('Enter "CLUE" :')
print(''.join(map((lambda x: chr((ord(x)-ord(clue[0])+2)%26+65)),text)))
