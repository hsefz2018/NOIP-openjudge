var year:longint;
begin
  readln(year);
  if ((year mod 4=0)and(year mod 100<>0))or(year mod 400=0) then writeln('Y') else writeln('N');
end.
