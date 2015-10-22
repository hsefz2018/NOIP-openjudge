program scholar;
type node=record
     name:string[20];
     avi,ping,paper:0..100;
     bu,west:boolean;
     sum:integer;
end;
var stu:array [0..100] of node;
    i,n,max:integer;
    sumup:longint;
    c:char;
begin
  readln(n);
  for i:=0 to 100 do with stu[i] do begin
	  name:='';
	  avi:=0;ping:=0;paper:=0;sum:=0;
	  bu:=false;west:=false;
  end;
  for i:=1 to n do with stu[i] do begin
	  read(c);
	  while c<>' ' do begin 
	    name:=name+c;
		read(c);
	  end;
	  read(avi);read(ping);
	  read(c);
	  read(c);
	  if c='Y'then bu:=true else bu:=false;
	  read(c);
	  read(c);
	  if c='Y'then west:=true else west:=false;
	  readln(paper);
	  if (avi>80)and(paper>0)then inc(sum,8000);
	  if (avi>85)and(ping>80) then inc(sum,4000);
	  if avi>90 then inc(sum,2000);
	  if (avi>85)and west then inc(sum,1000);
	  if (ping>80)and bu then inc(sum,850);
  end;
  sumup:=0;max:=0;
  for i:=1 to n do begin
	  sumup:=sumup+stu[i].sum;
	  if max<stu[i].sum then begin
	  max:=stu[i].sum;stu[0]:=stu[i];
  end;
  end;
  writeln(stu[0].name);writeln(stu[0].sum);writeln(sumup);
end.
