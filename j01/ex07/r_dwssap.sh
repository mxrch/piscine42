cat /etc/passwd | sed '/^#/ d' | awk 'BEGIN {n=2} n == 1 { print $0; n=2; next } n == 2 {n=1; next}' | cut -f1 -d":" | rev | sort -r | sed -n "$(echo $FT_LINE1),$(echo $FT_LINE2) p" | tr '\n' ',' | sed 's/,/, /g'| sed 's/..$//' | sed -a 's/$/./' | tr -d '\n'