uses math;
var n,m:longint;
    answer:array[1..101,1..11]of longint;
function getHeight(n,m:longint):longint;
var    times,x,y,z,j:longint;
begin
  if m=1 then begin
	  getHeight:=n;
	  exit;
  end else
  if n<=1 then begin
	  getHeight:=n;
	  exit;
  end else begin
   if (answer[n,m]<>0) then begin
    getHeight:=answer[n,m];
	exit;
   end else begin
	  times:=9999;
	  for j:=1 to n do begin
		x:=getHeight(j-1,m);
		y:=getHeight(n-j,m-1);
		z:=1+max(x,y);
		if (z<times) then times:=z;
	  end;
	  answer[n,m]:=times;
	  getHeight:=times;
    end;
   end;
end;

begin
  fillchar(answer,sizeof(answer),0);
  while not eof do begin
    n:=100;
    m:=2;
    readln(n,m);
    writeln(getHeight(n,m));
  end;
end.
