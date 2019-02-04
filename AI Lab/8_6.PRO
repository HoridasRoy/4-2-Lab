domain
	name,password = symbol
predicates
	getinput(name,password)
	logon
	user(name,password)
clauses
	logon:-
		clearwindow,
		getinput(Name,Password),
	user(Name,Password),
		write("you are now logged on."),nl.

	logon:-
		write("sorry you are not parmitted access."),nl,
		write("Please try again."),nl.
		logon.

	getinput(Name,Password):-
		write("Please Enter Your Name:"),
		readln(Name),nl,
		write("Please Enter Your Password:"),
		readln(Password),nl.
		

	user(john,superman).
	user(sue,happy).
	user(bill,bigfoot).