var a,b,c,d,s:extended;
    i,j:longint;
begin
  readln(a,b,c,d);
  j:=0;
  for i:=-10000 to 10000 do begin
	  s:=i/100;
	  if abs(s*s*s*a+s*s*b+s*c+d)<=0.000001 then begin
		  inc(j);
		  if j=3 then begin 
			  writeln(s:0:2);
			  halt;
		  end
		  else write(s:0:2,' ');
	  end;
  end;
end.
