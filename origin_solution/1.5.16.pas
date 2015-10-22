type loc=record
  x,y:extended;
  person:longint;
end;

var roof:loc;
    time:extended;
    i,n:longint;
begin
  readln(n);
  time:=0;
  for i:=1 to n do begin
	  readln(roof.x,roof.y,roof.person);
	  time:=time+sqrt(sqr(abs(roof.x-0))+sqr(abs(roof.y-0)))*2/50+roof.person*1.5
  end;
  if trunc(time)=time then writeln(trunc(time)) else writeln(trunc(time)+1);
end.
