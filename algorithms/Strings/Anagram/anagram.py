max_chars = 256

def anagram(str1, str2):
    count1 = [0] * max_chars
    count2 = [0] * max_chars

    for i in str1:
        count1[ord(i)]+=1

    for i in str2:
        count2[ord(i)]+=1

    if len(str1) != len(str2):
        return 0

    for i in range(max_chars):
        if count1[i] != count2[i]:
            return 0

    return 1

def main():
    str1 = input("Enter your first string\n")
    str2 = input("Enter your second string\n")

    if anagram(str1, str2):
        print("Two strings are anagram of each other")
    else:
        print("Two strings are not anagram of each other")

if __name__ == '__main__':
    main()
