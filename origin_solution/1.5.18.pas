var n:qword;
begin
  readln(n);
  if n=1 then begin
	  writeln('End');
	  exit;
  end;
  repeat
    if n mod 2=1 then begin
		writeln(n,'*3+1=',n*3+1);
		n:=n*3+1;
	end else begin
	  writeln(n,'/2=',n div 2);
	  n:=n div 2;
	end;
  until n=1;
  writeln('End');
end.
