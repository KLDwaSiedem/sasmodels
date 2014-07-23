real CylKernel(real qq, real rr, real h, real theta)
{
    // qq is the q-value for the calculation (1/A)
    // rr is the radius of the cylinder (A)
    // h is the HALF-LENGTH of the cylinder = L/2 (A)
    real be=0; real si=0;
    real besarg = qq*rr*sin(theta);
    real siarg = qq*h*cos(theta);
    real bj = NR_BessJ1(besarg);

    real d1 = qq*rr*sin(theta);

    if (besarg == 0.0){
        be = sin(theta);
    }else{
        be = bj*bj*4.0*sin(theta) / (d1*d1);
    }

    if (siarg == 0.0){
        si = 1.0;
    }else{
        si = sin(siarg)*sin(siarg)/(siarg*siarg);
    }
    return be*si;
}
real Gauss76Z(int i)
{
real array[76] = {.999505948362153*(-1.0),.997397786355355*(-1.0),.993608772723527*(-1.0),.988144453359837*(-1.0),
.981013938975656*(-1.0),.972229228520377*(-1.0),.961805126758768*(-1.0),.949759207710896*(-1.0),
.936111781934811*(-1.0),.92088586125215*(-1.0),.904107119545567*(-1.0),.885803849292083*(-1.0),
.866006913771982*(-1.0),.844749694983342*(-1.0),.822068037328975*(-1.0),.7980001871612*(-1.0),
.77258672828181*(-1.0),.74587051350361*(-1.0),.717896592387704*(-1.0),.688712135277641*(-1.0),
.658366353758143*(-1.0),.626910417672267*(-1.0),.594397368836793*(-1.0),.560882031601237*(-1.0),
.526420920401243*(-1.0),.491072144462194*(-1.0),.454895309813726*(-1.0),.417951418780327*(-1.0),
.380302767117504*(-1.0),.342012838966962*(-1.0),.303146199807908*(-1.0),.263768387584994*(-1.0),
.223945802196474*(-1.0),.183745593528914*(-1.0),.143235548227268*(-1.0),.102483975391227*(-1.0),
.0615595913906112*(-1.0),.0205314039939986*(-1.0),-.0205314039939986*(-1.0),-.0615595913906112*(-1.0),
-.102483975391227*(-1.0),-.143235548227268*(-1.0),-.183745593528914*(-1.0),-.223945802196474*(-1.0),
-.263768387584994*(-1.0),-.303146199807908*(-1.0),-.342012838966962*(-1.0),-.380302767117504*(-1.0),
-.417951418780327*(-1.0),-.454895309813726*(-1.0),-.491072144462194*(-1.0),-.526420920401243*(-1.0),
-.560882031601237*(-1.0),-.594397368836793*(-1.0),-.626910417672267*(-1.0),-.658366353758143*(-1.0),
-.688712135277641*(-1.0),-.717896592387704*(-1.0),-.74587051350361*(-1.0),-.77258672828181*(-1.0),
-.7980001871612*(-1.0),	-.822068037328975*(-1.0),-.844749694983342*(-1.0),-.866006913771982*(-1.0),
-.885803849292083*(-1.0),-.904107119545567*(-1.0),-.92088586125215*(-1.0),-.936111781934811*(-1.0),
-.949759207710896*(-1.0),-.961805126758768*(-1.0),-.972229228520377*(-1.0),-.981013938975656*(-1.0),
-.988144453359837*(-1.0),-.993608772723527*(-1.0),-.997397786355355*(-1.0),-.999505948362153*(-1.0) };

return array[i];
}
real Gauss76Wt(int i)
{
real array[76] = {.00126779163408536,.00294910295364247,.00462793522803742,.00629918049732845,
.00795984747723973,.00960710541471375,.0112381685696677,.0128502838475101,
.0144407317482767,.0160068299122486,.0175459372914742,.0190554584671906,
.020532847967908,.0219756145344162,.0233813253070112,.0247476099206597,
.026072164497986,.0273527555318275,.028587223650054,.029773487255905,
.0309095460374916,.0319934843404216,.0330234743977917,.0339977794120564,
.0349147564835508,.0357728593807139,.0365706411473296,.0373067565423816,
.0379799643084053,.0385891292645067,.0391332242205184,.0396113317090621,
.0400226455325968,.040366472122844,.0406422317102947,.0408494593018285,
.040987805464794,.0410570369162294,.0410570369162294,.040987805464794,
.0408494593018285,.0406422317102947,.040366472122844,.0400226455325968,
.0396113317090621,.0391332242205184,.0385891292645067,.0379799643084053,
.0373067565423816,.0365706411473296,.0357728593807139,.0349147564835508,
.0339977794120564,.0330234743977917,.0319934843404216,.0309095460374916,
.029773487255905,.028587223650054,.0273527555318275,.026072164497986,
.0247476099206597,.0233813253070112,.0219756145344162,.020532847967908,
.0190554584671906,.0175459372914742,.0160068299122486,.0144407317482767,
.0128502838475101,.0112381685696677,.00960710541471375,.00795984747723973,
.00629918049732845,.00462793522803742,.00294910295364247,.00126779163408536 };

return array[i];
}