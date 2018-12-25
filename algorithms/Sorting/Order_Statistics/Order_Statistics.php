<?php
function kthSmallest($arr, $l, $r, $k) 
{
	if ($k > 0 && $k <= $r - $l + 1) 
	{
		$pos = randomPartition($arr, $l, $r); 
		if ($pos-$l == $k-1) 
			return $arr[$pos]; 
		if ($pos-$l > $k-1) 
			return kthSmallest($arr, $l, $pos-1, $k); 
		return kthSmallest($arr, $pos+1, $r, 
							$k-$pos+$l-1); 
	} 
	return PHP_INT_MAX; 
} 

function swap($a, $b) 
{ 
	$temp = $a; 
	$a = $b; 
	$b = $temp; 
}
function partition($arr, $l, $r) 
{ 
	$x = $arr[$r]; 
	$i = $l; 
	for ($j = $l; $j <= $r - 1; $j++) 
	{ 
		if ($arr[$j] <= $x) 
		{ 
			list($arr[$i], $arr[$j])=array($arr[$j],$arr[$i]);
			$i++; 
		} 
	} 
	list($arr[$i], $arr[$r])=array($arr[$r],$arr[$i]);
	return $i; 
}
function randomPartition($arr, $l, $r) 
{ 
	$n = $r-$l+1; 
	$pivot = rand() % $n; 
	
	list($arr[$l + $pivot], $arr[$r]) = 
			array($arr[$r],$arr[$l + $pivot] );
	return partition($arr, $l, $r); 
} 

echo "Please Enter No. of Elements of Array : ";
$n = trim(fgets(STDIN));
for($i=0;$i<$n;$i++){
	$arr[$i]=trim(fgets(STDIN));
}
echo "Please Enter The value of K : ";
$k = trim(fgets(STDIN));; 
echo $k."'th smallest element is " .kthSmallest($arr, 0, $n-1, $k);
?> 
