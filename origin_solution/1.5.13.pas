var count,k:longint;
    a,b,c:qword;
begin
  readln(k);
  a:=1;
  b:=1;
  count:=2;
  if k=1 then begin
	  writeln(1);
	  exit;
  end;
  if k=2 then begin
	  writeln(1);
	  exit;
  end;
  repeat
	c:=a;
	a:=b;
	b:=c+b;
    inc(count);
  until k=count;
  writeln(b);
end.
