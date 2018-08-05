cat contacts_hard.txt | grep -i 'bauer' | grep -v '78097' | grep -v 'Nhicholhas' | rev | cut -f2 | rev
