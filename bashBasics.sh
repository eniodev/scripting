!# /bin/bash

echo "Hello World";


var="Hello, Énio Carlos"
#Checking if a string is set and if not setting a default value to it

echo ${var:-"You forgot to set a value to var!"}

# replace in BASH
echo ${var/Carlos/Paulo}

# substring in BASH

echo ${var:0:7}

#length in BASH

echo ${#var}

#reading a value from user

read -p "What is your favorite programming language ?" favorite

echo Your favorite language is : $favorite

read -p "Enter a city: " city

echo ${city:0:3}

