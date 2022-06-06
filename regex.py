#using Regex to find a words in a phrase or text
import re


text = 'Standard Bank told to do this, for the STANDARD H4ckth0n, blame it on them, I mean Standard H4ckth0n'
keyword = 'Standard H4ckth0n'
print(re.findall(keyword, text, flags=re.IGNORECASE))

