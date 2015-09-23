var n,i,j:longint;
    s,sum:qword;
begin
  readln(n);
  sum:=0;
  for i:=1 to n do begin
	  s:=1;
	  for j:=1 to i do s:=s*j;
	  sum:=sum+s;
  end;
  writeln(sum);
end.
