<?php
$z[0]=Array("field","",13,36);
$z[0][4]['name']="id";
$z[1]=Array("field","",38,67);
$z[1][4]['name']="typename";
$z[2]=Array("field","",161,188);
$z[2][4]['name']="typeid";
$z[3]=Array("global","if(@me==1)@me=\"<li><a href='list.php?tid=24'>碳足迹</a></li>\";else @me=\"\";",207,339);
$z[3][4]['name']="itemindex";
$z[3][4]['runphp']="yes";
$z[4]=Array("global","if(@me%6==0)@me=\"<li><a href='list.php?tid=25'>视频中心</a></li>\";else @me=\"\";",349,486);
$z[4][4]['name']="itemindex";
$z[4][4]['runphp']="yes";
$z[5]=Array("channel","\r\n        <li><a href=\"list.php?tid=[field:id/]\">[field:typename/]</a></li>\r\n        ",496,634);
$z[5][4]['type']="son";
$z[5][4]['noself']="yes";

?>