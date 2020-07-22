
bool chk_all_params(float param,float lowerlimit,float higherlimit);

bool chk_all_params(float param,float lowerlimit,float higherlimit)
{
 if ((param < lowerlimit)||(param > higherlimit))
 {
    return false;
 }
  return true;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) 
{
bool ret = chk_all_params(bpm, 70 , 150)  && chk_all_params(spo2,80 ,100 ) && chk_all_params(resp_Rate,30,60);
return ret;
}

