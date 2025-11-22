
#include "header.h"

void predict_unit2(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)2908.900000000000546) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)258.5000000000000568) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)8.41583600200000248) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.75000000000000711) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)71.1500000000000199) ) ) {
            result[0] += -0.00324389661604673;
          } else {
            result[0] += -0.0008802095675341193;
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)6.691370005500000495) ) ) {
            result[0] += -0.0009647135832684411;
          } else {
            result[0] += 0.005284996785747354;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)374.0000000649999379) ) ) {
          result[0] += -0.004020759064622563;
        } else {
          result[0] += 0.003542090990915313;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)735.5000000000001137) ) ) {
        result[0] += -0.0056944836732388164;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11.75000000000000178) ) ) {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += -0.0009095916509360187;
          } else {
            result[0] += 0.0050638570125478;
          }
        } else {
          result[0] += 0.012465793304478818;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.8592196348980983833) ) ) {
      result[0] += 0.019939391999082137;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)16.79999999500000385) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)34.95000000000000995) ) ) {
          result[0] += -0.0007687976192391944;
        } else {
          result[0] += 0.006448755877402922;
        }
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.6500000000000199) ) ) {
          result[0] += 0.019780415746455005;
        } else {
          result[0] += 0.00461672828408579;
        }
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)2908.900000000000546) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)722.0000000000001137) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)277.9999999000000912) ) ) {
        result[0] += -0.0017063251390907086;
      } else {
        result[0] += -0.008605174214268724;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)74.45000000000001705) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.431735990000000847) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)70.85000000000000853) ) ) {
            result[0] += -0.0028206968761514874;
          } else {
            result[0] += 0.0022947407578202813;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)966.0000000000001137) ) ) {
            result[0] += -0.003965170781208491;
          } else {
            result[0] += 0.0006747209677344253;
          }
        }
      } else {
        if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-2.000000033499999663) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)41.25000000000000711) ) ) {
            result[0] += 0.0024006654556287103;
          } else {
            result[0] += -0.0031577739132769116;
          }
        } else {
          result[0] += 0.013417433191090823;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.89999999150000054) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)2.500000000000000444) ) ) {
        result[0] += -0.0016607138207730126;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)36.95000001000000367) ) ) {
          result[0] += 0.0012528815077474482;
        } else {
          result[0] += 0.010241494287329261;
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)659.500000200000045) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)35.25000000000000711) ) ) {
          result[0] += 0.0024318740890799636;
        } else {
          result[0] += 0.014579649658873678;
        }
      } else {
        result[0] += 0.02245299276709557;
      }
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1227.000000300000238) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)46.20000000000000995) ) ) {
        result[0] += -0.005775984724245544;
      } else {
        result[0] += 0.0033156271050684156;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.60000000000000853) ) ) {
        result[0] += 0.007535017505288124;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.6500000000000199) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)4.999999991500001073) ) ) {
            result[0] += -0.0007094472951433469;
          } else {
            result[0] += -0.002569902537894128;
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += 0.0018122221327997842;
          } else {
            result[0] += -0.0027977513418167457;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
      if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)207.4999998000000403) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)24.00833333333333641) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)1545.200000000000045) ) ) {
            result[0] += -0.0018725260766223068;
          } else {
            result[0] += 0.007974253900349141;
          }
        } else {
          result[0] += -0.005745564407923005;
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.55000000000000426) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)4.88591337000000081) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.012640565796905468;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.004283785623824224;
          } else {
            result[0] += -0.0021530914569739255;
          }
        }
      }
    } else {
      result[0] += 0.016171811640262605;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)479.5000004000000331) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)46.20000000000000995) ) ) {
        result[0] += -0.005319224630989004;
      } else {
        result[0] += 0.0031498454306274656;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)74.45000000000001705) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.750000000000000111) ) ) {
          result[0] += -0.0022277890001593833;
        } else {
          result[0] += 0.0014280828090600802;
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.55000000000001137) ) ) {
            result[0] += 0.00042269305455819013;
          } else {
            result[0] += 0.006164455161910625;
          }
        } else {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.25000000000001421) ) ) {
            result[0] += 0.005721437699444916;
          } else {
            result[0] += -0.002735229564368256;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)4.967305816500000581) ) ) {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.35000000000000853) ) ) {
          result[0] += -0.0034562757128366716;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)655.0000000000001137) ) ) {
            result[0] += 0.00911711982145789;
          } else {
            result[0] += -2.3427605628965434e-07;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)682.5000000000001137) ) ) {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)2268.000000000000455) ) ) {
            result[0] += 0.008121784960808742;
          } else {
            result[0] += 0.0007342033293389251;
          }
        } else {
          result[0] += 0.01899318922226402;
        }
      }
    } else {
      result[0] += 0.014124714868286481;
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1015.49999924999986) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)862.5000000000001137) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)843.0000000000001137) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.750000000000000888) ) ) {
            result[0] += -0.0060152650170209945;
          } else {
            result[0] += 0.0018028410219994842;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.60000000000000853) ) ) {
            result[0] += 0.006385952339374593;
          } else {
            result[0] += -0.0011326324667490695;
          }
        }
      } else {
        result[0] += -0.006412336615914548;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)866.5000000000001137) ) ) {
        result[0] += 0.009449148334562778;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)70.55000000000001137) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)21.92500000000000426) ) ) {
            result[0] += -0.006095820511165526;
          } else {
            result[0] += 0.0018371438971635972;
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)2603.550025575000745) ) ) {
            result[0] += 0.0009002344703022392;
          } else {
            result[0] += -0.004635246300481652;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)74.85000000000000853) ) ) {
      result[0] += -0.001038025125162676;
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)76.1500000000000199) ) ) {
        result[0] += 0.014492488391697408;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.95000000000001705) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)40.25000000000000711) ) ) {
            result[0] += 0.003945266312907916;
          } else {
            result[0] += -0.006406213790178299;
          }
        } else {
          result[0] += 0.012540524143439072;
        }
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)23.42500000000000426) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)21.64166666666666927) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.950000000000001066) ) ) {
            result[0] += -0.0005125432150287618;
          } else {
            result[0] += -0.004117765096584108;
          }
        } else {
          result[0] += -0.007891541726887226;
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)21.75833333333333641) ) ) {
          result[0] += -0.008177535084800588;
        } else {
          result[0] += -0.0023769114860059588;
        }
      }
    } else {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-7.000000267999999082) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          result[0] += -0.004812354935798794;
        } else {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)83.55000000000001137) ) ) {
            result[0] += -0.0002569260190149449;
          } else {
            result[0] += 0.006003927381502258;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.449999997000000818) ) ) {
          result[0] += 0.017398689363438354;
        } else {
          result[0] += -0.0010932315743871427;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5.900000003500001533) ) ) {
      result[0] += -0.006058937452733517;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.350000000000000089) ) ) {
          result[0] += 0.013120552798888336;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)40.05000000000000426) ) ) {
            result[0] += 0.003721712988373601;
          } else {
            result[0] += -0.0025353561929966277;
          }
        }
      } else {
        result[0] += 0.013815963041658203;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)260.5000000000000568) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.650000000000001243) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)318.1000000000000796) ) ) {
        result[0] += -0.00023960736393928525;
      } else {
        result[0] += -0.006663727778196335;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)94.35000000000000853) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.950000000000001066) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += -0.0002836085992057633;
          } else {
            result[0] += -0.0025755064291325177;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)35.65000000000001279) ) ) {
            result[0] += -0.006044065989886544;
          } else {
            result[0] += -0.00023288623037699024;
          }
        }
      } else {
        result[0] += 0.007388015020017823;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)74.85000000000000853) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1751.499997750000375) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1387.999998100000312) ) ) {
            result[0] += -0.0018261454347521069;
          } else {
            result[0] += 0.004178432227511491;
          }
        } else {
          result[0] += -0.006141995582729578;
        }
      } else {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.35000000000000853) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)22.85000000000000497) ) ) {
            result[0] += 0.012736099079428685;
          } else {
            result[0] += 0.003596472054313411;
          }
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)4.699999991500001251) ) ) {
            result[0] += -0.0030076321503421403;
          } else {
            result[0] += 0.003647135650953995;
          }
        }
      }
    } else {
      result[0] += 0.014586695849895477;
    }
  }
  if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1015.49999924999986) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)862.5000000000001137) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)843.0000000000001137) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)140.000000085000039) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)355.3000000000000114) ) ) {
            result[0] += -0.0008649678544462411;
          } else {
            result[0] += -0.003236463916418143;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)25.99999983500000411) ) ) {
            result[0] += 0.011444467220455409;
          } else {
            result[0] += -0.0006093229727983791;
          }
        }
      } else {
        result[0] += -0.006007215942221659;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)866.5000000000001137) ) ) {
        result[0] += 0.008917956173419953;
      } else {
        if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)70.55000000000001137) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)21.92500000000000426) ) ) {
            result[0] += -0.005707381740963507;
          } else {
            result[0] += 0.0018440539254383607;
          }
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)900.8500000000000227) ) ) {
            result[0] += 0.0011208081668769212;
          } else {
            result[0] += -0.0030917408322103514;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)74.85000000000000853) ) ) {
        result[0] += -0.0015492276649598442;
      } else {
        if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-33.50000070499999794) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)74.44999997000000747) ) ) {
            result[0] += 0.004721053034691996;
          } else {
            result[0] += -0.003624107141209685;
          }
        } else {
          result[0] += 0.012405833793537957;
        }
      }
    } else {
      result[0] += 0.013857361048460007;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17.10000000000000497) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)258.5000000000000568) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.650000000000001243) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)318.1000000000000796) ) ) {
          result[0] += -0.00019430738687515258;
        } else {
          result[0] += -0.0060506397734085724;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)94.35000000000000853) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.950000000000001066) ) ) {
            result[0] += -0.0006309571304832974;
          } else {
            result[0] += -0.0035891521212823214;
          }
        } else {
          result[0] += 0.007004429142301281;
        }
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.499999983000001258) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)78.35000000000000853) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.850000000000000533) ) ) {
            result[0] += 0.0048936385390026356;
          } else {
            result[0] += -0.0011992537585966705;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.650000000000001243) ) ) {
            result[0] += -0.006746588008704988;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.35000000000000853) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.500000017000001407) ) ) {
            result[0] += 0.0017879303890679565;
          } else {
            result[0] += -0.003823400262313394;
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)960.4999944000002188) ) ) {
            result[0] += 0.003816694145569125;
          } else {
            result[0] += 0.018926671955734494;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)3.449999983000000103) ) ) {
      result[0] += 0.0009849876312252419;
    } else {
      result[0] += 0.015044256327673795;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17.10000000000000497) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)258.5000000000000568) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.650000000000001243) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)318.1000000000000796) ) ) {
          result[0] += -0.0001845920346677303;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.6500000000000199) ) ) {
            result[0] += -0.003135024093091487;
          } else {
            result[0] += -0.007257453437362398;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)94.35000000000000853) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.950000000000001066) ) ) {
            result[0] += -0.0005994092835159147;
          } else {
            result[0] += -0.0034096945384032764;
          }
        } else {
          result[0] += 0.0066542080976068965;
        }
      }
    } else {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.8592196348980983833) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)2908.900000000000546) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11.75000000000000178) ) ) {
            result[0] += 0.0012375088619666487;
          } else {
            result[0] += 0.011161256867150466;
          }
        } else {
          result[0] += 0.016764215589924292;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.750000000000000888) ) ) {
          result[0] += -0.007589015212769692;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.649999997000001883) ) ) {
            result[0] += -0.005339160569012165;
          } else {
            result[0] += 0.0015330035046726052;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)3.449999983000000103) ) ) {
      result[0] += 0.0009357382457416788;
    } else {
      result[0] += 0.014292042939923706;
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)23.42500000000000426) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)21.64166666666666927) ) ) {
        result[0] += -0.0007414825194902615;
      } else {
        result[0] += -0.003154758664313704;
      }
    } else {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-7.000000267999999082) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)8.72095249950000273) ) ) {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.6984379736863007837) ) ) {
            result[0] += 0.0013919585961848497;
          } else {
            result[0] += -0.003743608162924647;
          }
        } else {
          result[0] += -0.0063096259040563984;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.449999997000000818) ) ) {
          result[0] += 0.016301401008207067;
        } else {
          result[0] += -0.0009045087771588251;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)31.85000000000000497) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.600000005000001835) ) ) {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)6.150000017000000874) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.338054199000000999) ) ) {
            result[0] += 8.834458853083617e-06;
          } else {
            result[0] += 0.009751389116669696;
          }
        } else {
          result[0] += 0.017182276815605853;
        }
      } else {
        result[0] += -0.0011518047936260702;
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.100000017000000163) ) ) {
        result[0] += -0.0030804297110026187;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)36.65000000000001279) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
            result[0] += 0.005810564586685763;
          } else {
            result[0] += -0.0023859692708919607;
          }
        } else {
          result[0] += 0.010520506017492152;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1285.499999000000116) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)38.00000070500001215) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)122.0000001500000195) ) ) {
            result[0] += 0.0026994672961056397;
          } else {
            result[0] += -0.0015618742997075914;
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)53.49999990000001304) ) ) {
            result[0] += -0.006735093702477488;
          } else {
            result[0] += -0.0015441669559890228;
          }
        }
      } else {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)202.3000000000000398) ) ) {
          result[0] += 0.009030892648375952;
        } else {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)348.6000000000000796) ) ) {
            result[0] += 0.0011171978817420822;
          } else {
            result[0] += -0.002096332222731276;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)460.9999975525000764) ) ) {
        result[0] += 0.015723063454963267;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)83.55000000000001137) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)21.95833333333333925) ) ) {
            result[0] += -0.0022629347038989676;
          } else {
            result[0] += 0.0021417777547513223;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.85000000000000497) ) ) {
            result[0] += 0.0006036775409685154;
          } else {
            result[0] += -0.007919726599440244;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)76.45000000000001705) ) ) {
      result[0] += 0;
    } else {
      result[0] += 0.014475913408746505;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)1285.499999000000116) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)258.5000000000000568) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)8.41583600200000248) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)71.05000000000001137) ) ) {
          result[0] += -0.002107755798931485;
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)4.012692837000000345) ) ) {
            result[0] += 0.005832653161711418;
          } else {
            result[0] += -0.00017713576211185605;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.05000000000001137) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)2.500000000000000444) ) ) {
            result[0] += -0.007506728507190322;
          } else {
            result[0] += -0.0021399605628670167;
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.2265852158570549335) ) ) {
            result[0] += -0.0015351562820641058;
          } else {
            result[0] += 0.0049285511977293275;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-99.00000001499998348) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)615.5000000000001137) ) ) {
          result[0] += 4.860204164728973e-05;
        } else {
          result[0] += -0.007294173884120854;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.85000000000000497) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
            result[0] += 0.0026590285081604203;
          } else {
            result[0] += -0.0026380749751302984;
          }
        } else {
          result[0] += 0.00888316600686974;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)6.150000017000000874) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)5.374146695000001195) ) ) {
        result[0] += -0.001862191640372787;
      } else {
        result[0] += 0.008245048521086573;
      }
    } else {
      result[0] += 0.01782724964246154;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17.44999997500000433) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)258.5000000000000568) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)6.750000000000000888) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)20.27500000000000213) ) ) {
            result[0] += -0.0025484769249504266;
          } else {
            result[0] += -0.006325563633082701;
          }
        } else {
          result[0] += 0.004057116869837046;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.60000000000000853) ) ) {
          result[0] += 0.0056971319238297066;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)449.5000000000000568) ) ) {
            result[0] += 0.002988920471129509;
          } else {
            result[0] += -0.0007677366140738539;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.8592196348980983833) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)2908.900000000000546) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11.75000000000000178) ) ) {
            result[0] += 0.0009681913388525917;
          } else {
            result[0] += 0.010089223248263201;
          }
        } else {
          result[0] += 0.015310329053212297;
        }
      } else {
        if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (double)2.500000000000000444) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.450000000000001066) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.008139220600714907;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)60.55000001500000195) ) ) {
            result[0] += 0.0031770760707557203;
          } else {
            result[0] += -0.004745470410445706;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)24.35000000000000497) ) ) {
      result[0] += 0.01569527270086109;
    } else {
      result[0] += 0.0025649852984968354;
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)258.5000000000000568) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)8.206379002000000256) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)94.35000000000000853) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.450000000000001066) ) ) {
            result[0] += -0.00018814686845291563;
          } else {
            result[0] += -0.003221622916852061;
          }
        } else {
          result[0] += 0.004960123455295196;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.05000000000001137) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)856.5000000000001137) ) ) {
            result[0] += -0.0022181683809385107;
          } else {
            result[0] += -0.00629057607864961;
          }
        } else {
          if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.2265852158570549335) ) ) {
            result[0] += -0.0015096481985135658;
          } else {
            result[0] += 0.004210185953057729;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)5.499999983000001258) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)544.0000000000001137) ) ) {
          result[0] += 0.0076162139773368834;
        } else {
          if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-40.99999952999998953) ) ) {
            result[0] += -0.002391206927195651;
          } else {
            result[0] += 0.002677599253753821;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)36.25000000000000711) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.85000000000000497) ) ) {
            result[0] += 0.005829242748176595;
          } else {
            result[0] += -0.00029773605098439894;
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += -0.0011428245510905978;
          } else {
            result[0] += 0.016113792365150797;
          }
        }
      }
    }
  } else {
    result[0] += 0.009869395685692629;
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)258.5000000000000568) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.650000000000001243) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)318.1000000000000796) ) ) {
          result[0] += -0.00010551552101969718;
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)50.50000008500000348) ) ) {
            result[0] += -0.0030636432996162997;
          } else {
            result[0] += -0.007147530862553553;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)94.35000000000000853) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)71.05000000000001137) ) ) {
            result[0] += -0.0020421271539896066;
          } else {
            result[0] += -0.0002447104743470078;
          }
        } else {
          result[0] += 0.006245453149701158;
        }
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)75.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.050000000000000711) ) ) {
          result[0] += 0.0036179636418819426;
        } else {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)72.35000000000000853) ) ) {
            result[0] += -0.0005434238898063389;
          } else {
            result[0] += -0.010504886853423986;
          }
        }
      } else {
        if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.250000000000000888) ) ) {
            result[0] += 0.014735448218882077;
          } else {
            result[0] += 0.0029373524947599932;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.350000000000000533) ) ) {
            result[0] += -0.0028602275718003513;
          } else {
            result[0] += 0.0027709745759602815;
          }
        }
      }
    }
  } else {
    result[0] += 0.011889129176735878;
  }
  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)719.9999994500001321) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)38.00000070500001215) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)76.05000000000001137) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.25000000000000355) ) ) {
            result[0] += -0.0014750196495131682;
          } else {
            result[0] += 0.0024069570169838917;
          }
        } else {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)53.49999990000001304) ) ) {
            result[0] += -0.006313586257567461;
          } else {
            result[0] += -0.001340062060488104;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)449.5000000000000568) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.750000000000000444) ) ) {
            result[0] += 0.014193520367145532;
          } else {
            result[0] += -0.0015097784954123201;
          }
        } else {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.650000000000001243) ) ) {
            result[0] += 0.0018180861400750776;
          } else {
            result[0] += -0.0017469857676736156;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)460.9999975525000764) ) ) {
        result[0] += 0.015075283536309143;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)83.55000000000001137) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)74.85000000000000853) ) ) {
            result[0] += -0.0015178680313082654;
          } else {
            result[0] += 0.0022862438392134412;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.85000000000000497) ) ) {
            result[0] += 0.0006904327337581077;
          } else {
            result[0] += -0.007448643549855444;
          }
        }
      }
    }
  } else {
    result[0] += 0.01057550830145677;
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.05000000000000426) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.35000000000000853) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.750000000000000888) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)87.29999998000000971) ) ) {
            result[0] += -0.003078387470661916;
          } else {
            result[0] += -0.007743739712103787;
          }
        } else {
          result[0] += -0.0014693540758029984;
        }
      } else {
        if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)79.85000000000000853) ) ) {
          if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)81.45000000000001705) ) ) {
            result[0] += -0.0007330431534783965;
          } else {
            result[0] += -0.007465756058692933;
          }
        } else {
          if ( LIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += 0.0035642989887553576;
          } else {
            result[0] += -0.001830834136916357;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.25000000000000355) ) ) {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)21.95000000000000284) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.450000000000001066) ) ) {
            result[0] += 0.004709419180435361;
          } else {
            result[0] += -0.002582410623241837;
          }
        } else {
          result[0] += 0.019506255619227888;
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)83.45000000000001705) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)81.45000000000001705) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.005219499047931382;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)36.05000000000000426) ) ) {
            result[0] += -0.009115530753508207;
          } else {
            result[0] += -0.004348875004798174;
          }
        }
      }
    }
  } else {
    result[0] += 0.00914561705539624;
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (double)38.00000070500001215) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.4613142285287855082) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)4.950000000000001066) ) ) {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.2491388945700731827) ) ) {
            result[0] += 0.009108400485255635;
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4.200000003500000467) ) ) {
            result[0] += 0.0013977401391275634;
          } else {
            result[0] += -0.001254269845974719;
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)4.850000000000000533) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)149.4999998500000231) ) ) {
            result[0] += -0.005772021022101399;
          } else {
            result[0] += -0.001775478012554924;
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)7.037083782500000773) ) ) {
            result[0] += 0.0024719025087225335;
          } else {
            result[0] += -0.001497247994411737;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)460.9999975525000764) ) ) {
        result[0] += 0.01421697293687612;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)83.55000000000001137) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)74.85000000000000853) ) ) {
            result[0] += -0.0015888154848843164;
          } else {
            result[0] += 0.0021392234126148047;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)90.59999995500000125) ) ) {
            result[0] += -0.006938644787296652;
          } else {
            result[0] += 0.0016027308133540346;
          }
        }
      }
    }
  } else {
    result[0] += 0.011089781045913696;
  }
  if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)18064.79999977500484) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.05000000000000426) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)114.0000001500000195) ) ) {
          result[0] += -0.006794874660768791;
        } else {
          result[0] += -0.0019317568421485538;
        }
      } else {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)744.3000000000000682) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)12.50000025154988847) ) ) {
            result[0] += -0.0002944961823701038;
          } else {
            result[0] += -0.0030300087299979022;
          }
        } else {
          if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)813.5000000000001137) ) ) {
            result[0] += 0.009507257023995574;
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)22.25000000000000355) ) ) {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)74.85000000000000853) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7.80000001000000065) ) ) {
            result[0] += 0.003307650473927005;
          } else {
            result[0] += -0.003051109511591494;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)74.99999980000001187) ) ) {
            result[0] += 0.004103530606099714;
          } else {
            result[0] += 0.022163265874101362;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)83.45000000000001705) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)16267.05000624000422) ) ) {
            result[0] += 0.0008780812089533963;
          } else {
            result[0] += -0.004958608186302276;
          }
        } else {
          result[0] += -0.006381470478538956;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)4.220584152500001629) ) ) {
      result[0] += 0;
    } else {
      result[0] += 0.015685371773317455;
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1015.49999924999986) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)332.5000000000000568) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += -0.00037566308090384947;
          } else {
            result[0] += 0.003147157911883026;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)447.5000000000000568) ) ) {
            result[0] += -0.004769163334970935;
          } else {
            result[0] += 0.0006039442455109496;
          }
        }
      } else {
        result[0] += -0.006902714965865016;
      }
    } else {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-40.99999952999998953) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)71.89999992000001328) ) ) {
          if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-87.00000001499998348) ) ) {
            result[0] += 0.00024409237708373783;
          } else {
            result[0] += 0.0065508704717503865;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)34.45000000000000995) ) ) {
            result[0] += -0.010780484460294244;
          } else {
            result[0] += -0.0006199317125137895;
          }
        }
      } else {
        if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (double)23.15000000000000213) ) ) {
          result[0] += 0.011809246207509807;
        } else {
          result[0] += 0.0010428279621357269;
        }
      }
    }
  } else {
    result[0] += 0.010513682959601284;
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.10000000000000497) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)71.05000000000001137) ) ) {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-12.99999986499999771) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.250000000000000888) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)184.0000000000000284) ) ) {
            result[0] += -0.0012863714182201555;
          } else {
            result[0] += 0.0018403034690854837;
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)21.30833333333333357) ) ) {
            result[0] += -0.002691233462066434;
          } else {
            result[0] += 0;
          }
        }
      } else {
        result[0] += -0.004619970377534628;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)69.44999998500001936) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)4.967305816500000581) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)419.5000007500000834) ) ) {
            result[0] += 0.001046206999524701;
          } else {
            result[0] += -0.004352666376077611;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.45000000000000284) ) ) {
            result[0] += 0.00750039104062469;
          } else {
            result[0] += 0.00018664412458050758;
          }
        }
      } else {
        if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (double)23.15000000000000213) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)32.65000000000001279) ) ) {
            result[0] += -0.0005805603197501107;
          } else {
            result[0] += 0.002184706725451856;
          }
        } else {
          if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)751.000000100000193) ) ) {
            result[0] += -0.003658176818640814;
          } else {
            result[0] += 0.003929870878769593;
          }
        }
      }
    }
  } else {
    result[0] += 0.008355631864319245;
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.14999999500000527) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)74.45000000000001705) ) ) {
      if ( LIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (double)0.750000000000000111) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)4.012692837000000345) ) ) {
          if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)5.050000000000000711) ) ) {
            result[0] += 0.0036682623873154317;
          } else {
            result[0] += -0.0016042077939809217;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)975.5000000000001137) ) ) {
            result[0] += -0.002238087003323017;
          } else {
            result[0] += 0.0007887949904819069;
          }
        }
      } else {
        if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (double)5.250000000000000888) ) ) {
          result[0] += -0.0003290705445825177;
        } else {
          result[0] += 0.006939367210635772;
        }
      }
    } else {
      if ( LIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)544.4999993500001665) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.05000000000001137) ) ) {
          if ( UNLIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-41.00000038499999278) ) ) {
            result[0] += -0.0038623863810287986;
          } else {
            result[0] += -0.00016809264533307165;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (double)1015.49999924999986) ) ) {
            result[0] += 0.0004545042423148624;
          } else {
            result[0] += 0.007245115268230439;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.050000000000000711) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (double)77.85000000000000853) ) ) {
            result[0] += 0.003479110532117864;
          } else {
            result[0] += 0.01626598662104119;
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)25.73333333333333783) ) ) {
            result[0] += 0.0015797274374998495;
          } else {
            result[0] += -0.003452742187572377;
          }
        }
      }
    }
  } else {
    result[0] += 0.008171539491663377;
  }
  if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (double)18064.79999977500484) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)74.45000000000001705) ) ) {
      if ( LIKELY(  (data[14].missing != -1) && (data[14].fvalue <= (double)-20.00000009999999762) ) ) {
        if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)8.500000017000001407) ) ) {
          if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (double)46.99999996500000776) ) ) {
            result[0] += 0.001058924981691646;
          } else {
            result[0] += -0.0010370597034899335;
          }
        } else {
          result[0] += -0.0023602086563949427;
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)20.55833333333333357) ) ) {
          result[0] += -0.0011626984425479683;
        } else {
          result[0] += -0.0038312899086462415;
        }
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)77.35000000000000853) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)34.65000000000001279) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)30.50000000000000355) ) ) {
            result[0] += 0.0034686621096140396;
          } else {
            result[0] += -0.003481245853282435;
          }
        } else {
          if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (double)77.25000000000001421) ) ) {
            result[0] += -0.0012500385477518044;
          } else {
            result[0] += 0.009772587532022349;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)49.00000000000000711) ) ) {
            result[0] += -0.0014585677490083016;
          } else {
            result[0] += 0.005162882497534156;
          }
        } else {
          if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (double)0.305425863187618718) ) ) {
            result[0] += 0.0065644376251745885;
          } else {
            result[0] += -0.0009026805729106919;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)4.220584152500001629) ) ) {
      result[0] += -0.00010471456536007194;
    } else {
      result[0] += 0.014577520040795206;
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)763.5000000000001137) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (double)8.206379002000000256) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (double)71.05000000000001137) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)21.30833333333333357) ) ) {
          if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (double)20.85833333333333783) ) ) {
            result[0] += -0.0012532383143677836;
          } else {
            result[0] += -0.006017901619197801;
          }
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)0.800000027000000169) ) ) {
            result[0] += 0.00414560373686254;
          } else {
            result[0] += -0.0012957796953811215;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)39.85000000000000142) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (double)5.950000000000001066) ) ) {
            result[0] += 0.0004658228092719808;
          } else {
            result[0] += -0.0028840697246671817;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.600000001500001545) ) ) {
            result[0] += 0.0019114883021330055;
          } else {
            result[0] += 0.008770432634787126;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)13.19999996500000172) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)661.1000000000001364) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (double)520.4000000000000909) ) ) {
            result[0] += -0.0018430094122731438;
          } else {
            result[0] += 0.006579729782417417;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)4.150000000000001243) ) ) {
            result[0] += -0.008802351663984796;
          } else {
            result[0] += -0.001865584532916546;
          }
        }
      } else {
        result[0] += 0.003827703397138976;
      }
    }
  } else {
    result[0] += 0.009599318382563069;
  }
}

