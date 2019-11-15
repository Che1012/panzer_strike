; == CUSTOM ==
(define "std_panzer"
	{common
		{unitset
			{value "panzer"}
		}
		{commandPoints "*=%cp"}
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=1"}
		}
		{budgets
			{vehicle
				{mode "custom"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1500}		; in seconds
					{growTable 	"1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.0	1.0		1.0		1.0		1.0		1.0		1.0"}
					}
				} 
				{buttons "squad1 squad2 v1 v2 v3 v4 v5"}
			}
			{hero
				{resource 
					{start 		0}
				} 
				{buttons "hero"}
				{tag "special"}
			}
		} 
	}
	{bots
		(include "bots_generic.inc")
	}
)
;------------------------------------------------------------------------------------------------------------
{ presets
	{"c:std_1000_panzer"
		{gameMode "std_panzer"}
		{unitMode "std_panzer"}
		{specMode "panzer_1000"}
		("std_panzer" 			start(200) finish(1000) cp(200))
	}
	{"c:std_10000_panzer"
		{gameMode "std_panzer"}
		{unitMode "std_panzer"}
		{specMode "panzer_10000"}
		("std_panzer" 			start(200) finish(10000) cp(200))
	}
}
;------------------------------------------------------------------------------------------------------------
