var x1,x2,y1,y2,x3,y3,a,b,c,r:extended;
begin
  readln(x1,y1,x2,y2,x3,y3);
  a:=sqrt(sqr(x1-x2)+sqr(y1-y2));
  b:=sqrt(sqr(x2-x3)+sqr(y2-y3));
  c:=sqrt(sqr(x3-x1)+sqr(y3-y1));
  r:=(a+b+c)/2;
  writeln(sqrt(r*(r-a)*(r-b)*(r-c)):0:2);
end.
