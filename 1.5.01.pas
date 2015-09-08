var n,k,i,sum:longint;
begin
	readln(n);
	sum:=0;
	for i:=1 to n do begin
		readln(k);
		inc(sum,k);
	end;
	writeln(sum/n:0:2);
end.
