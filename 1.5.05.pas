var tmp,min,max,n,i:longint;
begin
  min:=maxlongint;
  max:=0;
  read(n);
  for i:=1 to n do begin
	  read(tmp);
	  if tmp>max then max:=tmp;
	  if tmp<min then min:=tmp;
  end;
  writeln(max-min);
end.
