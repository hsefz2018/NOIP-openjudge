var i,t,m,n:longint;

function sort(m,n:longint):longint;
begin
  if m<0 then begin
	  sort:=0;
	  exit;
  end;
  if (n=1)or(m=0)then begin
	  sort:=1;
	  exit;
  end;
  sort:=sort(m-n,n)+sort(m,n-1);
end;

begin
  readln(t);
  for i:=1 to t do begin
	  readln(m,n);
	  writeln(sort(m,n));
  end;
end.
