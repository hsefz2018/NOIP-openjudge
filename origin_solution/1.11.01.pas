type info=record
  stunum:qword;
  score:extended;
end;

var data:array[1..100] of info;
    tmp:extended;
	n,k,i,j:longint;
	tmpnum:qword;
begin
  readln(n,k);
  for i:=1 to n do readln(data[i].stunum,data[i].score);
  for i:=1 to n-1 do
	  for j:=i to n do if (data[i].score<data[j].score) then begin
		  tmp:=data[i].score;
		  data[i].score:=data[j].score;
		  data[j].score:=tmp;
		  tmpnum:=data[i].stunum;
		  data[i].stunum:=data[j].stunum;
		  data[j].stunum:=tmpnum;
	  end;
  writeln(data[k].stunum,' ',data[k].score:0:1);
end.
	  
