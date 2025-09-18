cat /etc/passwd

awk -F '!/^#/ && NR%2==0 {print $1}' /etc/passwd | rev | sort -r |\


awk -v start="$FT_LINE1"  -v end="$FT_LINE2" 'NR>=start && NR<=end {print}'| \


tr '\n' ',' |sed 's/,$/./' |sed 's/,/, /g'
