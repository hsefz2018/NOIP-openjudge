var k,sum:extended;
	n,i:longint;
begin
	readln(n);
	sum:=0;
	for i:=1 to n do begin
		read(k);
		sum:=sum+k;
	end;
	writeln(sum/n:0:4);
end.
