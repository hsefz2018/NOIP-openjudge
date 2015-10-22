var a,b:longint;
begin
	readln(a,b);
	if ((a>=60)and(b>=60))or((a<60)and(b<60))then writeln(0) else writeln(1);
end.
