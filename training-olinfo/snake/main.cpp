typedef struct
{
    int riga;
    int colonna;
} cella_t;

typedef enum
{
    SOPRA,
    SOTTO,
    DESTRA,
    SINISTRA
} direzione_t;

cella_t posizione_mela();

void muovi(direzione_t);

void gioca(int R, int C)
{
    /*cella_t mela = posizione_mela();
    while(1)
    {
        if(mela.riga > mela.colonna)
            muovi(DESTRA);
        else
            muovi(SOTTO);
    }*/
    if(R%2){
        while(true) {
            for (int i = 0; i < R-1; ++i) {
                muovi(SOTTO);
            }
            for (int i = 0; i < (C / 2 - 1); ++i) {
                muovi(DESTRA);
                for (int j = 0; j < R - 2; ++j) {
                    muovi(SOPRA);
                }
                muovi(DESTRA);
                for (int j = 0; j < R - 2; ++j) {
                    muovi(SOTTO);
                }
            }
            muovi(DESTRA);
            for (int i = 0; i < R-1; ++i) {
                muovi(SOPRA);
            }
            for(int i=0; i<C-1; ++i){
                muovi(SINISTRA);
            }
        }
    }
    else{
        while(true) {
            for (int i = 0; i < C-1; ++i) {
                muovi(DESTRA);
            }
            for (int i = 0; i < (R / 2 - 1); ++i) {
                muovi(SOTTO);
                for (int j = 0; j < C - 2; ++j) {
                    muovi(SINISTRA);
                }
                muovi(SOTTO);
                for (int j = 0; j < C - 2; ++j) {
                    muovi(DESTRA);
                }
            }
            muovi(SOTTO);
            for (int i = 0; i < C-1; ++i) {
                muovi(SINISTRA);
            }
            for(int i=0; i<R-1; ++i){
                muovi(SOPRA);
            }
        }
    }





}