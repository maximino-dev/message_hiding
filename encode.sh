#!/bin/bash

IFS="\n"
echo -n "Entrez une phrase quelconque: "
read sentence

echo -n "Saisissez maintenant le mot a cacher: "
read secret_message

final_message=$(./main $sentence $secret_message)

echo -n "La nouvelle phrase est maintenant: "
index_char=0
while [ $index_char -lt ${#final_message} ]; do
	char=$(echo $final_message | cut -c$((index_char+1)))
	if [[ $char != [a-z] && $char != " " ]]; then
		char=$(echo $final_message | cut -c$((index_char+1))-$((index_char+4)))
		printf "\u$char"
		((index_char=index_char+4))
	else 
    	echo -n $char
    	((index_char++))
    fi
done

IFS=" "
echo ""