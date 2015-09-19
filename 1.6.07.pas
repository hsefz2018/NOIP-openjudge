var n,ans,i:longint;
    a,b:array[1..1000]of longint;
begin
  readln(n);
  ans:=0;
  for i:=1 to n do read(a[i]);
  for i:=1 to n do read(b[i]);
  for i:=1 to n do inc(ans,a[i]*b[i]);
  writeln(ans);
end.
