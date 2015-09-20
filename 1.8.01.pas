var i,j,m,n:longint;
    a:array[1..5,1..5]of longint;
begin
  for i:=1 to 5 do 
	  for j:=1 to 5 do read(a[i,j]);
  readln(m,n);
  for i:=1 to 5 do begin
	  if (i=m) then for j:=1 to 5 do write(a[n,j],' ') else
	  if (i=n) then for j:=1 to 5 do write(a[m,j],' ') else 
		  for j:=1 to 5 do write(a[i,j],' ');
	  writeln;
  end;
end.
	 
