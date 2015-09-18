var cal1,cal5,cal10,tmp,i,n:longint;
begin
  readln(n);
  cal1:=0;
  cal5:=0;
  cal10:=0;
  for i:=1 to n do begin
	  read(tmp);
	  if tmp=1 then inc(cal1);
	  if tmp=5 then inc(cal5);
	  if tmp=10 then inc(cal10);
  end;
  writeln(cal1);
  writeln(cal5);
  writeln(cal10);
end.
