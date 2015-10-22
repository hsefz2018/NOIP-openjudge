var a,b,c,r:extended;
begin
  readln(a,b,c);
  if (a+b>c)and(b+c>a)and(a+c>b) then begin
    r:=(a+b+c)/2;
    writeln(sqrt(r*(r-a)*(r-b)*(r-c)):0:4)
  end else writeln('Data Error');
end.
