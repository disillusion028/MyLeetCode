# Read from the file words.txt and output the word frequency list to stdout.
cat words.txt|grep -o '[a-z]*'|sort|uniq -c|sort -r|sed -r 's/\s*([0-9]+)\s([a-z]+)/\2 \1/'
