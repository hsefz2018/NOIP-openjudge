var a,b,c,i:longint;
begin
	readln(a,b,c);
	for i:=2 to a-1 do if (a mod i=b mod i)and(b mod i=c mod i) then begin
	  writeln(i);
	  exit;
	end;
end.
