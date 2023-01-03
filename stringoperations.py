sentence=input("Enter the Sentence:")
sen=sentence.split()
  

# Find the word with the longest length
def longest_word(string):
  words = sentence.split()
  longest_wordd = ""
  for word in words:
    if len(word) > len(longest_wordd):
      longest_wordd = word
  return longest_wordd

print(sen)
choice=1
while(choice!=0):
    print(" 0.Exit\n 1.Palindrome\n 2.Index of sub string\n 3.Frequency Occurance of each word.\n 4.Find longest word.\n")
    choice=int(input("Enter your Choice:"))
    if choice==1:
        sub=input("Enter the Sub String:")
        if sub==sub[::-1]:
            print(f"{sub} is Palindrome. \n")
        else:
            print(f"{sub} is not Palindrome. \n")
    elif choice==2:
        sub=input("Enter the Sub String:")
        x=sentence.find(sub)
        print(f"Sub String is present at {x} position. \n")
    elif choice==3:
        freq={}
        for i in sen:
            if freq in sen:
                freq[i]+=1
            else:
                freq[i]=1
        print(f"Frequency Occourance in each word is {freq}. \n")
    elif choice==4:
        print("Longest Word from the sentence is", longest_word(sentence) )

