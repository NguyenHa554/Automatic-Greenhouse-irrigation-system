
#include "header.h"

void predict_unit3(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)71.1500000000000199) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.2292269069310946816) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)260.2000000000000455) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)643.5000000000001137) ) ) {
            result[0] += -0.0005028294967364912;
          } else {
            result[0] += -0.002186750030483712;
          }
        } else {
          result[0] += 0.0029270606656791646;
        }
      } else {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-83.00000004999998282) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)51.54999992500000872) ) ) {
            result[0] += -0.0030759089847560974;
          } else {
            result[0] += 0.0011399580866453193;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)22.49999986500000304) ) ) {
            result[0] += -0.006283900800551619;
          } else {
            result[0] += -0.000508497857566302;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)63.79999980000000903) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)683.5000000000001137) ) ) {
          if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.5999999999999988676) ) ) {
            result[0] += 0.0017198681527340735;
          } else {
            result[0] += 0.011645468201201695;
          }
        } else {
          result[0] += -0.0036759180987351817;
        }
      } else {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.150000000000001243) ) ) {
            result[0] += 0.00928927569029232;
          } else {
            result[0] += 5.3121981425745714e-05;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)751.000000100000193) ) ) {
            result[0] += -0.003643949564945312;
          } else {
            result[0] += 0.003117886789841578;
          }
        }
      }
    }
  } else {
    result[0] += 0.008592188286905488;
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.45000000000001705) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)58.59999996000001232) ) ) {
        if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-87.00000001499998348) ) ) {
          result[0] += -0.0010389523548616276;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10.74999999500000136) ) ) {
            result[0] += 0.00153895592997567;
          } else {
            result[0] += 0.013280662678182127;
          }
        }
      } else {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)22.65000000000000213) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.950000000000001066) ) ) {
            result[0] += 0.003452372626565835;
          } else {
            result[0] += -0.0010765853631129001;
          }
        } else {
          result[0] += -0.005270450113134251;
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.55000000000001137) ) ) {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)10.69999999500000065) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.450000000000001066) ) ) {
            result[0] += 0.004244601270472289;
          } else {
            result[0] += -0.001809019585843603;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9.149999996500001842) ) ) {
            result[0] += 0.0013562275779743988;
          } else {
            result[0] += -0.00658576781512238;
          }
        }
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)79.85000000000000853) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)2.050000000000000266) ) ) {
            result[0] += 0.000978287172982016;
          } else {
            result[0] += -0.005545183998854975;
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.150000000000001243) ) ) {
            result[0] += -0.0007118331257662847;
          } else {
            result[0] += 0.004276242295022322;
          }
        }
      }
    }
  } else {
    result[0] += 0.009161662473808974;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.10000000000000497) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)8.643411502500002896) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.45000000000001705) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.1500000000000199) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)73.35000000000000853) ) ) {
            result[0] += -0.000936925218690728;
          } else {
            result[0] += 0.0015112640634302743;
          }
        } else {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.25000000000000355) ) ) {
            result[0] += -0.001289677095184153;
          } else {
            result[0] += -0.006916386793018319;
          }
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)88.25000000000001421) ) ) {
            result[0] += 0.0008447474697736922;
          } else {
            result[0] += 0.007856322683153614;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)63.50000000000000711) ) ) {
            result[0] += -0.0001944211962174124;
          } else {
            result[0] += -0.005029762545945468;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)36.05000000000000426) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)397.9999987400000236) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)269.7000000000000455) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.003561832682578824;
          }
        } else {
          result[0] += 0.0036297483800892504;
        }
      } else {
        result[0] += -0.007661268498579209;
      }
    }
  } else {
    result[0] += 0.007193262231225768;
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.35000000000000853) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.750000000000000888) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.750000000000000888) ) ) {
          if ( LIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.00845564101423536;
          } else {
            result[0] += -0.0029888891130685803;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)991.7000000000001592) ) ) {
            result[0] += -0.004055141912462809;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.9654795444367655355) ) ) {
          result[0] += 0.00674927805127068;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)31.85000000000000497) ) ) {
            result[0] += 0.001528100683569773;
          } else {
            result[0] += -0.0042426095522940166;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)642.5000000000001137) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.75000000000001421) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
            result[0] += -0.00010654264464613931;
          } else {
            result[0] += -0.0020677410475521663;
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += 0.0017488940594992367;
          } else {
            result[0] += -0.0017076144434977323;
          }
        }
      } else {
        result[0] += 0.010420375362349054;
      }
    }
  } else {
    result[0] += 0.007217114826509108;
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)72.6500000000000199) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)72.6500000000000199) ) ) {
        if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4490344482766146506) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2.99999993300000023) ) ) {
            result[0] += -0.0003771378504248654;
          } else {
            result[0] += -0.0034669849389028966;
          }
        } else {
          result[0] += 0.0035812607637074377;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.85000000000000497) ) ) {
          result[0] += -0.0011223299016377755;
        } else {
          result[0] += -0.007789394808086482;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.750000000000000888) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.750000000000000888) ) ) {
            result[0] += -0.006012210401892662;
          } else {
            result[0] += -0.002061542379401194;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)40.65000000000001279) ) ) {
            result[0] += -0.0009274680811785371;
          } else {
            result[0] += 0.007684134098701179;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)642.5000000000001137) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
            result[0] += 0.0007559474604902339;
          } else {
            result[0] += -0.001327901372483567;
          }
        } else {
          result[0] += 0.009899356788955628;
        }
      }
    }
  } else {
    result[0] += 0.007817654085035125;
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-114.4999999999999858) ) ) {
      result[0] += -0.006255627520033159;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)18064.79999977500484) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)19.55000000000000426) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)63.50000000000000711) ) ) {
            result[0] += 0.00035184840019792307;
          } else {
            result[0] += -0.005281304311007261;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)39.85000000000000142) ) ) {
            result[0] += -0.0001689511518403433;
          } else {
            result[0] += 0.0025427803281694653;
          }
        }
      } else {
        result[0] += 0.007040115483105182;
      }
    }
  } else {
    result[0] += 0.006829302508383989;
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)8.206379002000000256) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)30.6500000450000023) ) ) {
          result[0] += -0.006078022996133024;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10.90000000500000077) ) ) {
            result[0] += -0.0007630727863457057;
          } else {
            result[0] += 0.0025676691278397126;
          }
        }
      } else {
        if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)0.9999999495000001515) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.150000000000001243) ) ) {
            result[0] += 0.007994639825075865;
          } else {
            result[0] += 0.00045334850529414443;
          }
        } else {
          result[0] += 0.008493161887790148;
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.05000000000001137) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.350000000000000533) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
            result[0] += -0.0026415917107628453;
          } else {
            result[0] += -0.007765093915821875;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)84.45000000000001705) ) ) {
            result[0] += 0.0031741926000852664;
          } else {
            result[0] += -0.0033861624128185214;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)90.30000000000002558) ) ) {
          result[0] += 0.0069790045153349635;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)916.5000000000001137) ) ) {
            result[0] += 0.000184479844063954;
          } else {
            result[0] += -0.0034396681104165816;
          }
        }
      }
    }
  } else {
    result[0] += 0.008363027468323707;
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.20000000000000995) ) ) {
    result[0] += 0.007721427267586643;
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)27.55000006000000567) ) ) {
      result[0] += -0.004873633849201724;
    } else {
      if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)26.22500000000000497) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1364.500001000000339) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5100.700000000001637) ) ) {
            result[0] += -8.719527692319542e-05;
          } else {
            result[0] += -0.00547159029958913;
          }
        } else {
          result[0] += 0.005411767509173263;
        }
      } else {
        result[0] += 0.006023364177594582;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-116.4999998999999917) ) ) {
      result[0] += -0.005455167720094323;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)411.0000000000000568) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)26.00000000000000355) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)378.0000000000000568) ) ) {
            result[0] += -0.00022420093260308054;
          } else {
            result[0] += -0.007175919663161039;
          }
        } else {
          result[0] += 0.005688960801810026;
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)75.55000000000001137) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)47.19999998500001226) ) ) {
            result[0] += -0.0074861916842368925;
          } else {
            result[0] += 0.0007968805955412488;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.45000000000001705) ) ) {
            result[0] += 0.0006167991363035981;
          } else {
            result[0] += 0.0075972623140701375;
          }
        }
      }
    }
  } else {
    result[0] += 0.008004638932645322;
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5100.700000000001637) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)3862.550000000000637) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)26.00000000000000355) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
            result[0] += -6.91338897185166e-05;
          } else {
            result[0] += -0.0027185972420639306;
          }
        } else {
          result[0] += 0.006004618307432303;
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.720267000500000698) ) ) {
          result[0] += -0.00044420455662475423;
        } else {
          result[0] += 0.012788892225362362;
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.89999999150000054) ) ) {
        result[0] += -0.005676347144879399;
      } else {
        result[0] += -0.0005658135889098048;
      }
    }
  } else {
    result[0] += 0.00712238353677094;
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.20000000000000995) ) ) {
    result[0] += 0.00729171184822917;
  } else {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-114.4999999999999858) ) ) {
      result[0] += -0.006318804374472662;
    } else {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1285.499999000000116) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.950000000000001066) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.001645633466878372;
          } else {
            result[0] += 0.00020472185119892262;
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)0.9999999665000001148) ) ) {
            result[0] += -0.005048570875854542;
          } else {
            result[0] += -0.0001322996460560087;
          }
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.009115096368715802;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5992.300000000001091) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)642.5000000000001137) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.45000000000001705) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
            result[0] += 0.00012520383696992696;
          } else {
            result[0] += -0.001810436320717282;
          }
        } else {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.007603495563566685;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.010715386718511582;
        }
      }
    } else {
      result[0] += -0.004451868744153115;
    }
  } else {
    result[0] += 0.006163764892766873;
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)8.206379002000000256) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.35000000000000853) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.75000000000001421) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)58.59999996000001232) ) ) {
            result[0] += 0.001024971056539674;
          } else {
            result[0] += -0.0007504727075569917;
          }
        } else {
          result[0] += -0.005722652102510134;
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)75.95000000000001705) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9.000000018500001531) ) ) {
            result[0] += 0.010136691791152484;
          } else {
            result[0] += -0.00020524193747685504;
          }
        } else {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += 0.00011270404506887777;
          } else {
            result[0] += 0.0053737322968386465;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)388.4999978100000249) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)172.0000010300000213) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.89999999150000054) ) ) {
            result[0] += -0.003539588895426797;
          } else {
            result[0] += -0.0002213192170959453;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)2.500000000000000444) ) ) {
            result[0] += -0.010086581937968728;
          } else {
            result[0] += -0.0013872209358960393;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)313.5000000000000568) ) ) {
          result[0] += 0.006930353062343782;
        } else {
          result[0] += -0.004249886258505285;
        }
      }
    }
  } else {
    result[0] += 0.0075162393301725396;
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5100.700000000001637) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)3862.550000000000637) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)26.00000000000000355) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)2268.000000000000455) ) ) {
            result[0] += -9.5443384864251e-05;
          } else {
            result[0] += -0.003696036664948154;
          }
        } else {
          result[0] += 0.005649887675849291;
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.720267000500000698) ) ) {
          result[0] += -0.00045382833006442515;
        } else {
          result[0] += 0.011817945142587027;
        }
      }
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)1.00000001800250948e-35) ) ) {
        result[0] += -0.006410203569568691;
      } else {
        result[0] += -0.0016933879091897434;
      }
    }
  } else {
    result[0] += 0.006616205514874309;
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-116.4999998999999917) ) ) {
      result[0] += -0.005403977882117033;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)18064.79999977500484) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)19.55000000000000426) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)3.449999983000000103) ) ) {
            result[0] += -0.005989778266687477;
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)39.85000000000000142) ) ) {
            result[0] += -0.00012229226954761383;
          } else {
            result[0] += 0.0024418205400928857;
          }
        }
      } else {
        result[0] += 0.004682451707239334;
      }
    }
  } else {
    result[0] += 0.007121612213551998;
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5992.300000000001091) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)1.139647525713367804) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.35000000000000853) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)46.20000000000000995) ) ) {
            result[0] += -0.0030684331559351474;
          } else {
            result[0] += 0.004010165145620704;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)642.5000000000001137) ) ) {
            result[0] += 1.478474761326132e-06;
          } else {
            result[0] += 0.009611784741282464;
          }
        }
      } else {
        result[0] += 0.0063927816464142365;
      }
    } else {
      result[0] += -0.004445027305434147;
    }
  } else {
    result[0] += 0.005828011801466346;
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.20000000000000995) ) ) {
    result[0] += 0.006647982243448496;
  } else {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-114.4999999999999858) ) ) {
      result[0] += -0.006255785450339318;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)18064.79999977500484) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)71.1500000000000199) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.2292269069310946816) ) ) {
            result[0] += 6.205219941554017e-05;
          } else {
            result[0] += -0.0025167983216524592;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)929.5000000000001137) ) ) {
            result[0] += -0.00017183424089028138;
          } else {
            result[0] += 0.0018816602243402023;
          }
        }
      } else {
        result[0] += 0.005366585692196774;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-116.4999998999999917) ) ) {
      result[0] += -0.005211921155452728;
    } else {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)8.206379002000000256) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.45000000000001705) ) ) {
          if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-56.99999996499999355) ) ) {
            result[0] += 0.00032845679667822315;
          } else {
            result[0] += -0.0014236005066567553;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)682.9999997000001031) ) ) {
            result[0] += 0.0003945901383615112;
          } else {
            result[0] += 0.0041111132469168815;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.1500000000000199) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1098.100000000000136) ) ) {
            result[0] += -0.0035018992814453472;
          } else {
            result[0] += 0.0009091744681491573;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)90.55000000000001137) ) ) {
            result[0] += 0.006866329561918974;
          } else {
            result[0] += -0.0006766644004323426;
          }
        }
      }
    }
  } else {
    result[0] += 0.0067263230010867125;
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.20000000000000995) ) ) {
    result[0] += 0.0062739138643849975;
  } else {
    if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-114.4999999999999858) ) ) {
      result[0] += -0.005858490614389832;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)18064.79999977500484) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
            result[0] += -0.00025026659821600843;
          } else {
            result[0] += 0.001480865988806628;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)704.4999997500000291) ) ) {
            result[0] += -0.0029401256311013626;
          } else {
            result[0] += 0.0014782325903306137;
          }
        }
      } else {
        result[0] += 0.004960609286014612;
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5992.300000000001091) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)1.139647525713367804) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.75000000000001421) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.1500000000000199) ) ) {
            result[0] += -0.00012038688421483878;
          } else {
            result[0] += -0.0018358391693086718;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)682.9999997000001031) ) ) {
            result[0] += 0.0001970925318164518;
          } else {
            result[0] += 0.0073075694257083035;
          }
        }
      } else {
        result[0] += 0.0057444762252271174;
      }
    } else {
      result[0] += -0.0044921735808667205;
    }
  } else {
    result[0] += 0.005366624629745881;
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1431.000000000000227) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5100.700000000001637) ) ) {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)3862.550000000000637) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)26.00000000000000355) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
            result[0] += 9.2873433487387e-05;
          } else {
            result[0] += -0.0015218503400217743;
          }
        } else {
          result[0] += 0.0049384987612183275;
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.720267000500000698) ) ) {
          result[0] += -0.000627016391372308;
        } else {
          result[0] += 0.01078235890250653;
        }
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.00643198793249515;
      } else {
        result[0] += -0.001354521356523037;
      }
    }
  } else {
    result[0] += 0.0059335656293357415;
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.35000000000000853) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)46.20000000000000995) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.850000000000000533) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.931022678500000644) ) ) {
            result[0] += -0.0012234475496022599;
          } else {
            result[0] += -0.004769549478830702;
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)25.73333333333333783) ) ) {
            result[0] += 0.001966977866270162;
          } else {
            result[0] += -0.005318902381337606;
          }
        }
      } else {
        result[0] += 0.0038919868813827637;
      }
    } else {
      if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)3599.150000000000546) ) ) {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)79.85000000000000853) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)79.95000000000001705) ) ) {
            result[0] += -7.821608036524824e-05;
          } else {
            result[0] += -0.0034850777246590173;
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.150000000000001243) ) ) {
            result[0] += -8.452790172544168e-05;
          } else {
            result[0] += 0.004191420401060468;
          }
        }
      } else {
        result[0] += 0.006735659261996096;
      }
    }
  } else {
    result[0] += 0.005058531238387029;
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.150000000000001243) ) ) {
        result[0] += 0.005485472575344734;
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.15000000000000213) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-100.4999998999999917) ) ) {
            result[0] += -0.00421563850962283;
          } else {
            result[0] += 5.523540983209387e-05;
          }
        } else {
          result[0] += 0.004801171251456253;
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.250000000000000888) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)911.5000000000001137) ) ) {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)2.800000017000000341) ) ) {
            result[0] += -0.004716466328298504;
          } else {
            result[0] += 0.0006702984808944167;
          }
        } else {
          result[0] += -0.009084064178168772;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.6500000000000199) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)684.5000000000001137) ) ) {
            result[0] += -0.00019938996343530323;
          } else {
            result[0] += -0.0039846606037786435;
          }
        } else {
          result[0] += 0.006886936098337174;
        }
      }
    }
  } else {
    result[0] += 0.006414698109030723;
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
    if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)5100.700000000001637) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)642.5000000000001137) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)71.1500000000000199) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.2292269069310946816) ) ) {
            result[0] += 7.069984878986501e-05;
          } else {
            result[0] += -0.0023855544073594502;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)929.5000000000001137) ) ) {
            result[0] += -0.00017661554066559476;
          } else {
            result[0] += 0.0018254012275693559;
          }
        }
      } else {
        result[0] += 0.005428022628595285;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.50000000000000711) ) ) {
        result[0] += -0.0011601426445234278;
      } else {
        result[0] += -0.0055665767472237344;
      }
    }
  } else {
    result[0] += 0.005740271646839877;
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.150000000000001243) ) ) {
        result[0] += 0.005225630072925828;
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.15000000000000213) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (double)0.9999999495000001515) ) ) {
            result[0] += -0.00018825136212136486;
          } else {
            result[0] += 0.002270822016561919;
          }
        } else {
          result[0] += 0.004533812343033787;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)75.19999999000002333) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)36.65000000000001279) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)655.0000000000001137) ) ) {
            result[0] += 8.988053334797634e-05;
          } else {
            result[0] += -0.004367403700016439;
          }
        } else {
          result[0] += 0.005842564805195882;
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.750000000000000888) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)907.5000000000001137) ) ) {
            result[0] += -0.0028480661172943654;
          } else {
            result[0] += -0.008891598603688182;
          }
        } else {
          result[0] += 0.001001082427162481;
        }
      }
    }
  } else {
    result[0] += 0.006204250499606132;
  }
}

