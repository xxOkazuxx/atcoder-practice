def main():
    s = input()
    if s[0] != 'A':
        print("WA")
        return False
    
    if s[2:-1].count('C') != 1:
        print("WA") 
        return False
    
    if sum(map(str.isupper, s)) != 2:
        print("WA")
        return False
    
    print("AC")


if __name__ == "__main__":
    main()