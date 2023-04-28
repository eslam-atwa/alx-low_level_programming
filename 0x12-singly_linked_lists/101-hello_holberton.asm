          global    main
          extern    printf
main:
format: db `Hello, Holberton\n`,0
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
