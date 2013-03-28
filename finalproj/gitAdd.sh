#!/bin/bash

clear

git init

printf "What is your username?: "
read username

printf "What directory are you working in?: "
read directory


while [1]

	printf " What file do you wish to upload?: "
	read filename

	git add $filename

	printf "What is the message with this upload?: "
	read message

	git commit -m "$message"
	git remote add origin https://github.com/$username/$directory.git

	git push origin master
done
