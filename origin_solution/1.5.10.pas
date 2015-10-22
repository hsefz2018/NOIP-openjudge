var n,m,sum,i,tmp:longint;
begin
  readln(n,m);
  sum:=0; 
  for i:=1 to n do begin
	  read(tmp);
	  if tmp=m then inc(sum);
  end;
  writeln(sum);
end.
