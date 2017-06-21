cat /etc/passwd | grep -v "#" | awk NR%2==0 | awk -v l1="$FT_LINE1" -v l2="$FT_LINE2" 'NR>=l1 && NR<=l2' | cut -d ":" -f 1 | rev | sort -r | sed s/$/,/ | tr "\n" " " | sed "s/..$/./"
