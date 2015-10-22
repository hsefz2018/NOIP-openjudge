var money,mother,budget,i:longint;
begin
  money:=0;
  mother:=0;
  for i:=1 to 12 do begin
	  readln(budget);
	  inc(money,300);
	  if money-budget>=0 then begin
	    inc(mother,(money-budget)div 100);
	    money:=(money-budget)mod 100;
		end 
	  else begin
		  writeln('-',i);
		  halt;
	  end;
  end;
  writeln(money+mother*100*1.2:0:0);
end.
	  
