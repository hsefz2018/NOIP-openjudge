var n,m,king,i:longint;
begin
	repeat
		readln(n,m);
		if (n<>0)and(m<>0) then begin
		  king:=0;
		  for i:=2 to n do king:=(king+m)mod i;
		  inc(king);
		  writeln(king);
	    end;
	until (n=0)and(m=0);
end.
