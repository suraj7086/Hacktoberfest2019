items = raw_input("Input the string: ")
words = [word for word in items.split(" ")]
print(" ".join(sorted(list(set(words)))))
