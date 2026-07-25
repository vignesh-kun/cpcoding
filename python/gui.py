def checkk(filename, words):
    with open(filename, 'r') as file:
        content = file.read().split()
    for word in words:
        if word in content:
            print(True)
        else:
            print(False)
filee = "30.txt"
word = ["a"]
checkk(filee, word)