var i,n,k,j:longint;
    a:array[1..2000]of longint;
    f:boolean;
begin
  readln(n,k);
  for i:=1 to n do read(a[i]);
  f:=false;
  for i:=1 to n-1 do for j:=i to n do if a[i]+a[j]=k then f:=true;
  if f then writeln('yes') else writeln('no');
end.
