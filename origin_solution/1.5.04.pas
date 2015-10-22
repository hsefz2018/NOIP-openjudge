var n,max,i,tmp:longint;
begin
  read(n);
  max:=0;
  for i:=1 to n do begin
	  read(tmp);
	  if tmp>max then max:=tmp;
  end;
  writeln(max);
end.
