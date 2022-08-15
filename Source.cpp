#include <iostream>
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
#include "Tournament.h"

int main()
{
	Tournament a;
	Avalanche p1;
	Bureaucrat p2, p3;
	Toolbox p4, p5;
	Crescendo p6, p7;
	FistfullODollars p8;
	a.run({ &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8 });
	return 0;
}