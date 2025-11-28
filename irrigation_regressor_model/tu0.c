
#include "header.h"

void predict_unit0(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += 0.4787069517571568;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += 0.48353391069545865;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += 0.48486476731001676;
          } else {
            result[0] += 0.4916744263967931;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.1500000000000199) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)89.49999996500001487) ) ) {
            result[0] += 0.4862874072620799;
          } else {
            result[0] += 0.4931744262231014;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.5110405650692796;
          } else {
            result[0] += 0.4994996583570153;
          }
        }
      } else {
        result[0] += 0.48537928745958536;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.35000000000000853) ) ) {
          result[0] += 0.5170181756778702;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.35000000000000853) ) ) {
            result[0] += 0.5299412531179029;
          } else {
            result[0] += 0.5222287028822395;
          }
        }
      } else {
        result[0] += 0.5069467486370038;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)718.5000000000001137) ) ) {
        result[0] += 0.538018176406608;
      } else {
        result[0] += 0.5521848424985156;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.01127889836599835;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += -0.006590127001824753;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)17.99999990000000238) ) ) {
            result[0] += 0.0006065845152984062;
          } else {
            result[0] += -0.005719118012598704;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.1500000000000199) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)88.49999956500001019) ) ) {
            result[0] += -0.004640987791559276;
          } else {
            result[0] += 0.0026848165668985425;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.019401547472307486;
          } else {
            result[0] += 0.009015023890405231;
          }
        }
      } else {
        result[0] += -0.004429098129191477;
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += 0.024042237516492607;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.35000000000000853) ) ) {
            result[0] += 0.03949769162705966;
          } else {
            result[0] += 0.03126561142896351;
          }
        }
      } else {
        result[0] += 0.017607879281044007;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
        result[0] += 0.04783096548583771;
      } else {
        result[0] += 0.060183226863543195;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.01099692592790135;
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)76.95000000000001705) ) ) {
          result[0] += -0.006476205642093728;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += -0.005156403304708581;
          } else {
            result[0] += 0.0006808068289609856;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.1500000000000199) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)89.49999996500001487) ) ) {
            result[0] += -0.0037719294314201048;
          } else {
            result[0] += 0.002759768874384463;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.6500000000000199) ) ) {
            result[0] += 0.01993125509313093;
          } else {
            result[0] += 0.008963983714514012;
          }
        }
      } else {
        result[0] += -0.004662643522541556;
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += 0.023441181764006617;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.35000000000000853) ) ) {
            result[0] += 0.038510248831340244;
          } else {
            result[0] += 0.03048397117539456;
          }
        }
      } else {
        result[0] += 0.01716768248875936;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
        result[0] += 0.0466351925002204;
      } else {
        result[0] += 0.0586786454419295;
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
      result[0] += -0.010722002509449212;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.25000000000001421) ) ) {
        result[0] += -0.006087939517990668;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)452.4999995000000581) ) ) {
            result[0] += -0.00598649115988519;
          } else {
            result[0] += 0.0033374673118814827;
          }
        } else {
          result[0] += 0.0019114044221129882;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)691.5000076000001172) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.85000000000000142) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)83.55000000000001137) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.95000000000001705) ) ) {
            result[0] += 0.01618000934297581;
          } else {
            result[0] += 0.029949104866633814;
          }
        } else {
          result[0] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)78.05000000000001137) ) ) {
          result[0] += -0.0008402494635838258;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)309.5000000000000568) ) ) {
            result[0] += 0.0007604627426275436;
          } else {
            result[0] += 0.009422935813310601;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)78.95000000000001705) ) ) {
          result[0] += 0.03473809882635023;
        } else {
          result[0] += 0.022106583003814406;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
          result[0] += 0.045469312237368685;
        } else {
          result[0] += 0.0572116797665755;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.010874888702058326;
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)76.25000000000001421) ) ) {
          result[0] += -0.006175150860523633;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.75000000000001421) ) ) {
            result[0] += -0.005923556805164345;
          } else {
            result[0] += -0.0006810143573598548;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.95000000000001705) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)88.49999956500001019) ) ) {
            result[0] += -0.004621573248878122;
          } else {
            result[0] += 0.0016840840567601844;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.0177268223121303;
          } else {
            result[0] += 0.008400035615047534;
          }
        }
      } else {
        result[0] += -0.0042526158631738765;
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.03868009815613429;
        } else {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)14475.50000620000174) ) ) {
            result[0] += 0.02427065370293955;
          } else {
            result[0] += 0.03506713811556498;
          }
        }
      } else {
        result[0] += 0.01622016235192617;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.043472215570509426;
      } else {
        result[0] += 0.055129117454801285;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.010603016281975252;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += -0.006119179058290052;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.75000000000001421) ) ) {
            result[0] += -0.005845451042952394;
          } else {
            result[0] += -0.0009174422886195209;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.1500000000000199) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)88.49999956500001019) ) ) {
            result[0] += -0.004405357263544026;
          } else {
            result[0] += 0.002412662579667727;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.45000000000001705) ) ) {
            result[0] += 0.010295931671381646;
          } else {
            result[0] += 0.02067747024525153;
          }
        }
      } else {
        result[0] += -0.004146300519047224;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.05000000000001137) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.03712187290191651;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1172.499999500000285) ) ) {
            result[0] += 0.024264913368327864;
          } else {
            result[0] += 0.0370378609597683;
          }
        }
      } else {
        result[0] += 0.013856206765541666;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)718.5000000000001137) ) ) {
        result[0] += 0.04213889882678078;
      } else {
        result[0] += 0.05477869316935539;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.009965399830211146;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += -0.006011943232844628;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.95000000000001705) ) ) {
            result[0] += -0.004332135699022239;
          } else {
            result[0] += 0.0032023956107219594;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.95000000000001705) ) ) {
        result[0] += -0.002971746789374969;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.55000000000001137) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1311.000000000000227) ) ) {
            result[0] += -0.00014507470269725748;
          } else {
            result[0] += 0.015947966621412586;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.85000000000000142) ) ) {
            result[0] += 0.018409392430095754;
          } else {
            result[0] += 0.008669248959049584;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)79.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.036597799031358014;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)691.5000076000001172) ) ) {
            result[0] += 0.019072005579417406;
          } else {
            result[0] += 0.0289205628969977;
          }
        }
      } else {
        result[0] += 0.013117429261857813;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
        result[0] += 0.04209332552221085;
      } else {
        result[0] += 0.05318145086367925;
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
      result[0] += -0.010092293902482912;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)221.5000000000000284) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.45000000000001705) ) ) {
          result[0] += -0.005821007301321714;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)88.55000000000001137) ) ) {
            result[0] += -0.004749106269443055;
          } else {
            result[0] += 0.0009297286046668886;
          }
        }
      } else {
        result[0] += 0.001866542746346178;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)691.5000076000001172) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.85000000000000142) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)81.95000000000001705) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)74.85000000000000853) ) ) {
            result[0] += 0.004211222283980426;
          } else {
            result[0] += 0.01874138054372195;
          }
        } else {
          result[0] += -0.0005629565976560116;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)78.05000000000001137) ) ) {
          result[0] += -0.0009873541521287902;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
            result[0] += 0.008622422008602708;
          } else {
            result[0] += -0.0036657945117489856;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)78.95000000000001705) ) ) {
          result[0] += 0.03154563912531225;
        } else {
          result[0] += 0.01998893634631084;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.04010220024734734;
        } else {
          result[0] += 0.05138040231806891;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.009492438306824502;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.25000000000001421) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)69.85000000000000853) ) ) {
            result[0] += -0.008454955490039929;
          } else {
            result[0] += -0.0050918678241578166;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += -0.004390975214244629;
          } else {
            result[0] += 0.0015794906637014508;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)632.5000000500000397) ) ) {
            result[0] += -0.0013906645197421313;
          } else {
            result[0] += 0.009727875664830209;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.6500000000000199) ) ) {
            result[0] += 0.020022286204255973;
          } else {
            result[0] += 0.008104837099617382;
          }
        }
      } else {
        result[0] += -0.004365125067739023;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.35000000000000853) ) ) {
          result[0] += 0.02134914128482342;
        } else {
          result[0] += 0.03006361355053054;
        }
      } else {
        result[0] += 0.013240266261356218;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)718.5000000000001137) ) ) {
        result[0] += 0.03904784104653767;
      } else {
        result[0] += 0.0509357609351476;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)234.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.009255127606883354;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.25000000000001421) ) ) {
          result[0] += -0.005367544803678785;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += -0.0042650311975472276;
          } else {
            result[0] += 0.0014518201867682176;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.15000000000000213) ) ) {
            result[0] += 0.00927989102222703;
          } else {
            result[0] += -0.0003021284679275458;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.6500000000000199) ) ) {
            result[0] += 0.01952172912657261;
          } else {
            result[0] += 0.007661298424344171;
          }
        }
      } else {
        result[0] += -0.004255996874223153;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.05000000000001137) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.03427639925479889;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)691.5000076000001172) ) ) {
            result[0] += 0.017547170939770613;
          } else {
            result[0] += 0.026630460185309252;
          }
        }
      } else {
        result[0] += 0.012345841286274105;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
        result[0] += 0.03706854915177381;
      } else {
        result[0] += 0.04943625931938489;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.009019538493202793;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.005416828363097422;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)39.99999983000000725) ) ) {
            result[0] += 0.0006762550750237453;
          } else {
            result[0] += -0.0051605468621898085;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)73.6500000000000199) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)88.49999956500001019) ) ) {
          result[0] += -0.005060219088512841;
        } else {
          result[0] += 0.0009934535284437948;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.014771503388551594;
          } else {
            result[0] += 0.00669625271017016;
          }
        } else {
          result[0] += -0.004483199839649553;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.03356711097889476;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1172.499999500000285) ) ) {
            result[0] += 0.02107979856155537;
          } else {
            result[0] += 0.03170281007885933;
          }
        }
      } else {
        result[0] += 0.013719847391049068;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.03705120258033275;
      } else {
        result[0] += 0.047924469666821616;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.008798646729278733;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.25000000000001421) ) ) {
          result[0] += -0.0051118000469384944;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += -0.004104194431777367;
          } else {
            result[0] += 0.0014901154650701816;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.35000000000000853) ) ) {
          result[0] += 0;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.6500000000000199) ) ) {
            result[0] += 0.0009663413969489437;
          } else {
            result[0] += 0.015274087171340864;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)480.5000000000000568) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
            result[0] += -0.0022544087228718503;
          } else {
            result[0] += 0.005108013377973328;
          }
        } else {
          result[0] += 0.013185020141642204;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.85000000000000497) ) ) {
        result[0] += 0.03255294988029882;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2182.499996700000338) ) ) {
          result[0] += 0.011776570547372104;
        } else {
          result[0] += 0.024626296955991434;
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
        result[0] += 0.037043429364760704;
      } else {
        result[0] += 0.04711550454298655;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)257.9999973700000169) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.008574083920555515;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
          result[0] += -0.00518775905334642;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)39.99999983000000725) ) ) {
            result[0] += 0.0005445879676760769;
          } else {
            result[0] += -0.005041963706709563;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.95000000000001705) ) ) {
        result[0] += -0.0026824096352178256;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.75000000000001421) ) ) {
            result[0] += 0.013828992296360941;
          } else {
            result[0] += 0.006510124436483302;
          }
        } else {
          result[0] += -0.004383539157693811;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.05000000000001137) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.03176648720105489;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)691.5000076000001172) ) ) {
            result[0] += 0.016111859259280294;
          } else {
            result[0] += 0.024730685688555243;
          }
        }
      } else {
        result[0] += 0.011300940828827712;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)704.4999997500000291) ) ) {
          result[0] += 0.03848066254456837;
        } else {
          result[0] += 0.0290731122593085;
        }
      } else {
        result[0] += 0.04593761593103409;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.008728224127242964;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.45000000000001705) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)69.85000000000000853) ) ) {
            result[0] += -0.0077707463032048625;
          } else {
            result[0] += -0.00450948320891117;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.55000000000001137) ) ) {
            result[0] += -0.0045116877747395775;
          } else {
            result[0] += -0.00022973055736458096;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)74.6500000000000199) ) ) {
        result[0] += -0.0010356668655294925;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.75000000000001421) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
            result[0] += 0.025418497553238502;
          } else {
            result[0] += 0.014040999031838095;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
            result[0] += -0.0008901236914098262;
          } else {
            result[0] += 0.009994979347501484;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)508.5000000000000568) ) ) {
          result[0] += 0.029638285964727402;
        } else {
          result[0] += 0.024285470619797706;
        }
      } else {
        result[0] += 0.013555215014652774;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.03416545692831277;
      } else {
        result[0] += 0.044710893439395084;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.008510018265130474;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          result[0] += -0.007325818941229955;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)76.25000000000001421) ) ) {
            result[0] += -0.004770340902003937;
          } else {
            result[0] += -0.002075011568451102;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.1500000000000199) ) ) {
          result[0] += -0.0008992164351922624;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.45000000000001705) ) ) {
            result[0] += 0.008117028542328627;
          } else {
            result[0] += 0.01735032460211139;
          }
        }
      } else {
        result[0] += -0.003668800506173917;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.05000000000001137) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
          result[0] += 0.030594493065561564;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)691.5000076000001172) ) ) {
            result[0] += 0.01517947707663883;
          } else {
            result[0] += 0.02357724198102951;
          }
        }
      } else {
        result[0] += 0.010769722112096274;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)704.4999997500000291) ) ) {
          result[0] += 0.03672815803686776;
        } else {
          result[0] += 0.02751838917533557;
        }
      } else {
        result[0] += 0.043781251758337025;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1791.000005700000429) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.008297267683799946;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          result[0] += -0.0071426735903369265;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.45000000000001705) ) ) {
            result[0] += -0.0047330718841285336;
          } else {
            result[0] += -0.0020581358669012916;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.70000000000000284) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)632.5000000500000397) ) ) {
            result[0] += -0.001916378268572901;
          } else {
            result[0] += 0.008183028757214614;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.6500000000000199) ) ) {
            result[0] += 0.016214277848262678;
          } else {
            result[0] += 0.00665572524132828;
          }
        }
      } else {
        result[0] += -0.0035770804414768584;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.85000000000000497) ) ) {
          result[0] += 0.029099601629902334;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1172.499999500000285) ) ) {
            result[0] += 0.018498685737805706;
          } else {
            result[0] += 0.029553133904933932;
          }
        }
      } else {
        result[0] += 0.01096920952733074;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)718.5000000000001137) ) ) {
        result[0] += 0.03275413927577791;
      } else {
        result[0] += 0.04298980762561162;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.007793710087901172;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.004553741346540282;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
            result[0] += -0.003913850132563291;
          } else {
            result[0] += 0.0014968949881406478;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.002799200563026326;
        } else {
          result[0] += 0.006043776828759851;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.35000000000000853) ) ) {
          result[0] += -0.0005903358933957;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.021015735744010833;
          } else {
            result[0] += 0.010336708566855366;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0014119410660603771;
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.021939014106161066;
          } else {
            result[0] += 0.027311475723981855;
          }
        } else {
          result[0] += 0.012087438992763821;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.031507915761321774;
        } else {
          result[0] += 0.04175467836005348;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.007598867665684853;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.25000000000001421) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)70.1500000000000199) ) ) {
            result[0] += -0.00691047107523662;
          } else {
            result[0] += -0.003990632039176891;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.95000000000001705) ) ) {
            result[0] += -0.0026655762483301995;
          } else {
            result[0] += 0.0031895466160778776;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.35000000000000853) ) ) {
          result[0] += 0;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)74.85000000000000853) ) ) {
            result[0] += 0.0025680601357349325;
          } else {
            result[0] += 0.013747881177562074;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)355.9999998500000515) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
            result[0] += -0.002066843624819409;
          } else {
            result[0] += 0.004222617092040869;
          }
        } else {
          result[0] += 0.012159818675369026;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3839.000000200000613) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        result[0] += 0.023670328092575074;
      } else {
        result[0] += 0.01093460848927498;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)718.5000000000001137) ) ) {
        result[0] += 0.0311430827776591;
      } else {
        result[0] += 0.04097793206572533;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.007710778028941623;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)69.85000000000000853) ) ) {
          result[0] += -0.0070542031857702475;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.006719977553944947;
          } else {
            result[0] += -0.0027494809611050726;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.0028388795187430723;
        } else {
          result[0] += 0.00568234581930133;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0005203541341636862;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.1500000000000199) ) ) {
            result[0] += 0.011349454181249805;
          } else {
            result[0] += 0.024549745145169173;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0013359163281426805;
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3839.000000200000613) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.95000000000001705) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.01999619625552103;
          } else {
            result[0] += 0.02627948570709962;
          }
        } else {
          result[0] += 0.009944364815019072;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)718.5000000000001137) ) ) {
          result[0] += 0.030364505265440257;
        } else {
          result[0] += 0.03995348456005255;
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
      result[0] += -0.007518008442047765;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)751.000000100000193) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.25000000000000711) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.05000000000001137) ) ) {
            result[0] += -0.007298612809405686;
          } else {
            result[0] += -0.0031683078082737357;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
            result[0] += -0.0034430645443757793;
          } else {
            result[0] += 0.0009530205681422277;
          }
        }
      } else {
        result[0] += 0.0030555581155543524;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)676.4999992500000872) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.85000000000000142) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.95000000000001705) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)81.95000000000001705) ) ) {
            result[0] += 0.010692746319991052;
          } else {
            result[0] += -0.0010093954429030419;
          }
        } else {
          result[0] += 0.022374525110547744;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.000945961431624662;
        } else {
          result[0] += 0.004672150612593844;
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
          result[0] += 0.023145638387253947;
        } else {
          result[0] += 0.012840473435141825;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.02904883757233619;
        } else {
          result[0] += 0.03896218233874866;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.007058669629294527;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0041436848841718285;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.25000000000001421) ) ) {
            result[0] += -0.002610768906411891;
          } else {
            result[0] += 0.004952431211612472;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)307.5000000000000568) ) ) {
          result[0] += -0.003158785112202168;
        } else {
          result[0] += 0.002376664448529482;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.0013599127918481827;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.01842496777981675;
          } else {
            result[0] += 0.00848272755296658;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.05000000000001137) ) ) {
        result[0] += 3.2631041685817755e-05;
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)79.85000000000000853) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
            result[0] += 0.02620281685801113;
          } else {
            result[0] += 0.01776124441781296;
          }
        } else {
          result[0] += 0.0075831150986692495;
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)18289.49999178000508) ) ) {
        result[0] += 0.026997277523790088;
      } else {
        result[0] += 0.03600892924600177;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1387.999998100000312) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
        result[0] += -0.0068822026469421635;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.004055448730661361;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)39.99999983000000725) ) ) {
            result[0] += 0.0009202521539936285;
          } else {
            result[0] += -0.003290424006438116;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.85000000000000142) ) ) {
        if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)2535.049995435000255) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
            result[0] += 0.005079130109709998;
          } else {
            result[0] += 0.01725010477654312;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)345.5000000000000568) ) ) {
            result[0] += 0.0011767761759459974;
          } else {
            result[0] += 0.009395851743358531;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.0024792120657861232;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)82.55000000000001137) ) ) {
            result[0] += 0.009238356314599513;
          } else {
            result[0] += -0.0006037642959166659;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.001132689416003616;
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)79.6500000000000199) ) ) {
          result[0] += 0.02078467474679152;
        } else {
          result[0] += 0.007859630842621512;
        }
      } else {
        result[0] += 0.032121808648109436;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1872.000003700000207) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)221.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.0069866030423664585;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)435.0000058110001078) ) ) {
            result[0] += -0.008395576297592086;
          } else {
            result[0] += -0.002353568752379423;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.45000000000001705) ) ) {
            result[0] += -0.0040100264883505465;
          } else {
            result[0] += -0.0015770432414461133;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.75000000000001421) ) ) {
        result[0] += -0.0017261727025513264;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.75000000000001421) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1071.00000040000009) ) ) {
            result[0] += 0.00883198295113479;
          } else {
            result[0] += 0.01691819439105915;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
            result[0] += -0.0013666645462878727;
          } else {
            result[0] += 0.007672286499624275;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)508.5000000000000568) ) ) {
          result[0] += 0.024258877366781235;
        } else {
          result[0] += 0.01911525895819068;
        }
      } else {
        result[0] += 0.010721700150858273;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.026718264529481523;
      } else {
        result[0] += 0.036397905903203145;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1336.000001150000344) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)3.500000000000000444) ) ) {
        result[0] += -0.006811937607386534;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.25000000000000711) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
            result[0] += -0.008156164709340644;
          } else {
            result[0] += -0.003215123103186213;
          }
        } else {
          result[0] += -0.0013388700757570862;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.002840965263545513;
        } else {
          result[0] += 0.004329708733906349;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.35000000000000853) ) ) {
          result[0] += -0.000717638736324651;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.1500000000000199) ) ) {
            result[0] += 0.010388064861069732;
          } else {
            result[0] += 0.02252759786068716;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += 0.0013384395456872882;
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)79.6500000000000199) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
            result[0] += 0.016134155709774067;
          } else {
            result[0] += 0.023882099335583357;
          }
        } else {
          result[0] += 0.008372855698068938;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
          result[0] += 0.034749908894300456;
        } else {
          result[0] += 0.02572008299231529;
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)245.5000000000000284) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.65000000000000213) ) ) {
      result[0] += -0.006397536214643798;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)77.25000000000001421) ) ) {
        result[0] += -0.0036899006436578933;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.85000000000000853) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)452.4999995000000581) ) ) {
            result[0] += -0.004024073249012872;
          } else {
            result[0] += 0.004369823408429511;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.25000000000001421) ) ) {
            result[0] += 0.0003812172211473808;
          } else {
            result[0] += 0.004925418255506488;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)676.4999992500000872) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)74.75000000000001421) ) ) {
        result[0] += -0.0013393333371214825;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.75000000000001421) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)204.9999989500000197) ) ) {
            result[0] += 0.021357057708581647;
          } else {
            result[0] += 0.010995721516082996;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
            result[0] += -0.0008920373547917757;
          } else {
            result[0] += 0.0077984494309533735;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)17086.5499664850031) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.6500000000000199) ) ) {
          result[0] += 0.020546808534480154;
        } else {
          result[0] += 0.011198887079954149;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.02528319483622908;
        } else {
          result[0] += 0.03481143461806434;
        }
      }
    }
  }
}

