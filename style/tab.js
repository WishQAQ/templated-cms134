function SetTab(menuID,menuTags,frameID,frameTags,className) {
	  var menu=document.getElementById(menuID).getElementsByTagName(menuTags);
    for(var i=0;i<menu.length;i++){
			  menu[i].name=i;
				menu[i].onmousemove=function(){
					 var menu1=document.getElementById(menuID).getElementsByTagName(menuTags);
	         var frame1=document.getElementById(frameID).getElementsByTagName(frameTags);
		       for(var j=0; j<menu1.length;j++){
				       if(j==this.name){
						       menu1[j].className=className;frame1[j].style.display='block';
				       }else{
						       menu1[j].className='';frame1[j].style.display='none';
				       }
		       }
				}
		}
}

function SetTab1(menuID,menuTags,frameID1,frameTags1,frameID,frameTags,className) {
	  var menu=document.getElementById(menuID).getElementsByTagName(menuTags);
    for(var i=0;i<menu.length;i++){
			  menu[i].name=i;
				menu[i].onmousemove=function(){
					 var menu1=document.getElementById(menuID).getElementsByTagName(menuTags);
	         var frame1=document.getElementById(frameID).getElementsByTagName(frameTags);
					 var frame2=document.getElementById(frameID1).getElementsByTagName(frameTags1);
		       for(var j=0; j<menu1.length;j++){
				       if(j==this.name){
						       menu1[j].className=className;frame1[j].style.display='block';frame2[j].style.display='block';
				       }else{
						       menu1[j].className='';frame1[j].style.display='none';frame2[j].style.display='none';
				       }
		       }
				}
		}
}
				
