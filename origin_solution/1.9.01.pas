var n,t,i:longint;
    a:array[1..10001]of longint;
begin
  readln(n);
  for i:=1 to n do read(a[i]);
  readln(t);
  for i:=1 to n do if a[i]=t then begin
    writeln(i);
    exit;
  end;
  writeln(-1);
end.
