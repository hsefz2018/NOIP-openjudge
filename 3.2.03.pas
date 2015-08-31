var n,k,i:longint;
	a:array[1..500000]of int64;
begin
	readln(n);
	for i:=1 to n do read(a[i]);
	readln(k);
	for i:=1 to n do if a[i]<>k then write(a[i],' ');
end.
