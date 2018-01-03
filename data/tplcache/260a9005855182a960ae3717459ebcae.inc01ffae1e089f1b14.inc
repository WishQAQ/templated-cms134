<?php
$z[0]=Array("field","",13,36);
$z[0][4]['name']="id";
$z[1]=Array("field","",38,67);
$z[1][4]['name']="typename";
$z[2]=Array("global","if(@me%5==0)@me=\"<li><a href='list.php?tid=24'>碳足迹</a></li>\";else @me=\"\";",180,314);
$z[2][4]['name']="itemindex";
$z[2][4]['runphp']="yes";
$z[3]=Array("global","if(@me%6==0)@me=\"<li><a href='list.php?tid=25'>视频中心</a></li>\";else @me=\"\";",324,461);
$z[3][4]['name']="itemindex";
$z[3][4]['runphp']="yes";
$z[4]=Array("channel","\r\n        <li><a href=\"list.php?tid=[field:id/]\">[field:typename/]</a></li>\r\n        ",471,609);
$z[4][4]['type']="son";
$z[4][4]['noself']="yes";

?>