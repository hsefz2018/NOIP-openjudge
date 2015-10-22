var n,i,j:longint;
    ans:extended;
	s:qword;
begin
  readln(n);
  ans:=1;
  for i:=1 to n do begin
	  s:=1;
	  for j:=1 to i do s:=s*j;
	  ans:=ans+1/s;
  end;
  writeln(ans:0:10);
end.
