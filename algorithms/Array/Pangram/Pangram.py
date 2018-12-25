x = input("Enter a string\n")
my_list = [0]*26
for letters in x :
    if letters == " ":
        continue
    elif ord(letters)>=65 and ord(letters)<=90:
        my_list[ord(letters)-ord('A')]+=1
    else:
        my_list[ord(letters)-ord('a')]+=1
if my_list.count(0) == 0:
    print("Its a Pangram\n")
else:
    print("Not a Pangram\n")
