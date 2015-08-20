var a:array[1..7,1..2]of longint;
	i,maxh,maxd:longint;
	f:boolean;
begin
  maxh:=0;
  f:=false;
  for i:=1 to 7 do begin
	  readln(a[i,1],a[i,2]);
	  if a[i,1]+a[i,2]>8 then begin
	    f:=true;
		if a[i,1]+a[i,2]>maxh then begin
		  maxh:=a[i,1]+a[i,2];
		  maxd:=i;
		end;
	  end;
  end;
  if not f then maxd:=0;
  writeln(maxd);
end.
