# Description of the problem

You went to watch a cricket match. If you suddenly notice that everything is fine on the electronic scoreboard, but the run rate is showing wrong. When you told them about it, you found out that they also noticed the mistake. But to fix the program of the scoreboard imported from Australia, the engineer of that country should be brought, for that, permission, grant, signature, seal, etc. from the ministry, the work is not being done. But you realize it's just a programming bug. You can fix it by writing a two line code. After saying that, the technician agreed after some thought. One condition is that nothing can be said to his boss. You, too, get a chance to put your programming skills to real use and start coding with great enthusiasm. The game is on `50` Over One Day (ODI) matches. Each time the display shows the CRR(current run rate) and the RRR(required run rate) to win, the total runs scored by the opponent, the current runs of the batsmen and how many balls are left in the game. Note that in cricket `6` balls says `1` Overs are made and to win is at least the opponent's total runs `1` More runs are required.

## input

A number on the first line `T(1 <= T <= 100)` will be As many as the value of that number, there will be three numbers in the following lines. The first number is the opponent's total runs, `r1 (1<= r1 <= 1000)`, the second number is the batsmen's current run, `r2 (1 <= r2 <= r1)` And the third number is how many balls are left to play, `B (1 <= B < 300)` It indicates

## output

For each line, first calculate the current run rate per over from the information provided by that line and then print the desired run rate with a space. Each rate must be shown to only two digits after the decimal point.


## sameple

		4
		
		300 294 6		6.00 7.00
		200 100 100		3.00 6.06
		333 250 40		5.77 12.60
		118 100 180 	5.00 0.63