ldapsearch -Q "uid: z*" cn | grep "cn: Z" | sed 's/\cn: // ' | sort -rf
