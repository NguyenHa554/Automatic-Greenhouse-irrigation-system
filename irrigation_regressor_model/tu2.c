
#include "header.h"

void predict_unit2(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)70.05000000000001137) ) ) {
          result[0] += -0.003861570744542405;
        } else {
          result[0] += -0.0009234629910749939;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.003762614606045342;
        } else {
          result[0] += -0.00125299089922226;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.0015491522637633036;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0006770878583691749;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.011293719679427645;
          } else {
            result[0] += 0.0027638994871328278;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)147.9999997500000291) ) ) {
      result[0] += -0.0005593951226308428;
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.95000000000001705) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.007735661398619413;
          } else {
            result[0] += 0.013084474806192107;
          }
        } else {
          result[0] += 0.004912194099153914;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.011260870561624567;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.6500000000000199) ) ) {
            result[0] += 0.024558547464284024;
          } else {
            result[0] += 0.011775907188653949;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)63.50000000000000711) ) ) {
        result[0] += -0.0033994547431701466;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)751.000000100000193) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.85000000000000142) ) ) {
            result[0] += -0.0020864529387960157;
          } else {
            result[0] += -7.518142722707628e-05;
          }
        } else {
          result[0] += 0.00387760566547513;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)84.75000000000001421) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.75000000000001421) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)39.30000000000000426) ) ) {
            result[0] += -0.003282725331897381;
          } else {
            result[0] += -0.00011878585344866703;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.45000000000001705) ) ) {
            result[0] += 0.0031095523742879646;
          } else {
            result[0] += 0.009211857950163854;
          }
        }
      } else {
        result[0] += -0.0038409644948939484;
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)18289.49999178000508) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)613.0000004500001296) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.85000000000000853) ) ) {
            result[0] += 0.010432692695409057;
          } else {
            result[0] += 0.01792088899711962;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.6500000000000199) ) ) {
            result[0] += 0.007661556253830593;
          } else {
            result[0] += 0.011417770497500897;
          }
        }
      } else {
        result[0] += 0.004269559018059888;
      }
    } else {
      result[0] += 0.01766750927600596;
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)71.05000000000001137) ) ) {
          result[0] += -0.0030374662974306074;
        } else {
          result[0] += -0.0008048490520491444;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
          result[0] += -0.0033868978392032054;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)520.7500018045001298) ) ) {
            result[0] += 0.007216951757669449;
          } else {
            result[0] += -0.0027297105287344987;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.001530654024503821;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)52.49999980000000477) ) ) {
          result[0] += -0.0009646215744535712;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)33.05000000000000426) ) ) {
            result[0] += 0.0008097891026132164;
          } else {
            result[0] += 0.007512706628059159;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)147.9999997500000291) ) ) {
      result[0] += -0.0005364313220669484;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.010874410112829587;
        } else {
          result[0] += 0.019399789317565808;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.15000000000001279) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
            result[0] += 0.006363968306536516;
          } else {
            result[0] += 0.011494152097913782;
          }
        } else {
          result[0] += 0.015660606551915406;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)48.50000000000000711) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)79.45000000000001705) ) ) {
          result[0] += -0.0017321560367029934;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)87.4000000000000199) ) ) {
            result[0] += 0.0017132674073005415;
          } else {
            result[0] += -0.003251068700422965;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
          result[0] += -0.003302225364147619;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)520.7500018045001298) ) ) {
            result[0] += 0.0070365277249366046;
          } else {
            result[0] += -0.0019449785067263293;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.001459682454251581;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)52.49999980000000477) ) ) {
          result[0] += -0.0016500340281830482;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
            result[0] += 0.009842370002796608;
          } else {
            result[0] += 0.002476263837578396;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0;
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)18289.49999178000508) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)79.6500000000000199) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.007933093028037215;
          } else {
            result[0] += 0.013430466948343173;
          }
        } else {
          result[0] += 0.0030612912364304068;
        }
      } else {
        result[0] += 0.01687282621032662;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.05000000000001137) ) ) {
          result[0] += -0.005830675806654128;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.0016377469663199338;
          } else {
            result[0] += 0.0011707150523683856;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.65000000000000213) ) ) {
          result[0] += -0.003079755957614288;
        } else {
          result[0] += 0.002258357158588136;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.1500000000000199) ) ) {
          result[0] += -0.0007897132358724072;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.75000000000001421) ) ) {
            result[0] += -0.0009278449059562072;
          } else {
            result[0] += 0.0062839032756164676;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.0023193910371628592;
        } else {
          result[0] += 0.0015191733414625249;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)147.9999997500000291) ) ) {
      result[0] += -0.0005230206029553866;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.010264015832033598;
        } else {
          result[0] += 0.018621418408172975;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.15000000000001279) ) ) {
          result[0] += 0.007192233557731846;
        } else {
          result[0] += 0.015027017131447794;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)676.4999992500000872) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.00297964031798575;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.25000000000001421) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
            result[0] += -0.0014102781443358508;
          } else {
            result[0] += -0.0031745322177640016;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)39.99999983000000725) ) ) {
            result[0] += 0.0013134276484959716;
          } else {
            result[0] += -0.0015938197798957981;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        result[0] += 0.011294044947082348;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0013340522791258991;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)79.25000000000001421) ) ) {
            result[0] += 0.0071261244084613005;
          } else {
            result[0] += 0.0011358285049856123;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)18289.49999178000508) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)771.4999995500000978) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)544.4999993500001665) ) ) {
            result[0] += 0.008043390667880883;
          } else {
            result[0] += 0.016093522743321955;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)529.0000000000001137) ) ) {
            result[0] += 0.010680425780063323;
          } else {
            result[0] += 0.005821217007003725;
          }
        }
      } else {
        result[0] += 0.0041992179067297415;
      }
    } else {
      result[0] += 0.016135210214803616;
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        result[0] += -0.001070265304666102;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.0032742973183889665;
        } else {
          result[0] += -0.001022655991854706;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.0014911615131042747;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0007218771232735543;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.010341155639228723;
          } else {
            result[0] += 0.002205584788133796;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)147.9999997500000291) ) ) {
      result[0] += -0.0004934959961422559;
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.85000000000000853) ) ) {
            result[0] += 0.007019043461375593;
          } else {
            result[0] += 0.00038212278764694933;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)79.05000000000001137) ) ) {
            result[0] += 0.011986740448711708;
          } else {
            result[0] += 0.005017924404774721;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)76.45000000000001705) ) ) {
          result[0] += 0.009087699384099859;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)18064.79999977500484) ) ) {
            result[0] += 0.01046608952184518;
          } else {
            result[0] += 0.023338311448693277;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)184.0000000000000284) ) ) {
        result[0] += -0.0028323296132259116;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.1500000000000199) ) ) {
          result[0] += -0.001078989011510144;
        } else {
          result[0] += -0.006580846984447403;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
          result[0] += 0.0003663827589809684;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)235.0000007500000265) ) ) {
            result[0] += 0.008159065176422398;
          } else {
            result[0] += 0.0008478505593603072;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.0022246064824365274;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.25000000000001421) ) ) {
            result[0] += 0.008382332242559642;
          } else {
            result[0] += -0.0006719146927277888;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)73.95000000000001705) ) ) {
      result[0] += -0.001099633030327303;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.009439830991292471;
        } else {
          result[0] += 0.017543024473330556;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)642.5000000000001137) ) ) {
          result[0] += 0.005178229410190728;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.007662105058087037;
          } else {
            result[0] += 0.014611811401465766;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)676.4999992500000872) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.45000000000000284) ) ) {
        result[0] += -0.00278658760346837;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.45000000000001705) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)128.9999997500000291) ) ) {
            result[0] += -0.0016371342169509567;
          } else {
            result[0] += -0.0040980198434381575;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.003235406853879492;
          } else {
            result[0] += 0.0002982578688468575;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.55000000000001137) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)84.75000000000001421) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)74.85000000000000853) ) ) {
            result[0] += -0.0004459568822326569;
          } else {
            result[0] += 0.0036938563644400104;
          }
        } else {
          result[0] += -0.003710389946897825;
        }
      } else {
        result[0] += 0.011345663094385105;
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)18289.49999178000508) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)529.0000000000001137) ) ) {
          result[0] += 0.011649363677610053;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1231.000001000000339) ) ) {
            result[0] += 0.003705945859463619;
          } else {
            result[0] += 0.008069313102298314;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)615.5000000000001137) ) ) {
          result[0] += 0.007723321238532661;
        } else {
          result[0] += 0.01592182616260834;
        }
      }
    } else {
      result[0] += 0.015026163146313696;
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)184.0000000000000284) ) ) {
        result[0] += -0.0026970122253156398;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)632.5000000500000397) ) ) {
          result[0] += -0.0015911132782866382;
        } else {
          result[0] += 0.002868650783426487;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.1500000000000199) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.15000000000001279) ) ) {
            result[0] += -0.0030739577859640117;
          } else {
            result[0] += 0.003912956443615258;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.00031365796650237776;
          } else {
            result[0] += 0.006943106687672083;
          }
        }
      } else {
        result[0] += -0.0006551266202439714;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.008912334600463511;
        } else {
          result[0] += 0.01682768927777515;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2182.499996700000338) ) ) {
            result[0] += 0.0003207535358766715;
          } else {
            result[0] += 0.006710189512290527;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)79.05000000000001137) ) ) {
            result[0] += 0.013147188872098923;
          } else {
            result[0] += 0.003431805874305693;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)184.0000000000000284) ) ) {
        result[0] += -0.002629586904929186;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.1500000000000199) ) ) {
          result[0] += -0.001000457987470943;
        } else {
          result[0] += -0.0063437896433540366;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.1500000000000199) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.15000000000001279) ) ) {
            result[0] += -0.002997108801223692;
          } else {
            result[0] += 0.003815132630057633;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.00030581649103568817;
          } else {
            result[0] += 0.006769529023606863;
          }
        }
      } else {
        result[0] += -0.0006387484093159061;
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)73.95000000000001705) ) ) {
      result[0] += -0.0010851258074953444;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.008689526357737029;
        } else {
          result[0] += 0.01640699704615947;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)642.5000000000001137) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.85000000000000853) ) ) {
            result[0] += 0.0027656360231459337;
          } else {
            result[0] += 0.00761882584611023;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.85000000000000853) ) ) {
            result[0] += 0.006650118876502596;
          } else {
            result[0] += 0.015893355790546845;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)184.0000000000000284) ) ) {
        result[0] += -0.0025638472556221087;
      } else {
        result[0] += -0.0011617619149670488;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.1500000000000199) ) ) {
          result[0] += -0.0006989762304170479;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.0002981710890449132;
          } else {
            result[0] += 0.006600290905861628;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.0021370579768975814;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)309.5000000000000568) ) ) {
            result[0] += -5.6961334701026645e-05;
          } else {
            result[0] += 0.0064059973359107975;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.55000000000001137) ) ) {
      result[0] += -0.0008437770626253703;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
          result[0] += 0.015677022073221837;
        } else {
          result[0] += 0.008320563879678958;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1172.499999500000285) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
            result[0] += 0.007432028496217344;
          } else {
            result[0] += 0.002768812830385287;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.55000000000001137) ) ) {
            result[0] += 0.005460751921248931;
          } else {
            result[0] += 0.013151745360810312;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)48.50000000000000711) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)71.05000000000001137) ) ) {
          result[0] += -0.0026478684078291305;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)87.4000000000000199) ) ) {
            result[0] += -0.00011371198799519111;
          } else {
            result[0] += -0.002742879078837067;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)140.000000085000039) ) ) {
          result[0] += -0.0027010012335931008;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)520.7500018045001298) ) ) {
            result[0] += 0.0052979784980804355;
          } else {
            result[0] += -0.001529425630976287;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.35000000000000853) ) ) {
        result[0] += -0.002961639610119164;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.75000000000001421) ) ) {
          result[0] += -0.0011532796391061154;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.45000000000001705) ) ) {
            result[0] += 0.002415548153823305;
          } else {
            result[0] += 0.007708872873336077;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)18289.49999178000508) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)613.0000004500001296) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.85000000000000853) ) ) {
            result[0] += 0.008080009981291365;
          } else {
            result[0] += 0.014993970630690457;
          }
        } else {
          result[0] += 0.0066565663434580945;
        }
      } else {
        result[0] += 0.0027296799946237692;
      }
    } else {
      result[0] += 0.013757911217916344;
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.45000000000000284) ) ) {
        result[0] += -0.0024575517370880066;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)79.85000000000000853) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)184.0000000000000284) ) ) {
            result[0] += -0.0038853645938697503;
          } else {
            result[0] += -0.0012700510503298897;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.75000000000001421) ) ) {
            result[0] += -0.0012401547503165453;
          } else {
            result[0] += 0.0035603088262881077;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.0014415778372850684;
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0002794459908652831;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.010142367945052685;
          } else {
            result[0] += 0.0020941886878713513;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)73.95000000000001705) ) ) {
      result[0] += -0.0010224683205818847;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.35000000000000853) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1285.499999000000116) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.55000000000001137) ) ) {
            result[0] += 0.006300212389071628;
          } else {
            result[0] += 0.011166588492924349;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)76.45000000000001705) ) ) {
            result[0] += 0.0072161919294911284;
          } else {
            result[0] += 0.017203671822945278;
          }
        }
      } else {
        result[0] += 0.002542729107145634;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)48.50000000000000711) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)69.85000000000000853) ) ) {
          result[0] += -0.0034420738406479366;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)87.10000000000000853) ) ) {
            result[0] += -0.00020292310736779747;
          } else {
            result[0] += -0.0026262299825505517;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
          result[0] += -0.00258290489491455;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)520.7500018045001298) ) ) {
            result[0] += 0.006917563983239234;
          } else {
            result[0] += -0.0015866362947063188;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.0012761405326680026;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)52.49999980000000477) ) ) {
          result[0] += -0.0018059659372859948;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
            result[0] += 0.007360392857875144;
          } else {
            result[0] += 0.0024922623317979744;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0010218174386716868;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.6500000000000199) ) ) {
          result[0] += 0.006129976095773081;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.1500000000000199) ) ) {
            result[0] += 0.01611855476266808;
          } else {
            result[0] += 0.008894217300428343;
          }
        }
      } else {
        result[0] += 0.004663038857157946;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)184.0000000000000284) ) ) {
          result[0] += -0.002322414361270993;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)70.05000000000001137) ) ) {
            result[0] += -0.004371754658364114;
          } else {
            result[0] += -0.000926112459112557;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)82.75000000000001421) ) ) {
          result[0] += -0.0009596105779948024;
        } else {
          result[0] += 0.0018355044401029037;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.001244237007065253;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.85000000000000142) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.95000000000001705) ) ) {
            result[0] += 0.003981633730197572;
          } else {
            result[0] += 0.011685473270714284;
          }
        } else {
          result[0] += -0.0012549455533735455;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.55000000000001137) ) ) {
      result[0] += -0.0004497520078148227;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.6500000000000199) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.85000000000000853) ) ) {
            result[0] += 0.002765084705950522;
          } else {
            result[0] += 0.008322619633108845;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.1500000000000199) ) ) {
            result[0] += 0.015715591047580045;
          } else {
            result[0] += 0.008671861877731448;
          }
        }
      } else {
        result[0] += 0.003997876910563921;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)48.50000000000000711) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)79.45000000000001705) ) ) {
          result[0] += -0.0013150739755935018;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)88.55000000000001137) ) ) {
            result[0] += -0.000978476371926566;
          } else {
            result[0] += 0.003934055830380231;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
          result[0] += -0.0024672207074417246;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)520.7500018045001298) ) ) {
            result[0] += 0.0067437360240146516;
          } else {
            result[0] += -0.0015345538075183494;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.0012131310773336075;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.85000000000000142) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.95000000000001705) ) ) {
            result[0] += 0.003882092848696904;
          } else {
            result[0] += 0.011393336340785029;
          }
        } else {
          result[0] += -0.0012235718351439574;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0009956177584328023;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.35000000000000853) ) ) {
          result[0] += 0.004605648153875437;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)18289.49999178000508) ) ) {
            result[0] += 0.009233760138651213;
          } else {
            result[0] += 0.015631714285647667;
          }
        }
      } else {
        result[0] += 0.004446515998775688;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      result[0] += -0.0016427559877069465;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.1500000000000199) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.15000000000001279) ) ) {
            result[0] += -0.0027797395159446054;
          } else {
            result[0] += 0.003791475593112409;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.00033087618545819586;
          } else {
            result[0] += 0.005834343328218287;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.001962948591761484;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.25000000000001421) ) ) {
            result[0] += 0.00790071893739514;
          } else {
            result[0] += -0.0006138716828859141;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)73.95000000000001705) ) ) {
      result[0] += -0.0009698131760316237;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.007162812643341328;
        } else {
          result[0] += 0.014540527282447062;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)642.5000000000001137) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.85000000000000853) ) ) {
            result[0] += 0.0020057124917646153;
          } else {
            result[0] += 0.006638558995047655;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.85000000000000853) ) ) {
            result[0] += 0.005291520729660989;
          } else {
            result[0] += 0.014017761794172906;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.75000000000000355) ) ) {
        result[0] += -0.0016995022772879624;
      } else {
        result[0] += 0.0024181363880634308;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.00035152403729734943;
          } else {
            result[0] += 0.006839228049955435;
          }
        } else {
          result[0] += -0.0015837195641943255;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.001913874936009083;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.25000000000001421) ) ) {
            result[0] += 0.007703200980555267;
          } else {
            result[0] += -0.0005985249018657111;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += -0.000109826447159955;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.006983742168859432;
        } else {
          result[0] += 0.014177014179637328;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
            result[0] += 0.0023886685703119665;
          } else {
            result[0] += 0.007545594414075216;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)79.05000000000001137) ) ) {
            result[0] += 0.011344195011382303;
          } else {
            result[0] += 0.0022557188832963058;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.45000000000000284) ) ) {
        result[0] += -0.0021388368066107217;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += -0.0015642874313990405;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.0028478658302790593;
          } else {
            result[0] += 0.0004919740239404674;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)307.5000000000000568) ) ) {
          result[0] += -0.0029880655173642134;
        } else {
          result[0] += 0.00028496698508488725;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.95000000000001705) ) ) {
          result[0] += -0.002198550059925765;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.95000000000001705) ) ) {
            result[0] += 0.003283362399374325;
          } else {
            result[0] += 0.010908569380640984;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.55000000000001137) ) ) {
      result[0] += -0.00041858304361812776;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.6500000000000199) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.85000000000000853) ) ) {
            result[0] += 0.002236480396240949;
          } else {
            result[0] += 0.007589016871643254;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.1500000000000199) ) ) {
            result[0] += 0.014629781744960282;
          } else {
            result[0] += 0.007775628235191107;
          }
        }
      } else {
        result[0] += 0.0035757819905928856;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.75000000000000355) ) ) {
        result[0] += -0.0016220665189934508;
      } else {
        result[0] += 0.002324731097867091;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
          result[0] += 0.0004713692125657855;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)235.0000007500000265) ) ) {
            result[0] += 0.006473338466292869;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.0018446841536507268;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.25000000000001421) ) ) {
            result[0] += 0.007481347023509443;
          } else {
            result[0] += -0.0005669715788756167;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)73.35000000000000853) ) ) {
      result[0] += -0.001759630224722273;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.006656709491814439;
        } else {
          result[0] += 0.013615854648215806;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1172.499999500000285) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
            result[0] += 0.005999602448993496;
          } else {
            result[0] += 0.0016854047650704162;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.55000000000001137) ) ) {
            result[0] += 0.0036521405943979804;
          } else {
            result[0] += 0.011096422441787582;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        result[0] += -0.000600010286242678;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
          result[0] += -0.0022410758115455837;
        } else {
          result[0] += 5.3974888766841856e-05;
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.95000000000001705) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)152.00000110000002) ) ) {
          result[0] += -0.005132842470581333;
        } else {
          result[0] += 0.00043266724236994326;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.25000000000001421) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.65000000000001279) ) ) {
            result[0] += 0.0041229092599824055;
          } else {
            result[0] += -0.002539835966263826;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.95000000000001705) ) ) {
            result[0] += 0.012499883510172366;
          } else {
            result[0] += 0.003728133625102744;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0009703537508557064;
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)18289.49999178000508) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.35000000000000497) ) ) {
            result[0] += 0.00762600668558949;
          } else {
            result[0] += 0.002899260306498036;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.1500000000000199) ) ) {
            result[0] += 0.011002547954533088;
          } else {
            result[0] += 0.004253841675197085;
          }
        }
      } else {
        result[0] += 0.01147629478118486;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.05000000000001137) ) ) {
          result[0] += -0.004820596046353641;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.0010590882566545836;
          } else {
            result[0] += 0.0015923608891252015;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.65000000000000213) ) ) {
          result[0] += -0.0021312157593588884;
        } else {
          result[0] += 0.002016857367228059;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)176.4999999500000456) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.0003638216030551121;
          } else {
            result[0] += 0.00772964155453996;
          }
        } else {
          result[0] += -0.0010300302896131244;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.0017841349866598495;
        } else {
          result[0] += 0.0013035173173539523;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)147.9999997500000291) ) ) {
      result[0] += -0.0005899620993897833;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)682.5000000000001137) ) ) {
          result[0] += 0.005977036405641297;
        } else {
          result[0] += 0.0157506864303088;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.15000000000001279) ) ) {
          result[0] += 0.004776493844636265;
        } else {
          result[0] += 0.01140388222783804;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)69.85000000000000853) ) ) {
          result[0] += -0.0030506847051105335;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)87.10000000000000853) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.0022905939812885552;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
          result[0] += -0.0021334538498090946;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)53.00000080500000621) ) ) {
            result[0] += 0.005476991920308634;
          } else {
            result[0] += -0.0013829939778079278;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.0012290303843434562;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)52.49999980000000477) ) ) {
          result[0] += -0.0018257568194530904;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
            result[0] += 0.006372296310919671;
          } else {
            result[0] += 0.0018201732292072847;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0009324812669573087;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)763.5000000000001137) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.35000000000000853) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)771.4999995500000978) ) ) {
            result[0] += 0.009884433985933208;
          } else {
            result[0] += 0.0038200545210191716;
          }
        } else {
          result[0] += 0.0036809204235164965;
        }
      } else {
        result[0] += 0.012810901602730157;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.05000000000001137) ) ) {
          result[0] += -0.004642816272221114;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.001026111022140619;
          } else {
            result[0] += 0.0015607326179151498;
          }
        }
      } else {
        result[0] += -0.0018560473253585183;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)176.4999999500000456) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)54.49999996500000776) ) ) {
            result[0] += 0.00045206031517106265;
          } else {
            result[0] += 0.006865765638968667;
          }
        } else {
          result[0] += -0.001036664437054208;
        }
      } else {
        result[0] += -0.0004583951852735922;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += -0.00017805499222242472;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += 0.005084397247276053;
        } else {
          result[0] += 0.015870873023840517;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1872.000003700000207) ) ) {
            result[0] += -0.0005902496716007591;
          } else {
            result[0] += 0.004860504191731;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.65000000000001279) ) ) {
            result[0] += 0.0017832914243141812;
          } else {
            result[0] += 0.01047908486555452;
          }
        }
      }
    }
  }
}

