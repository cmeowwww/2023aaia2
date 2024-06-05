#week16-1 的輔助常識1 collections.Counter

from collections import Counter
words=["bella","label","roller"]
for i in range(3):
  counter=Counter(words[i]) #counter= collections.Counter(words[i])
  print(words[i],counter)

ans=Counter(words[0])&Counter(words[1])&Counter(words[2])
#ans=collections.Counter(words[0])&collections.Counter(words[1])&collections.Counter(words[2])

print(ans)