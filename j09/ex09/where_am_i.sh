mavar=$(ifconfig | grep "ether" | rev | cut -d " " -f 2 | rev | tail -n 1)
if [ -d $mavar ]
then
	echo "I am lost!"
else
	ifconfig | grep "inet " | cut -d " " -f 2
fi
