var sum,max,min,avg,deviation:extended;
	n,i,maxi,mini:longint;
	a:array[1..305]of extended;
begin
	sum:=0;
	max:=0;
	min:=maxlongint;
	readln(n);
	for i:=1 to n do begin
		read(a[i]);
		if max<a[i] then begin
		  max:=a[i];
		  maxi:=i;
		end;
		if min>a[i] then begin
		  min:=a[i];
		  mini:=i;
		end;
		sum:=sum+a[i];
	end;
	sum:=sum-max-min;
	avg:=sum/(n-2);
	write(avg:0:2,' ');
	deviation:=0;
	for i:=1 to n do if (abs(avg-a[i])>deviation)and(i<>maxi)and(i<>mini) then deviation:=abs(avg-a[i]);
	writeln(deviation:0:2);
end.
