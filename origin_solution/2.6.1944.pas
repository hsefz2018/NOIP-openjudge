var n:longint;

function sort(n:longint):longint;
begin
  if n=1 then sort:=1
	  else if n=2 then sort:=2
		  else sort:=sort(n-1)+sort(n-2);
end;

begin
  readln(n);
  writeln(sort(n));
end.
