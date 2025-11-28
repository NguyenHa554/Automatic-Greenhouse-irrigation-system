
#include "header.h"

void predict_unit3(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.75000000000000355) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
          result[0] += -0.0006442667592981066;
        } else {
          result[0] += -0.0019752597445312856;
        }
      } else {
        result[0] += 0.0022633945966760317;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)176.4999999500000456) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.0003386466161930002;
          } else {
            result[0] += 0.007301443494567327;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.85000000000000853) ) ) {
            result[0] += 0.0017796849197922989;
          } else {
            result[0] += -0.0037804354308173063;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.001707661996940793;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.25000000000001421) ) ) {
            result[0] += 0.007208611624315381;
          } else {
            result[0] += -0.0005576876905416288;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += -0.00017360356946786244;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)79.6500000000000199) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)760.0000000000001137) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)735.0000000000001137) ) ) {
            result[0] += 0.00849555893454332;
          } else {
            result[0] += 0.003920072404947132;
          }
        } else {
          result[0] += 0.012276284819468858;
        }
      } else {
        result[0] += 0.0009410104801257452;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)69.85000000000000853) ) ) {
          result[0] += -0.0029283446390181785;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)87.10000000000000853) ) ) {
            result[0] += 9.023400824190231e-06;
          } else {
            result[0] += -0.002171613579025356;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.00213087089122079;
        } else {
          result[0] += -0.00047643307252343735;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)84.75000000000001421) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)81.25000000000001421) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.6500000000000199) ) ) {
            result[0] += 0.002710037507295895;
          } else {
            result[0] += -0.002971883992924212;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)208.5000011500000312) ) ) {
            result[0] += 0.000952096229673109;
          } else {
            result[0] += 0.007050667754648365;
          }
        }
      } else {
        result[0] += -0.003496441005418698;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0009093730279155785;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.35000000000000853) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)771.4999995500000978) ) ) {
            result[0] += 0.00868918674875443;
          } else {
            result[0] += 0.003931262397672982;
          }
        } else {
          result[0] += 0.003098112064357283;
        }
      } else {
        result[0] += 0.011479145460374034;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)74.45000000000001705) ) ) {
          result[0] += -0.0012841736690348223;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)87.10000000000000853) ) ) {
            result[0] += 0.000955206238448487;
          } else {
            result[0] += -0.002117323213052459;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
          result[0] += -0.0019400076004725026;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)520.7500018045001298) ) ) {
            result[0] += 0.00658151839650236;
          } else {
            result[0] += -0.0014831430678931634;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.0012175699723884464;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.85000000000000142) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.95000000000001705) ) ) {
            result[0] += 0.0030536891157158987;
          } else {
            result[0] += 0.009963048085570336;
          }
        } else {
          result[0] += -0.0012286053120624276;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0008866387700462449;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)763.5000000000001137) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.35000000000000853) ) ) {
          result[0] += 0.0019048429168924486;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.35000000000000853) ) ) {
            result[0] += 0.007515000113136401;
          } else {
            result[0] += 0.003298980797443427;
          }
        }
      } else {
        result[0] += 0.0118393647428602;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)238.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)69.85000000000000853) ) ) {
          result[0] += -0.002823031528453742;
        } else {
          result[0] += -0.00024024756494595272;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
          result[0] += -0.001891507460067736;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)53.00000080500000621) ) ) {
            result[0] += 0.005246879570483792;
          } else {
            result[0] += -0.00132086283780518;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        result[0] += -0.0011871307239952411;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.85000000000000142) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.95000000000001705) ) ) {
            result[0] += 0.002977346766779621;
          } else {
            result[0] += 0.009713972009718418;
          }
        } else {
          result[0] += -0.0011978901538532228;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0008644727725047796;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1431.000000000000227) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.35000000000000497) ) ) {
            result[0] += 0.006448075436499149;
          } else {
            result[0] += 0.0020725516469513134;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)642.5000000000001137) ) ) {
            result[0] += 0.005293998864634584;
          } else {
            result[0] += 0.013413405184718697;
          }
        }
      } else {
        result[0] += 0.011030120297024649;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)245.5000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)74.45000000000001705) ) ) {
          result[0] += -0.0012335079312841928;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)87.10000000000000853) ) ) {
            result[0] += 0.0009230458262006601;
          } else {
            result[0] += -0.0020583838755946333;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
          result[0] += -0.001844219755910758;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)520.7500018045001298) ) ) {
            result[0] += 0.006285808648914099;
          } else {
            result[0] += -0.0012012898237593076;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.95000000000001705) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)262.5000000000000568) ) ) {
          result[0] += -0.005540673557203263;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)325.99999930000007) ) ) {
            result[0] += 0.001629789930069819;
          } else {
            result[0] += -0.0016273246349122088;
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.05000000000001137) ) ) {
          result[0] += -0.002173097959253937;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.008255727108454963;
          } else {
            result[0] += 0.003315274050304045;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0008428609348318009;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)763.5000000000001137) ) ) {
        result[0] += 0.005109695445690747;
      } else {
        result[0] += 0.011361722870729866;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      result[0] += -0.0012152090808806363;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)176.4999999500000456) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.00037055261220230026;
          } else {
            result[0] += 0.006845786965106904;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.85000000000000853) ) ) {
            result[0] += 0.0014618636312213938;
          } else {
            result[0] += -0.0037915074713029233;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          result[0] += -0.0015661823601815208;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.25000000000001421) ) ) {
            result[0] += 0.006957755856215954;
          } else {
            result[0] += -0.0005298595301686756;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += -0.00015583320661927716;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.6500000000000199) ) ) {
          result[0] += 0.004316407205270868;
        } else {
          result[0] += 0.015494187394157054;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1872.000003700000207) ) ) {
            result[0] += -0.0008898600484244526;
          } else {
            result[0] += 0.004037568195015883;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.65000000000001279) ) ) {
            result[0] += 0.001273249574005604;
          } else {
            result[0] += 0.009426297734936943;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.75000000000000355) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.05000000000001137) ) ) {
            result[0] += -0.004315569704692614;
          } else {
            result[0] += -0.0002454947402689092;
          }
        } else {
          result[0] += -0.0017388352847380398;
        }
      } else {
        result[0] += 0.0021632849139471846;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)176.4999999500000456) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.0003612888090312481;
          } else {
            result[0] += 0.006674642376641841;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.85000000000000853) ) ) {
            result[0] += 0.001425317042829612;
          } else {
            result[0] += -0.0036967199143587747;
          }
        }
      } else {
        result[0] += -0.0003711565608403298;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)147.9999997500000291) ) ) {
      result[0] += -0.000514780837271748;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.75000000000001421) ) ) {
          result[0] += 0.0046220190403983;
        } else {
          result[0] += 0.011306314689831603;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)36.15000000000001279) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += 0.0021943914255921227;
          } else {
            result[0] += 0.006412620020098985;
          }
        } else {
          result[0] += 0.009876528891269118;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.75000000000000355) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
          result[0] += -0.0005412881356093658;
        } else {
          result[0] += -0.0016953644676262532;
        }
      } else {
        result[0] += 0.0021092027698953945;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)176.4999999500000456) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.00035225663376622836;
          } else {
            result[0] += 0.006507776292715351;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.85000000000000853) ) ) {
            result[0] += 0.0013896841280019053;
          } else {
            result[0] += -0.003604301878617012;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)307.5000000000000568) ) ) {
          result[0] += -0.0009822796810441082;
        } else {
          result[0] += 0.002483591069741284;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += -0.0001594884925042138;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)79.6500000000000199) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.35000000000000497) ) ) {
            result[0] += 0.007363701833016945;
          } else {
            result[0] += 0.0019541464062294346;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)771.4999995500000978) ) ) {
            result[0] += 0.009942062587942928;
          } else {
            result[0] += 0.002260654516518116;
          }
        }
      } else {
        result[0] += 0.00038758363823095956;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)242.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)69.85000000000000853) ) ) {
          result[0] += -0.0026633319994434717;
        } else {
          result[0] += -0.0001741487896009177;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
          result[0] += -0.0018194705238662814;
        } else {
          result[0] += -0.0003909045655687805;
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)86.95000000000001705) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)84.75000000000001421) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)81.55000000000001137) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.004917251190118906;
          }
        } else {
          result[0] += -0.0034476443903090864;
        }
      } else {
        result[0] += 0.006564372205598789;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)147.9999997500000291) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.25000000000000355) ) ) {
        result[0] += 0.0010186081967855753;
      } else {
        result[0] += -0.003629335401579738;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.6500000000000199) ) ) {
          result[0] += 0.003913266540371945;
        } else {
          result[0] += 0.014751388445962223;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.45000000000001705) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)676.4999992500000872) ) ) {
            result[0] += 0.0008617197889411314;
          } else {
            result[0] += 0.004061350644935437;
          }
        } else {
          result[0] += 0.006914935015627873;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        result[0] += -0.003197822477605597;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)74.45000000000001705) ) ) {
          result[0] += -0.001606413299940398;
        } else {
          result[0] += -0.0004101280937818846;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)176.4999999500000456) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.00035272983873728663;
          } else {
            result[0] += 0.006304791375095474;
          }
        } else {
          result[0] += -0.001093716157203609;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.45000000000001705) ) ) {
            result[0] += -0.00018144802516326312;
          } else {
            result[0] += -0.004261821360430784;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.25000000000001421) ) ) {
            result[0] += 0.006735229011625052;
          } else {
            result[0] += -0.0004905202257777414;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += -0.00015903668534575087;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)79.6500000000000199) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.20000000000000995) ) ) {
          result[0] += 0.010260439396581868;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)735.0000000000001137) ) ) {
            result[0] += 0.007001827897262187;
          } else {
            result[0] += 0.00250699675647128;
          }
        }
      } else {
        result[0] += 0.00029466537774230044;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      result[0] += -0.0010753934965315893;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.1500000000000199) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.15000000000001279) ) ) {
            result[0] += -0.0026149450680462726;
          } else {
            result[0] += 0.0034925656942650673;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.75000000000001421) ) ) {
            result[0] += -0.001031355519203077;
          } else {
            result[0] += 0.0037277754207441054;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.45000000000001705) ) ) {
            result[0] += -0.000176911813672632;
          } else {
            result[0] += -0.004155275822720594;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.25000000000001421) ) ) {
            result[0] += 0.006566848516464233;
          } else {
            result[0] += -0.00047825724832833776;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.004187572347490411;
      } else {
        result[0] += 0.010833429240566843;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.25000000000001421) ) ) {
        result[0] += -0.00017147890621478241;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1172.499999500000285) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
            result[0] += 0.0061896496187895545;
          } else {
            result[0] += 0.00017370385610881975;
          }
        } else {
          result[0] += 0.007718707008287311;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)676.4999992500000872) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)258.5000000000000568) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)91.00000000000001421) ) ) {
            result[0] += -0.00013740534660835942;
          } else {
            result[0] += -0.0033141269434530003;
          }
        } else {
          result[0] += -0.0015064520922770212;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)70.6500000000000199) ) ) {
          result[0] += -0.0019803878666942347;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)131.0000006000000212) ) ) {
            result[0] += 0.0011969933439673775;
          } else {
            result[0] += -0.001548788826635462;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        result[0] += 0.007032558791339397;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)78.45000000000001705) ) ) {
          result[0] += -0.0010434670586982975;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.95000000000001705) ) ) {
            result[0] += 0.008496405580902802;
          } else {
            result[0] += 0.0011117818091523402;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)763.5000000000001137) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.45000000000001705) ) ) {
        result[0] += 0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)78.75000000000001421) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1084.000000500000397) ) ) {
            result[0] += 0.009333172721545335;
          } else {
            result[0] += 0.0037898710602894425;
          }
        } else {
          result[0] += 0.0011254596532671714;
        }
      }
    } else {
      result[0] += 0.010244962418451907;
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)242.0000000000000284) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)46.99999996500000776) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)70.1500000000000199) ) ) {
          result[0] += -0.0023474651278122954;
        } else {
          result[0] += -0.0001025235619435989;
        }
      } else {
        result[0] += -0.0013279578862170113;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.95000000000001705) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)152.00000110000002) ) ) {
          result[0] += -0.004697966578726967;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)325.99999930000007) ) ) {
            result[0] += 0.00153953744424507;
          } else {
            result[0] += -0.0016866280141941928;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.1500000000000199) ) ) {
          result[0] += -0.0010617568008601667;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
            result[0] += 0.0070979340113182035;
          } else {
            result[0] += 0.0023401859492063522;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.000749743514017956;
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.20000000000000995) ) ) {
        result[0] += 0.00974951681003652;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)31.35000000000000497) ) ) {
            result[0] += 0.004981460404209793;
          } else {
            result[0] += 0.0011235551414459845;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)642.5000000000001137) ) ) {
            result[0] += 0.004204171416039269;
          } else {
            result[0] += 0.011697720773518086;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        result[0] += -0.0030289441728461033;
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)76.95000000000001705) ) ) {
          result[0] += -0.0012583414139921095;
        } else {
          result[0] += -0.00016630047635888732;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)176.4999999500000456) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.00033357762561645366;
          } else {
            result[0] += 0.0059504833326129054;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.85000000000000853) ) ) {
            result[0] += 0.0012131209701944428;
          } else {
            result[0] += -0.003584587680816185;
          }
        }
      } else {
        result[0] += -0.0003231360075461462;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += -0.000155610442725998;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.75000000000001421) ) ) {
          result[0] += 0.003726216446181449;
        } else {
          result[0] += 0.010029697689331242;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3752.499998900000264) ) ) {
            result[0] += 0.0005121403617463452;
          } else {
            result[0] += 0.004773870057115952;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)34.75000000000000711) ) ) {
            result[0] += 0.003489344730623998;
          } else {
            result[0] += 0.010245904693887994;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.75000000000000355) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.35000000000000853) ) ) {
          result[0] += -0.0032619824644291046;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)76.95000000000001705) ) ) {
            result[0] += -0.0012886375770503578;
          } else {
            result[0] += -0.0002553687423649091;
          }
        }
      } else {
        result[0] += 0.002134413572649161;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)92.1500000000000199) ) ) {
          result[0] += -0.005404604136943815;
        } else {
          result[0] += 0.0004061899345833809;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.75000000000001421) ) ) {
          result[0] += -0.0004846032261072347;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.85000000000000497) ) ) {
            result[0] += 0.0032316554665852053;
          } else {
            result[0] += -0.00016049254416160427;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
        result[0] += 0.0037274212471981485;
      } else {
        result[0] += 0.010035016992512871;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.25000000000001421) ) ) {
        result[0] += -0.0002506630208979293;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1172.499999500000285) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.25000000000000355) ) ) {
            result[0] += 0.005524438706592524;
          } else {
            result[0] += -0.00011532109101197773;
          }
        } else {
          result[0] += 0.00707461968716234;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)258.5000000000000568) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)93.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          result[0] += -0.0028775192232711653;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)74.45000000000001705) ) ) {
            result[0] += -0.001272827911494701;
          } else {
            result[0] += -0.00025142651473174444;
          }
        }
      } else {
        result[0] += 0.002423390183331711;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.05000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)771.4999995500000978) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)79.35000000000000853) ) ) {
            result[0] += -0.005094676729291678;
          } else {
            result[0] += -0.00037735944441347213;
          }
        } else {
          result[0] += 0.0017138201904229142;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.05000000000001137) ) ) {
          result[0] += -0.0021272889561951163;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.35000000000000853) ) ) {
            result[0] += 0.006404556936437363;
          } else {
            result[0] += 0.0019385443279253585;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0007214691710015316;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)763.5000000000001137) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.35000000000000853) ) ) {
          result[0] += 0.000664358573849313;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.35000000000000853) ) ) {
            result[0] += 0.005695930156632261;
          } else {
            result[0] += 0.002114708293705586;
          }
        }
      } else {
        result[0] += 0.009569118790328504;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)33.25000000000000711) ) ) {
      result[0] += -0.0009194461206997013;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.1500000000000199) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.15000000000001279) ) ) {
            result[0] += -0.0023892483879010083;
          } else {
            result[0] += 0.003356090117245912;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += 0.0002632302865992339;
          } else {
            result[0] += 0.00458610550803838;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)307.5000000000000568) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)40.55000000000000426) ) ) {
            result[0] += -0.0016812588022754637;
          } else {
            result[0] += 0.001320951169888888;
          }
        } else {
          result[0] += 0.002342504996477681;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.6500000000000199) ) ) {
          result[0] += 0.00434056538180448;
        } else {
          result[0] += 0.014163556111976505;
        }
      } else {
        result[0] += 0.002742214500049158;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.45000000000001705) ) ) {
        result[0] += -0.0005558243611206612;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.35000000000000853) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += 0.0030720661723150078;
          } else {
            result[0] += 0.009028084550339443;
          }
        } else {
          result[0] += 0.0006906961190354735;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)33.25000000000000711) ) ) {
      result[0] += -0.0008964599487964213;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)54.49999996500000776) ) ) {
          result[0] += 0.00013514702511730682;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)176.4999999500000456) ) ) {
            result[0] += 0.0051206777254440665;
          } else {
            result[0] += -0.0003033145698933176;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.45000000000001705) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.45000000000001705) ) ) {
            result[0] += -7.471661060117185e-05;
          } else {
            result[0] += -0.0039723720092378146;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)82.25000000000001421) ) ) {
            result[0] += 0.0063078751917928465;
          } else {
            result[0] += -0.0004905409033920977;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)207.4999998000000403) ) ) {
      result[0] += -0.00017423199207493753;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.6500000000000199) ) ) {
          result[0] += 0.0029314410922233938;
        } else {
          result[0] += 0.013191563728265465;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)34.05000000000000426) ) ) {
            result[0] += 0.0029226774438718046;
          } else {
            result[0] += -0.0009611452027009084;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.65000000000001279) ) ) {
            result[0] += 7.272491949455191e-05;
          } else {
            result[0] += 0.0077852410102091;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1227.000000300000238) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.75000000000000355) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)80.05000000000001137) ) ) {
            result[0] += -0.0039639964327216155;
          } else {
            result[0] += -3.818486836177753e-05;
          }
        } else {
          result[0] += -0.0013792693308520634;
        }
      } else {
        result[0] += 0.002087682814026872;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)78.45000000000001705) ) ) {
          result[0] += -0.00047261104711702806;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.95000000000001705) ) ) {
            result[0] += 0.007446968778967857;
          } else {
            result[0] += 0.0009444865430897495;
          }
        }
      } else {
        result[0] += -0.002644583548951362;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)75.6500000000000199) ) ) {
          result[0] += 0.004158765247790141;
        } else {
          result[0] += 0.013582279075868429;
        }
      } else {
        result[0] += 0.002609498356614495;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)75.45000000000001705) ) ) {
        result[0] += -0.0005861881002783776;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.35000000000000853) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.45000000000001705) ) ) {
            result[0] += 0.002921872732819039;
          } else {
            result[0] += 0.0086823851427135;
          }
        } else {
          result[0] += 0.0006144925491470431;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)676.4999992500000872) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)258.5000000000000568) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)93.35000000000000853) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
          result[0] += -0.0027432421640288546;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)74.45000000000001705) ) ) {
            result[0] += -0.001168290042257582;
          } else {
            result[0] += -0.00019719024778644046;
          }
        }
      } else {
        result[0] += 0.002396952829190663;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)84.75000000000001421) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)78.45000000000001705) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.75000000000001421) ) ) {
            result[0] += 0.0007011622744853255;
          } else {
            result[0] += -0.002569502104073763;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
            result[0] += 0.004942833708260548;
          } else {
            result[0] += -0.0026491894271748607;
          }
        }
      } else {
        result[0] += -0.002851048680022359;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.20000000000000995) ) ) {
      result[0] += 0.009634459001477809;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)735.5000000000001137) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.55000000000001137) ) ) {
            result[0] += 0.005479466199342694;
          } else {
            result[0] += 0.0018388348989068501;
          }
        } else {
          result[0] += -0.0007148007317446174;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)642.5000000000001137) ) ) {
          result[0] += 0.0015138959019289659;
        } else {
          result[0] += 0.010460429320281205;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1015.49999924999986) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)92.1500000000000199) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)79.45000000000001705) ) ) {
            result[0] += -0.0006175520277176282;
          } else {
            result[0] += 0.0020713620111214455;
          }
        } else {
          result[0] += -0.003062095824055947;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)404.4999995000000581) ) ) {
          result[0] += -0.0017753391855165638;
        } else {
          result[0] += -0.0004535494539008492;
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)290.9999986500000659) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.55000000000000426) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)56.49999983500000411) ) ) {
            result[0] += 0.0002828134538858761;
          } else {
            result[0] += 0.005395948209122502;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)78.85000000000000853) ) ) {
            result[0] += 0.001991104976834983;
          } else {
            result[0] += -0.001670280388337845;
          }
        }
      } else {
        result[0] += -0.0035938009161459793;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)129.4999998000000403) ) ) {
      result[0] += -0.0009581338257945997;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)763.5000000000001137) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)74.85000000000000853) ) ) {
          result[0] += -0.0005125366878480866;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)77.35000000000000853) ) ) {
            result[0] += 0.0048186900368535944;
          } else {
            result[0] += 0.0017007777663582769;
          }
        }
      } else {
        result[0] += 0.008967062955722213;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)38.00000070500001215) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9999999665000001148) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)87.10000000000000853) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.85000000000000853) ) ) {
            result[0] += -0.0006246819732976813;
          } else {
            result[0] += 0.0019507797731138352;
          }
        } else {
          result[0] += -0.002312119980068768;
        }
      } else {
        result[0] += -0.0013388153852853496;
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (double)460.9999975525000764) ) ) {
        result[0] += 0.007674306435743347;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)83.55000000000001137) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)81.25000000000001421) ) ) {
            result[0] += -6.414890487963755e-05;
          } else {
            result[0] += 0.0042052797751966865;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)94.49999996500001487) ) ) {
            result[0] += -0.0004176519523658183;
          } else {
            result[0] += -0.0047839025057414;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
      result[0] += -0.0006687050185393588;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)763.5000000000001137) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)771.4999995500000978) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)682.9999997000001031) ) ) {
            result[0] += 0.0030143129427166546;
          } else {
            result[0] += 0.010972140942700208;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.6500000000000199) ) ) {
            result[0] += -0.0003558428967908885;
          } else {
            result[0] += 0.004785358652705327;
          }
        }
      } else {
        result[0] += 0.00874288669519592;
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)260.5000000000000568) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.999999966500000337) ) ) {
        result[0] += -0.000296696324078294;
      } else {
        result[0] += -0.0012117303526609628;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)35.95000000000000995) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)149.4999998500000231) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)224.5000000000000284) ) ) {
            result[0] += -0.00035183000557590283;
          } else {
            result[0] += 0.0029615366156212986;
          }
        } else {
          result[0] += 0.006249041736824439;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)220.0000000000000284) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)70.6500000000000199) ) ) {
            result[0] += -0.002322908854112029;
          } else {
            result[0] += 0.0011392454176463865;
          }
        } else {
          result[0] += -0.0035581821118317106;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)29.80000000000000071) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)76.1500000000000199) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.35000000000000853) ) ) {
          result[0] += 0.003892181283709676;
        } else {
          result[0] += 0.013469518630823588;
        }
      } else {
        result[0] += 0.001796100548304179;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.25000000000001421) ) ) {
        result[0] += -0.0008881394402532462;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)1172.499999500000285) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.15000000000000213) ) ) {
            result[0] += 0.003180156787067972;
          } else {
            result[0] += -0.0005934938317990269;
          }
        } else {
          result[0] += 0.006027439643628896;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1015.49999924999986) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)32.75000000000000711) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        result[0] += -0.0025356547811201642;
      } else {
        result[0] += -0.0006869635445174603;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.95000000000000284) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.35000000000000497) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.95000000000001705) ) ) {
            result[0] += -0.002102270224796874;
          } else {
            result[0] += 0.0012889465226448682;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.95000000000001705) ) ) {
            result[0] += -0.0008801934887499859;
          } else {
            result[0] += 0.0030099071665511783;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)76.05000000000001137) ) ) {
          result[0] += 0.0013767495994957595;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)80.25000000000001421) ) ) {
            result[0] += -0.005974919353029691;
          } else {
            result[0] += -0.00028914538609538357;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)129.4999998000000403) ) ) {
      result[0] += -0.0009064687138500933;
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.95000000000001705) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)30.85000000000000497) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)75.6500000000000199) ) ) {
            result[0] += 0.0012265868594736927;
          } else {
            result[0] += 0.007450920481101743;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)77.05000000000001137) ) ) {
            result[0] += -0.0029298240416259927;
          } else {
            result[0] += 0.002137928153771521;
          }
        }
      } else {
        result[0] += 0.007842760608531535;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)479.5000004000000331) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)74.45000000000001705) ) ) {
      result[0] += -0.0010892821882216308;
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.75000000000001421) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)94.05000000000001137) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)81.85000000000000853) ) ) {
            result[0] += -0.0008668368843130092;
          } else {
            result[0] += -0.004286303272327552;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.85000000000000853) ) ) {
            result[0] += 0.0011102118888603788;
          } else {
            result[0] += -0.0027676416411995886;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)257.9999973700000169) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)14.49999990000000061) ) ) {
            result[0] += 0.000537619879260325;
          } else {
            result[0] += -0.0009077843396716116;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.35000000000000853) ) ) {
            result[0] += 0.0011575156491978663;
          } else {
            result[0] += 0.007318681414154444;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.20000000000000995) ) ) {
      result[0] += 0.008279149021784013;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)159.4999998000000403) ) ) {
        result[0] += -0.0006270851788576693;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.30000000000002558) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.75000000000001421) ) ) {
            result[0] += 0.0030687922796595003;
          } else {
            result[0] += 0.00032079864129627825;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)642.5000000000001137) ) ) {
            result[0] += 0.0032007469817763195;
          } else {
            result[0] += 0.00967073781246489;
          }
        }
      }
    }
  }
}

