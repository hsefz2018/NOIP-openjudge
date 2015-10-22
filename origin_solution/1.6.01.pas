var n,m,i,count:longint;
    a:array[1..200]of longint;
begin
  readln(n);
  for i:=1 to n do read(a[i]);
  readln(m);
  count:=0;
  for i:=1 to n do if a[i]=m then inc(count);
  writeln(count);
end.
