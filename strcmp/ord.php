<?php
$a = '你';
$b = '好';
$c = '啊';

function u2h($a='')
{
  echo dechex(ord($a[0]));
  echo dechex(ord($a[1]));
  echo dechex(ord($a[2]));
  echo PHP_EOL;
}

u2h($a);
u2h($b);
u2h($c);
