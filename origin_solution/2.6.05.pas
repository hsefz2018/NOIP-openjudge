var n,i,j:longint;
    a,f:array[0..108,0..108]of longint;
begin
  readln(n);
  for i:=0 to n-1 do 
	  for j:=0 to n-1 do read(a[i,j]);
  f[0,0]:=a[0,0];
  for i:=1 to n-1 do begin
	  f[0,i]:=f[0,i-1]+a[0,i];
	  f[i,0]:=f[i-1,0]+a[i,0];
  end;
  for i:=1 to n-1 do 
	  for j:=1 to n-1 do if f[i-1,j]<f[i,j-1] then f[i,j]:=a[i,j]+f[i-1,j] else f[i,j]:=a[i,j]+f[i,j-1];
  writeln(f[n-1,n-1]);
end.
