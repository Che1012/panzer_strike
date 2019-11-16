; == ALL_PANZER ==
; game presets
;----------------------------------------------------------------
(define "all_panzer"
	{common
		{unitset
			{value "all^arcade"}
		}
		{commandPoints "*=%cp"}
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=0"}
		}
		{budgets
			{vehicle
				{mode "standard"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1200}		; in seconds
					{growTable 	"1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.0	1.0		1.0		1.0		1.0		1.0		1.0"}
					}
				} 
				{buttons "squad1 squad2 squad3 sent lr v1 v2 v3 v4 v5 hero_mp"}
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
; == STD_PANZER ==
; custom presets
;----------------------------------------------------------------
(define "std_panzer"
	{common
		{unitset
			{value "panzer"}
		}
		{commandPoints "*=%cp"}
		{balancingFactorBonus {cp 1.0} {mp 1.0} }
		{chargeFactors
			{value "*=0"}
		}
		{budgets
			{vehicle
				{mode "custom"}
				{resource 
					{start 		%start}
					{finish 	%finish}
					{growTime	1200}		; in seconds
					{growTable 	"1.00"}
					{payback
						{cp 		"0		25		50 		60		70		80		90"}  
						{restore 	"1.0	1.0		1.0		1.0		1.0		1.0		1.0"}
					}
				} 
				{buttons "squad1 squad2 squad3 sent lr v1 v2 v3 v4 v5 hero_mp"}
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


;-----------------------------------------------------------------
;STD_PANZER
;-----------------------------------------------------------------
{ presets
	{"c:std_panzer_1000"
		{gameMode "std_panzer"}
		{unitMode "std_panzer"}
		{specMode "panzer_1000"}
		("std_panzer" 			start(200) finish(1000) cp(1000))
	}
	{"c:std_panzer_5000"
		{gameMode "std_panzer"}
		{unitMode "std_panzer"}
		{specMode "panzer_5000"}
		("std_panzer" 			start(500) finish(5000) cp(1000))
	}
	{"c:std_panzer_10000"
		{gameMode "std_panzer"}
		{unitMode "std_panzer"}
		{specMode "panzer_10000"}
		("std_panzer" 			start(1000) finish(10000) cp(1000))
	}
;------------------------------------------------------------------
;ALL_PANZER
;------------------------------------------------------------------
	{"c:all_panzer_1000"
		{gameMode "all_panzer"}
		{unitMode "all_panzer"}
		{specMode "panzer_1000"}
		("all_panzer" 			start(200) finish(1000) cp(1000))
	}
		{"c:all_panzer_5000"
		{gameMode "all_panzer"}
		{unitMode "all_panzer"}
		{specMode "panzer_5000"}
		("all_panzer" 			start(500) finish(5000) cp(1000))
	}
	{"c:all_panzer_10000"
		{gameMode "all_panzer"}
		{unitMode "all_panzer"}
		{specMode "panzer_10000"}
		("all_panzer" 			start(1000) finish(10000) cp(1000))
	}
}

