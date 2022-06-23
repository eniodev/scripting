#! /bin/bash


#If-then-else statements in BASH

#lets ask the user's age and set it to var
read -p "How old are you ?" age

#checking if the valure in variable "age" is greater than 18
if [ $age -gt 18  ]
then
    echo Your can drink beer!
    
#elif = else if 
elif [ $age -eq 18 ]
then
    echo You can drink beer!
else
    echo Sorry, Kiddo. Maybe next year!
fi

#fi says it is end of the If-then-else statement
#its is actually the opposite of if
