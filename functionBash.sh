#! /bin/bash



function operateNumbers()
{
    if [[ $2 = '+' ]] ||  [[ $2 = '-' ]]
    then
        echo $(($1+$3))
  fi
}
reslt= $(operateNumbers)
echo $result
echo $1 $2 $3