; == UMW_PANZER ==
; mode presets
;----------------------------------------------------------------
(define "umw_panzer"
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
; standard presets
;----------------------------------------------------------------
(define "std_panzer"
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
				{buttons "squad1 squad2 v1 v2 v3 v4 v5 hero_mp"}
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
; == CUSTOM_PANZER ==
; custom presets
;----------------------------------------------------------------
(define "custom_panzer"
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
				{buttons "squad1 squad2 v1 v2 v3 v4 v5 hero_mp"}
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
	{"c:std_panzer_3000"
		{gameMode "std_panzer"}
		{unitMode "std_panzer"}
		{specMode "panzer_3000"}
		("std_panzer" 			start(200) finish(3000) cp(1000))
	}
	{"c:std_panzer_5000"
		{gameMode "std_panzer"}
		{unitMode "std_panzer"}
		{specMode "panzer_5000"}
		("std_panzer" 			start(200) finish(5000) cp(1000))
	}
	{"c:std_panzer_10000"
		{gameMode "std_panzer"}
		{unitMode "std_panzer"}
		{specMode "panzer_10000"}
		("std_panzer" 			start(1000) finish(10000) cp(1000))
	}
;------------------------------------------------------------------
;CUSTOM_PANZER
;------------------------------------------------------------------
	{"c:custom_panzer_3000"
		{gameMode "custom_panzer"}
		{unitMode "custom_panzer"}
		{specMode "panzer_3000"}
		("custom_panzer" 			start(200) finish(3000) cp(1000))
	}
		{"c:custom_panzer_5000"
		{gameMode "custom_panzer"}
		{unitMode "custom_panzer"}
		{specMode "panzer_5000"}
		("custom_panzer" 			start(200) finish(5000) cp(1000))
	}
	{"c:custom_panzer_10000"
		{gameMode "custom_panzer"}
		{unitMode "custom_panzer"}
		{specMode "panzer_10000"}
		("custom_panzer" 			start(1000) finish(10000) cp(1000))
	}
;------------------------------------------------------------------
;UMW_PANZER
;------------------------------------------------------------------
	{"c:umw_panzer_3000"
		{gameMode "umw_panzer"}
		{unitMode "umw_panzer"}
		{specMode "panzer_3000"}
		("umw_panzer" 			start(200) finish(3000) cp(1000))
	}
		{"c:umw_panzer_5000"
		{gameMode "umw_panzer"}
		{unitMode "umw_panzer"}
		{specMode "panzer_5000"}
		("umw_panzer" 			start(200) finish(5000) cp(1000))
	}
		{"c:umw_panzer_10000"
		{gameMode "umw_panzer"}
		{unitMode "umw_panzer"}
		{specMode "panzer_10000"}
		("umw_panzer" 			start(1000) finish(10000) cp(1000))
	}
}

