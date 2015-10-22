var str:string;
    f:boolean;
	tmp,a,b,i,ope:longint;
begin
  readln(str);
  f:=true;
  a:=0;
  b:=0;
  for i:=1 to length(str) do 
	  if f and ('0'<=str[i])and(str[i]<='9') then begin
		  tmp:=ord(str[i])-48;
		  a:=a*10+tmp;
	  end else
	  if not f and ('0'<=str[i])and(str[i]<='9') then begin
		  tmp:=ord(str[i])-48;
		  b:=b*10+tmp;
	  end else
	  if (str[i]='+')or(str[i]='-')or(str[i]='*')or(str[i]='/')or(str[i]='%') then begin case str[i] of
		  '+' : ope:=1;
		  '-' : ope:=2;
		  '*' : ope:=3;
		  '/' : ope:=4;
		  '%' : ope:=5;
		  end;
		  f:=false;
  end;
  case ope of 
  1 : writeln(a+b);
  2 : writeln(a-b);
  3 : writeln(a*b);
  4 : writeln(a div b);
  5 : writeln(a mod b);
  end;
end.

