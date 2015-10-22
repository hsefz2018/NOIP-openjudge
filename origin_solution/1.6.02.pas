var height,i,count:longint;
    apple:array[1..10]of longint;
begin
  for i:=1 to 10 do read(apple[i]);
  readln(height);
  count:=0;
  for i:=1 to 10 do if height+30>=apple[i] then inc(count);
  writeln(count);
end.
