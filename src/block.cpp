#include "block.hpp"
/*
CelulaMatrix Block::makeABlock(Celula UniversoAntigo[ALTURA][LARGURA], int x, int y){
	setUniverso(UniversoAntigo);
	if(x < 0 || y < 0 || x > 24 || y > 49){
		std::cout << "Não foi possível gerar um block nas coordenadas (" << x << "," << y << ")" << std::endl;
		return getUniverso();
	}
	getUniverso()[x][y].setAlive(true);
	getUniverso()[x][y+1].setAlive(true);
	getUniverso()[x+1][y].setAlive(true);
	getUniverso()[x+1][y+1].setAlive(true);

	return getUniverso();
}
*/
CelulaMatrix Block::makeABlock(CelulaMatrix UniversoAntigo, int x, int y){
        setUniverso(UniversoAntigo);
/*        if(x < 0 || y < 0 || x >= ALTURA-1 || y >= LARGURA-1){
                std::cout << "Não foi possível gerar um block nas coordenadas (" << x << "," << y << ")" << std::endl;
		std::cin;
                return getUniverso();
      }
*/      if(x >= 0 && x<=ALTURA-1 && y >= 0 && y <= LARGURA-1) getUniverso()[x][y].setAlive(true);
        if(x >= 0 && x<=ALTURA-1 && y >= 0 && y <= LARGURA-2) getUniverso()[x][y+1].setAlive(true);
        if(x >= 0 && x<=ALTURA-2 && y >= 0 && y <= LARGURA-1) getUniverso()[x+1][y].setAlive(true);
        if(x >= 0 && x<=ALTURA-2 && y >= 0 && y <= LARGURA-2) getUniverso()[x+1][y+1].setAlive(true);

        return getUniverso();
}

CelulaMatrix Block::deleteABlock(CelulaMatrix universoAntigo, int x, int y){
        setUniverso(universoAntigo);
        if(x < 0 || y < 0 || x >= ALTURA-1 || y >= LARGURA-1){
                std::cout << "Não foi possível deletar um block nas coordenadas (" << x << "," << y << ")" << std::endl;
                return getUniverso();
        }
        getUniverso()[x][y].setAlive(false);
        getUniverso()[x][y+1].setAlive(false);
        getUniverso()[x+1][y].setAlive(false);
        getUniverso()[x+1][y+1].setAlive(false);

        return getUniverso();
}
