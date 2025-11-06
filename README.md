# CPP-Module-01

- ex00 ✅
- ex01 ✅
- ex02 ✅
- ex03 ✅
- ex04 ✅
- ex05 ✅

## Bonus:
- ex06 ✅

	En el ex06 podria usar /* fall through */ : ⬇️

	```
	
	switch (index)
	{
		case 0:
			debug();
			/* fall throught */
		case 1:
			info();
			/* fall throught */
		case 2:
			warning();
			/* fall throught */
		case 3:
			error();
			/* fall throught */
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

	```
