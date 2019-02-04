domains 
	disease,indication = symbol
	
predicates
	sympton(disease,indication)
	
clauses
	sympton(_,_).
	sympton(chicken_pox, chills).
	sympton(flu,chills).
	sympton(cold,mid_body_ache).