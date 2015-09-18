var n,i,g,s,b,sumg,sums,sumb:longint;
begin
  read(n);
  sumg:=0;
  sums:=0;
  sumb:=0;
  for i:=1 to n do begin
	  read(g,s,b);
	  sumg:=sumg+g;
	  sums:=sums+s;
	  sumb:=sumb+b;
  end;
  writeln(sumg,' ',sums,' ',sumb,' ',sumg+sums+sumb);
end.
