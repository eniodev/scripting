.text #main section

	li $t0, 5 #passing the value 5 to register $t0
	li $t1, 10 #passing the value 10 to register $t1
	mul $s0, $t0, $t1 #multiplying $t0 by $t1 and storing in $s0
	li $v0, 1 #setting the code to print an integer
	move $a0, $s0 #moving the result to $a0 in order to be printed out

syscall #triggering the execution

