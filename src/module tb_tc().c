module tb_tc();
reg [6:0] temp;

reg rst ;

wire alarm;

temperature_control_unit teu (temp, rst, alarm);

initial begin

rst=0;

temp=7'd95; #10

temp 7'd97; #10

temp=7'd104; #10 Ist =1'b0; #10

temp 7'd99; #10

temp=7'd100; #10 temp=7'd80; #10

rst=1'b0; #10 $stop;

end

endmodule

module tb_hb();

    reg [7:0]cr, upper, lower;

    reg reset ; wire alarm;

    heart beat hb (cr, upper, lower, reset, alarm);

    initial begin

    upper 8 d90; lower-8'd70; reset=0; cr=8'd72; #10

    cr=8'd95; #10

    cr=8'd65; #10

    reset=1; #10

    upper-8'd60; lower 8'd40; reset=0;

    cr=8'd35; #10 cr=8 d50; #10

    cr=8'd75; #10

    reset-1;

    Sstop;

end

endmodule