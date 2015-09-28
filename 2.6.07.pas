var h,i,j,ans:longint;
	a,f:array[0..108,0..108]of longint;
begin
	readln(h);
	for i:=0 to h-1 do 
		for j:=0 to i do read(a[i,j]);
	f[0,0]:=a[0,0];
	for i:=1 to h-1 do 
		for j:=0 to i do if f[i-1,j-1]>f[i-1,j] then f[i,j]:=a[i,j]+f[i-1,j-1] else f[i,j]:=a[i,j]+f[i-1,j];
	ans:=0;
	for i:=0 to h-1 do if ans<f[h-1,i] then ans:=f[h-1,i];
	writeln(ans);
end.
