def palindrome(str):
    for i in range(len(str)):
        if str[i] != str[len(str)-1-i]:
            print("The given string is not palindrome")
            return
    print("The given string is a palindrome")

def main():
    str = input("Enter a string:\n")
    palindrome(str)

if __name__ == '__main__':
    main()
