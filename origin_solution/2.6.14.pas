var dp:array[1..100,1..100] of longint;
    arr:array[1..100,1..100]of longint;
	r,c:longint;
	res,i,j:longint;

function getHeight(i,j:longint):longint;
var max,h:longint;
begin
  if (dp[i,j]>1) then begin
	  getHeight:=dp[i,j];
	  exit;
  end;
  max:=1;
  if (arr[i,j]>arr[i,j-1])and(j-1>=0) then begin
	  h:=getHeight(i,j-1)+1;
	  if h>max then max:=h;
  end;
  if (arr[i,j]>arr[i,j+1])and(j+1<c) then begin
	  h:=getHeight(i,j+1)+1;
	  if h>max then max:=h;
  end;
  if (arr[i,j]>arr[i-1,j])and(i-1>=0) then begin
	  h:=getHeight(i-1,j)+1;
	  if h>max then max:=h;
  end;
  if (arr[i,j]>arr[i+1,j])and(i+1<r) then begin
	  h:=getHeight(i+1,j)+1;
	  if h>max then max:=h;
  end;
  getHeight:=max;
end;

begin
  readln(r,c);
  for i:=0 to r-1 do 
	  for j:=0 to c-1 do begin
		  read(arr[i,j]);
		  dp[i,j]:=1;
	  end;
  res:=0;
  for i:=0 to r-1 do 
	  for j:=0 to c-1 do begin
		  dp[i,j]:=getHeight(i,j);
		  if dp[i,j]>res then res:=dp[i,j];
	  end;
  writeln(res);
end.
