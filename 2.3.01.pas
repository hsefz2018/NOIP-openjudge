//Qsort Solution
const max=200000;
type tlist=array[1..max]of longint;
var a:array[1..max]of longint;
    n,i,k:longint;

procedure qsort(var a:tlist);
  procedure sort(l,r:longint);
  var i,j,x,y:longint;
  begin
         i:=l;
         j:=r;
         x:=a[(l+r) div 2];
         repeat
           while a[i]<x do
            inc(i);
           while x<a[j] do
            dec(j);
           if not(i>j) then begin
                y:=a[i];
                a[i]:=a[j];
                a[j]:=y;
                inc(i);
                j:=j-1;
           end;
         until i>j;
         if l<j then
           sort(l,j);
         if i<r then
           sort(i,r);
  end;
begin
  sort(1,n);
end;


begin
	readln(n);
	for i:=1 to n do begin 
	  read(a[i]);
	end;
	readln(k);
	qsort(a);
	for i:=n downto n-k+1 do writeln(a[i]);
end.







