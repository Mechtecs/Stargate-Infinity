ENTITY* SGC;
function main(){
	level_load("small.hmp");
	SGC = ent_create("sgc.mdl",vector(0,0,0),NULL);
	SGC.scale_x=10;
	SGC.scale_y=10;
	SGC.scale_z=10;
}