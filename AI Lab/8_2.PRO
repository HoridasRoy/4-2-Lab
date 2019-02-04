domains
	name,password = symbol
predicates
	getinput(name,password)
	logon
	user(name,password)
clauses
	logon:-
		clearwindow,
		getinput(_,_),
		write("you are now logged on."),nl.

	logon:-
		write("sorry you are not parmitted access."),nl.
	getinput(Name,Password):-
		write("Please Enter Your Name:"),
		readln(Name),nl,
		write("Please Enter Your Password:"),
		readln(Password),nl,
		user(Name,Password).

	user(john,superman).
	user(sue,happy).
	user(bill,bigfoot).