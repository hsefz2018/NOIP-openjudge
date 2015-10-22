var one,two,five,num,n:longint;
begin
  readln(n);
  num:=0;
  for five:=0 to n div 5 do
    for two:=0 to n div 2 do
      for one:=0 to n do if (one*1+two*2+five*5=n)then begin
       inc(num);
       if num<10 then write('00',num)
       else if num<100 then write('0',num)
       else if num>=100 then write(num);
       writeln(one:12,two:12,five:12);
      end;
end.
