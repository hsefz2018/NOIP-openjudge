var tmp,m,i,max,min:longint;
begin
	readln(m);
	min:=maxlongint;
	max:=0;
	for i:=1 to m do begin
		read(tmp);
		if tmp>max then max:=tmp;
		if tmp<min then min:=tmp;
	end;
	writeln(max-min);
end.
