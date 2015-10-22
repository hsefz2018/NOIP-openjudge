var m,t,i,j,ans:longint;
    v,w:array[0..108]of longint;
	f:array[0..108,0..1024]of longint;
begin
  read(t,m);
  for i:=0 to m-1 do read(w[i],v[i]);
  for i:=0 to t do f[0,i]:=0;
  f[0,w[0]]:=v[0];
  for i:=1 to m-1 do
    for j:=0 to t do begin
	  f[i,j]:=f[i-1,j];
	  if (j>=w[i])and(f[i,j]<f[i-1,j-w[i]]+v[i]) then f[i,j]:=f[i-1,j-w[i]]+v[i];
	end;
	ans:=0;
	for i:=0 to t do if (ans<f[m-1,i]) then ans:=f[m-1,i];
	writeln(ans);
end.
