var n,i,max,sum:longint;
    a:array[1..105]of longint;
begin
	readln(n);
	for i:=1 to n do read(a[i]);
	max:=0;
	for i:=1 to n do if a[i]>max then max:=a[i];
	sum:=0;
	for i:=1 to n do if a[i]<max then sum:=sum+a[i];
	writeln(sum);
end.
