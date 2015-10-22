var pay,w:longint;
    ch:char;
begin
  read(w);
  read(ch);
  read(ch);
  if w<=1000 then pay:=8
	  else if w>=1000 then begin
		  if (w-1000)mod 500=0 then pay:=8+(w-1000)div 500*4;
		  if (w-1000)mod 500<>0 then pay:=8+(w-1000)div 500*4+4;
	  end;
  if ch='y' then inc(pay,5);
  writeln(pay);
end.
