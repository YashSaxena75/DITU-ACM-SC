import string
nae=raw_input("Enter the name")
name=list(nae)
first=name[0].lower()
del name[0]
name.append(first)
name.append('ay')
PiglatinName=''
for x in range (0,len(name)):
    PiglatinName=PiglatinName+name[x]
print PiglatinName

