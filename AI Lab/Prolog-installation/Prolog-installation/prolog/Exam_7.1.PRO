predicates
	location(string,string)
	
clauses
	go:- 
		location(City,State),
		writef("%-10 %2 \n", City,State),
		
	go.
	
	location("Jackson", "MS").
	location("Washington", "DC").
	location("Raleigh", "NC").