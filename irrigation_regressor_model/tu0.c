
#include "header.h"

void predict_unit0(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += 0.4671388509058489;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += 0.4767927687824526;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)735.5000000000001137) ) ) {
            result[0] += 0.4780585972917399;
          } else {
            result[0] += 0.49214427906637254;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)74.45000000000001705) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)89.49999996500001487) ) ) {
            result[0] += 0.4811779669884985;
          } else {
            result[0] += 0.49542796635519915;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.5314965955535964;
          } else {
            result[0] += 0.5083976647580041;
          }
        }
      } else {
        result[0] += 0.480483522310706;
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)3.365367215000000467) ) ) {
          result[0] += 0.53985221045808;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
            result[0] += 0.5775470117089155;
          } else {
            result[0] += 0.5595113004460082;
          }
        }
      } else {
        result[0] += 0.5264279684438453;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        result[0] += 0.5871501887719643;
      } else {
        result[0] += 0.6153446326865897;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
      result[0] += -0.02197939176898019;
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.25000000000001421) ) ) {
        result[0] += -0.012466642361856543;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)452.4999995000000581) ) ) {
            result[0] += -0.01223447587667033;
          } else {
            result[0] += 0.006033643612638116;
          }
        } else {
          result[0] += 0.003989674490228107;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)691.5000076000001172) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.250000000000000888) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += 0.03942516960948705;
          } else {
            result[0] += 0.07228323106964428;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
            result[0] += 0.06070933264493943;
          } else {
            result[0] += 0.02294001348846359;
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.199999983000001436) ) ) {
          result[0] += 0.0007459135494159105;
        } else {
          result[0] += 0.027144238215226397;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)659.500000200000045) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.55000000000001137) ) ) {
          result[0] += 0.07056311337785287;
        } else {
          result[0] += 0.041347768574953085;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
          result[0] += 0.09149810281064774;
        } else {
          result[0] += 0.11881610612074534;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
      result[0] += -0.020880422207976687;
    } else {
      if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.35000000000000853) ) ) {
        result[0] += -0.012642535484380655;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
            result[0] += -0.016337224583269333;
          } else {
            result[0] += -0.0026739206766852965;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
            result[0] += -0.002138242339009236;
          } else {
            result[0] += 0.010417799320071938;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)676.4999992500000872) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.250000000000000888) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += 0.03745391126535832;
          } else {
            result[0] += 0.068669072513779;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
            result[0] += 0.05767386567592621;
          } else {
            result[0] += 0.020576727229182596;
          }
        }
      } else {
        result[0] += 0.0053662213041025105;
      }
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
          result[0] += 0.0661789558922991;
        } else {
          result[0] += 0.037537535049698575;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
          result[0] += 0.08889470076560974;
        } else {
          result[0] += 0.11529196453094481;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)22.60000000000000497) ) ) {
        result[0] += -0.020693685207808135;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.55000000000001137) ) ) {
          result[0] += -0.011894652152278772;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)865.5000000000001137) ) ) {
            result[0] += -0.011851620081511964;
          } else {
            result[0] += 0.0011814274481187265;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.85000000000000497) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
          result[0] += -0.014742683360183782;
        } else {
          result[0] += -0.002446882195977701;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += 0.0052609248762342355;
          } else {
            result[0] += 0.028519437147914314;
          }
        } else {
          result[0] += -0.01240808276821756;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.05000000000001137) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.07368896373112997;
        } else {
          if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)2.500000000000000444) ) ) {
            result[0] += 0.0425612083234285;
          } else {
            result[0] += 0.061723735630512234;
          }
        }
      } else {
        result[0] += 0.027109124087370363;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        result[0] += 0.07956590899714718;
      } else {
        result[0] += 0.10733067701260249;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)22.60000000000000497) ) ) {
        result[0] += -0.01965900073756519;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)28.55000000000000426) ) ) {
          result[0] += -0.013691958158593113;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.010515083031496033;
          } else {
            result[0] += -0.0034728024470861312;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.85000000000000497) ) ) {
        result[0] += -0.00684147342718367;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.350000000000000533) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.95000000000001705) ) ) {
            result[0] += -0.005272253702648662;
          } else {
            result[0] += 0.03182085222228654;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1311.000000000000227) ) ) {
            result[0] += -0.0004160264748753163;
          } else {
            result[0] += 0.03010839503630996;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.07005482102695264;
        } else {
          result[0] += 0.05066499368049378;
        }
      } else {
        result[0] += 0.020008745759725572;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)4.750000017000000518) ) ) {
          result[0] += 0.06614455205202098;
        } else {
          result[0] += 0.09429536831378937;
        }
      } else {
        result[0] += 0.10416083347797395;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.018001761963388246;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)79.45000000000001705) ) ) {
          result[0] += -0.010027121584316524;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.35000000000000853) ) ) {
            result[0] += -0.010573673363640367;
          } else {
            result[0] += 0.0031588744872339796;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)73.95000000000001705) ) ) {
          result[0] += -0.0018241216939746995;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.032072236782175974;
          } else {
            result[0] += 0.013748449255246667;
          }
        }
      } else {
        result[0] += -0.009243426718141724;
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.06650177586078644;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)6.350000017000001051) ) ) {
            result[0] += 0.03919576085749127;
          } else {
            result[0] += 0.05396490121588987;
          }
        }
      } else {
        result[0] += 0.01900830861926079;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)4728.750000000000909) ) ) {
          result[0] += 0.08421923887729642;
        } else {
          result[0] += 0.0647393286929411;
        }
      } else {
        result[0] += 0.09683831443389257;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
      result[0] += -0.017740921455529312;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)221.5000000000000284) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)19.65000000000000213) ) ) {
          result[0] += -0.01869440785564837;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.45000000000001705) ) ) {
            result[0] += -0.009994963857804844;
          } else {
            result[0] += -0.005291644999845906;
          }
        }
      } else {
        result[0] += 0.003310482855220991;
      }
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)676.4999992500000872) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.250000000000000888) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.85000000000000497) ) ) {
            result[0] += 0.06155825938690791;
          } else {
            result[0] += 0.032143653428012675;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
            result[0] += 0.04836710718274117;
          } else {
            result[0] += 0.016582337557096274;
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.199999983000001436) ) ) {
          result[0] += -0.0011522498263751486;
        } else {
          result[0] += 0.022697803240555987;
        }
      }
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
          result[0] += 0.05436725479491214;
        } else {
          result[0] += 0.030479305142706095;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.06937758557498454;
        } else {
          result[0] += 0.09201923872743334;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.01685387473004733;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
            result[0] += -0.013957519557214144;
          } else {
            result[0] += -0.002577521326983797;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.008956452683270567;
          } else {
            result[0] += 0.001362463256078107;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.75000000000000355) ) ) {
        result[0] += -0.0037091815797612067;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.350000000000000533) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += 0.002589153840672225;
          } else {
            result[0] += 0.030432487536054938;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1311.000000000000227) ) ) {
            result[0] += 0.0007558567693663968;
          } else {
            result[0] += 0.025556505700867427;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.85000000000000497) ) ) {
        result[0] += 0.06055832592646281;
      } else {
        if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)2182.499996700000338) ) ) {
          result[0] += 0.022317183651030068;
        } else {
          result[0] += 0.043312144968658685;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        result[0] += 0.0651711400349935;
      } else {
        result[0] += 0.0878671383857727;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.015477315721327739;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.009317681377867766;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.95000000000001705) ) ) {
            result[0] += -0.006945948828030013;
          } else {
            result[0] += 0.007330910935042761;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.85000000000000497) ) ) {
        result[0] += -0.0059238924561389565;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.350000000000000533) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.95000000000001705) ) ) {
            result[0] += -0.005062692699615251;
          } else {
            result[0] += 0.026745791821445847;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1311.000000000000227) ) ) {
            result[0] += -0.0009994118732579967;
          } else {
            result[0] += 0.025054824868217113;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.15000000000001279) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
          result[0] += 0.05895673756416028;
        } else {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)26.22500000000000497) ) ) {
            result[0] += 0.03674554088152945;
          } else {
            result[0] += 0.05330653646162579;
          }
        }
      } else {
        result[0] += 0.01564421561360359;
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.4500000000000011213) ) ) {
        result[0] += 0.06367298862208491;
      } else {
        result[0] += 0.08776843202114104;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.015252099200909917;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
            result[0] += -0.012761852699096757;
          } else {
            result[0] += -0.002131805831630682;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.008111956585424253;
          } else {
            result[0] += 0.0009176543469276602;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.650000000000001243) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0019183078398928048;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.450000000000000622) ) ) {
            result[0] += 0.03861483794533544;
          } else {
            result[0] += 0.016015361554634115;
          }
        }
      } else {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.008063843186013402;
        } else {
          result[0] += 0.014025735144431777;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0027907646860441436;
    } else {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.95000000000001705) ) ) {
          result[0] += 0.04378342324069568;
        } else {
          result[0] += 0.019763045879080895;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)721.9999999000000344) ) ) {
          result[0] += 0.059487537926641;
        } else {
          result[0] += 0.08178335380554198;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.013988955103179289;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.25000000000001421) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)69.85000000000000853) ) ) {
            result[0] += -0.01394025317473071;
          } else {
            result[0] += -0.007354354119588607;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.95000000000001705) ) ) {
            result[0] += -0.005236599697100539;
          } else {
            result[0] += 0.006771591734311477;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.75000000000001421) ) ) {
          result[0] += -0.0029335553087053243;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
            result[0] += 0.03433329937650877;
          } else {
            result[0] += 0.015409562110881063;
          }
        }
      } else {
        result[0] += -0.009759222068306473;
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
          result[0] += 0.05753994864225388;
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)78.1500000000000199) ) ) {
            result[0] += 0.04767040859711798;
          } else {
            result[0] += 0.03315534100646064;
          }
        }
      } else {
        result[0] += 0.02004141722619534;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.054418630786240096;
      } else {
        result[0] += 0.07323849804261151;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.013804609860878354;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          result[0] += -0.013140306388493629;
        } else {
          result[0] += -0.0055087906875061375;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.850000000000000533) ) ) {
          result[0] += -0.006209117030052262;
        } else {
          result[0] += 0.012301157320348116;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.001698623685432332;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
            result[0] += 0.03612410797522618;
          } else {
            result[0] += 0.015964939250477723;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)587.5000001000000793) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.05000000000001137) ) ) {
        result[0] += 0.0007437430310528726;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.75000000000001421) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += 0.05191725180699275;
          } else {
            result[0] += 0.03442547749905359;
          }
        } else {
          result[0] += 0.014963555017655547;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.85000000000000853) ) ) {
          result[0] += 0.04229938140381937;
        } else {
          result[0] += 0.06416669405423678;
        }
      } else {
        result[0] += 0.07261492868264516;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.012661806624762868;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += -0.007954805135666354;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.011791971014346928;
          } else {
            result[0] += -0.0007473510316999715;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.006009232848350491;
        } else {
          result[0] += 0.012381960829863183;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0016136924505588555;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
            result[0] += 0.03521085418593139;
          } else {
            result[0] += 0.015166692056027907;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.349999997000001173) ) ) {
        result[0] += -0.007141387438634407;
      } else {
        result[0] += 0.00998163306942353;
      }
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)79.6500000000000199) ) ) {
          result[0] += 0.038339339788754784;
        } else {
          result[0] += 0.01411373143012707;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.45000000000001705) ) ) {
          result[0] += 0.04957202184200286;
        } else {
          result[0] += 0.06916343239943186;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)224.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.012493633118551948;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)19.65000000000000213) ) ) {
          result[0] += -0.01463709541374729;
        } else {
          if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-0.4000000000000002998) ) ) {
            result[0] += -0.009775877684669596;
          } else {
            result[0] += -0.004463943257315183;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.0057158759566477675;
        } else {
          result[0] += 0.011762862930504176;
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.15000000000000213) ) ) {
            result[0] += 0.02399357054175602;
          } else {
            result[0] += 0.00730318836281076;
          }
        } else {
          result[0] += -0.008501981532317586;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0021926082399390313;
    } else {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3839.000000200000613) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.95000000000001705) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)34.65000000000001279) ) ) {
            result[0] += 0.032351962798833844;
          } else {
            result[0] += 0.04728803272310056;
          }
        } else {
          result[0] += 0.015961085706949235;
        }
      } else {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.4500000000000011213) ) ) {
          result[0] += 0.048464344364145526;
        } else {
          result[0] += 0.07068346959352494;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)100.0000000000000142) ) ) {
        result[0] += -0.011868951119258711;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)44.10000000000000853) ) ) {
            result[0] += -0.015193122952215136;
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.25000000000001421) ) ) {
            result[0] += -0.006854901343778554;
          } else {
            result[0] += -0.0018974676084704699;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.0054229773575706144;
        } else {
          result[0] += 0.011174719806115788;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0016452857184534272;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
            result[0] += 0.03231739358901977;
          } else {
            result[0] += 0.013590173217201873;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0020829776638065993;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)79.6500000000000199) ) ) {
          result[0] += 0.03460558560093244;
        } else {
          result[0] += 0.012546948836399958;
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)6.150000017000000874) ) ) {
          result[0] += 0.04530842658546235;
        } else {
          result[0] += 0.06618614132205645;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.010917320506913323;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.006542828019306963;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.95000000000001705) ) ) {
            result[0] += -0.004315047299837679;
          } else {
            result[0] += 0.007020880555756753;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.00515182856284082;
        } else {
          result[0] += 0.010615983817081613;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0015630217027362615;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.03296839789117803;
          } else {
            result[0] += 0.014001085149473512;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.001978828743019182;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)79.6500000000000199) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
            result[0] += 0.042384923078558026;
          } else {
            result[0] += 0.030001797971540484;
          }
        } else {
          result[0] += 0.011919601467939524;
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)6.150000017000000874) ) ) {
          result[0] += 0.043043004622062044;
        } else {
          result[0] += 0.06287683481971423;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)224.5000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
          result[0] += -0.010492504076194556;
        } else {
          result[0] += 0;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)79.45000000000001705) ) ) {
          result[0] += -0.005614135631487268;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.005188337707625969;
          } else {
            result[0] += 0.00522818607572699;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.599999983000001791) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)34.55000000000000426) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)39.95000000000000995) ) ) {
            result[0] += 0.004569854766729155;
          } else {
            result[0] += 0.03311350916326047;
          }
        } else {
          result[0] += -0.003550389306869225;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)916.5000000000001137) ) ) {
          result[0] += 0.0124745830662097;
        } else {
          result[0] += 0.029456536921744166;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.025383451877514254;
          } else {
            result[0] += 0.03928188978383938;
          }
        } else {
          result[0] += 0.011878798487782479;
        }
      } else {
        result[0] += 0.0003228288947138935;
      }
    } else {
      result[0] += 0.046200078488924566;
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
          result[0] += -0.009967878391918053;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.299999996500002197) ) ) {
            result[0] += 0.005143464081753764;
          } else {
            result[0] += -0.008173688297780852;
          }
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)69.85000000000000853) ) ) {
            result[0] += -0.011264601362603053;
          } else {
            result[0] += -0.004770246394107054;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.95000000000001705) ) ) {
            result[0] += -0.0011804777301359373;
          } else {
            result[0] += 0.005667578315258855;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)74.75000000000001421) ) ) {
          result[0] += -0.00277895154527806;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.02022267156697328;
          } else {
            result[0] += 0.007263645736883129;
          }
        }
      } else {
        result[0] += -0.007896512171460522;
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.6500000000000199) ) ) {
        result[0] += 0.03105274639593867;
      } else {
        result[0] += 0.014920743290673603;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.036829971037805075;
      } else {
        result[0] += 0.05683131375483105;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
          result[0] += -0.00946948447676868;
        } else {
          result[0] += -0.00017631388413880404;
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += -0.005391209731263606;
        } else {
          result[0] += 0.001351953995724519;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.850000000000000533) ) ) {
          result[0] += -0.005000133953838875;
        } else {
          result[0] += 0.008932665999119098;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0019786772076483996;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.1500000000000199) ) ) {
            result[0] += 0.014053536238414903;
          } else {
            result[0] += 0.03535179872404445;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.75000000000001421) ) ) {
        result[0] += 0.032217623276842966;
      } else {
        result[0] += 0.05296676306260957;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)676.4999992500000872) ) ) {
        if ( UNLIKELY(  (data[27].missing != -1) && (data[27].fvalue <= (double)-1.00000001800250948e-35) ) ) {
          result[0] += 0.01835012136399746;
        } else {
          result[0] += 0.0011553821442290568;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          result[0] += 0.0233271690421715;
        } else {
          result[0] += 0.03971701217194398;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)39.99999983000000725) ) ) {
        if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)19.65000000000000213) ) ) {
          result[0] += -0.012120045529384364;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.850000000000000533) ) ) {
            result[0] += -0.002134772595464476;
          } else {
            result[0] += -0.00879924578488701;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.00960231542309177;
        } else {
          result[0] += -0.0045730233567480285;
        }
      }
    } else {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.35000000000000853) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.750000000000000888) ) ) {
            result[0] += -0.01160507327773505;
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.450000000000000622) ) ) {
            result[0] += 0.02237458339011347;
          } else {
            result[0] += 0.008841948793100362;
          }
        }
      } else {
        result[0] += -0.004082494860768996;
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)18289.49999178000508) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.05000000000000426) ) ) {
        result[0] += 0.040753235806311884;
      } else {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)26.22500000000000497) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)671.5000000000001137) ) ) {
            result[0] += 0.024675226542353632;
          } else {
            result[0] += 0.013026212894994962;
          }
        } else {
          result[0] += 0.03376334044863196;
        }
      }
    } else {
      result[0] += 0.04701777239640553;
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)19.64166666666666927) ) ) {
        result[0] += -0.008590234306215824;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)74.45000000000001705) ) ) {
          result[0] += -0.006052357443052199;
        } else {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.00024275156603996746;
          } else {
            result[0] += -0.006482003039879992;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.6330708189934523) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0026189226682763545;
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
            result[0] += 0.025414073604345323;
          } else {
            result[0] += 0.00957910090782925;
          }
        }
      } else {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.00652384446543311;
        } else {
          result[0] += 0.008431507304310798;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0014203098857694348;
    } else {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)3752.499998900000264) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)79.6500000000000199) ) ) {
          result[0] += 0.025070067291362925;
        } else {
          result[0] += 0.008934451432100364;
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.02970390939050251;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)30.50000000000000355) ) ) {
            result[0] += 0.06092979174852369;
          } else {
            result[0] += 0.030583784905346963;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)224.5000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += -0.008665314443888945;
          } else {
            result[0] += -0.0014230999464967422;
          }
        } else {
          result[0] += 0.004475488880310546;
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += -0.004662614843034086;
        } else {
          result[0] += 0.001152922309231647;
        }
      }
    } else {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-3.000000167499999648) ) ) {
        if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-78.00000003499998513) ) ) {
          result[0] += -0.005183332608111443;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)211.0000004000000047) ) ) {
            result[0] += 0.004959849711837403;
          } else {
            result[0] += 0.024595938295125963;
          }
        }
      } else {
        result[0] += 0.026739693850278856;
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0013492943204777398;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.02725970876844306;
        } else {
          result[0] += 0.047673727028510145;
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1172.499999500000285) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.45000000000001705) ) ) {
            result[0] += 0.011335061676199399;
          } else {
            result[0] += 0.02364329643385566;
          }
        } else {
          result[0] += 0.03034659747433449;
        }
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
          result[0] += -0.007781582026810643;
        } else {
          result[0] += 0;
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += -0.004469413604408754;
        } else {
          result[0] += 0.0013919297584022085;
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.599999983000001791) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)34.55000000000000426) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-54.0000005049999956) ) ) {
            result[0] += -0.005764030455969848;
          } else {
            result[0] += 0.016662530226404435;
          }
        } else {
          result[0] += -0.004213363910688365;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)916.5000000000001137) ) ) {
          result[0] += 0.00965695659723133;
        } else {
          result[0] += 0.026924899040410916;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.349999997000001173) ) ) {
        result[0] += -0.007235786582343278;
      } else {
        result[0] += 0.008218457268980834;
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.3499999999999997002) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)79.6500000000000199) ) ) {
          result[0] += 0.022674879267862116;
        } else {
          result[0] += 0.0057760218607092444;
        }
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.6500000000000199) ) ) {
          result[0] += 0.04899483902887865;
        } else {
          result[0] += 0.02928140846165744;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)676.4999992500000872) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)709.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)33.75000000000000711) ) ) {
          result[0] += -0.007392503010944046;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.299999996500002197) ) ) {
            result[0] += 0.0048762279980976864;
          } else {
            result[0] += -0.007315128318344554;
          }
        }
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.95000000000001705) ) ) {
          result[0] += -0.004253770456325583;
        } else {
          result[0] += 0.0010311428587246908;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)680.5000000000001137) ) ) {
          result[0] += -0.006107773356682931;
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)74.85000000000000853) ) ) {
            result[0] += 0.0003292121694368475;
          } else {
            result[0] += 0.015733350558767973;
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.199999983000001436) ) ) {
          result[0] += -0.0032593129091681196;
        } else {
          result[0] += 0.011880074590610872;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)18289.49999178000508) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.6500000000000004663) ) ) {
        if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-94.00000003499998513) ) ) {
          if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-98.00000008499998216) ) ) {
            result[0] += 0.01937141453677958;
          } else {
            result[0] += 0.03442636054754258;
          }
        } else {
          result[0] += 0.012181173099533602;
        }
      } else {
        result[0] += 0.03696371015906334;
      }
    } else {
      result[0] += 0.03930116376943059;
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)19.64166666666666927) ) ) {
        result[0] += -0.007049556637202302;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)74.45000000000001705) ) ) {
          result[0] += -0.005031411927727204;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.008086240533207145;
          } else {
            result[0] += -3.746392858637021e-05;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.6330708189934523) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0029290411565452814;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.023188455643301662;
          } else {
            result[0] += 0.008230478674423223;
          }
        }
      } else {
        if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.0061928233966952375;
        } else {
          result[0] += 0.007156620291372141;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0011755300799141761;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.02301150213730963;
        } else {
          result[0] += 0.04243795948870042;
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1172.499999500000285) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.45000000000001705) ) ) {
            result[0] += 0.009000805540995171;
          } else {
            result[0] += 0.02053308988556914;
          }
        } else {
          result[0] += 0.026195294492478885;
        }
      }
    }
  }
}

