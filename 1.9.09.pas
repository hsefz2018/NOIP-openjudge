var n,i:longint;
	max:longint;
	count,a:array[0..10000]of longint;
begin
	readln(n);
	max:=0;
	fillchar(count,sizeof(count),0);
	for i:=1 to n do begin
		read(a[i]);
		if a[i]>max then max:=a[i];
	    inc(count[a[i]]);
	end;
	for i:=0 to max do writeln(count[i]);
end.
	
