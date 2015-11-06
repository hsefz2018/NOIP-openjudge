var t,x,y,j,tmp,i:longint;
	f:boolean;
begin
  t:=0;
  readln(x,y);
  if x>y then begin
    tmp:=x;
    x:=y;
    y:=tmp;
  end;
  for i:=x to y do begin
	  f:=true;
	  j:=2;
	  while (j<=trunc(sqrt(i))) do if i mod j=0 then begin
		  f:=false; break; end else inc(j);
      if (i=1)or(i=0) then f:=false;
	  if f then inc(t);
  end;
  writeln(t);
end.
