var n,i:longint;
    a:array[1..100]of longint;
begin
  readln(n);
  for i:=1 to n do read(a[i]);
  for i:=n downto 1 do write(a[i],' ');
end.
