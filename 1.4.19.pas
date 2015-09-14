var a,b:longint;
    ch:char;
begin
  read(a,b);
  read(ch);
  read(ch);
  if ch='+' then writeln(a+b) else
  if ch='-' then writeln(a-b) else
  if ch='*' then writeln(a*b) else
  if ch='/' then begin
	  if b<>0 then writeln(a div b) else writeln('Divided by zero!') end 
else writeln('Invalid operator!');
end.
