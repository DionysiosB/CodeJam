#include <cstdio>
#include <cmath>

int main(){

    int T(0); scanf("%d\n", &T);

    for(int currentCase = 1; currentCase <= T; currentCase++){

        int N(0); scanf("%d", &N);
        double posX(0), posY(0), posZ(0), tempPosX(0), tempPosY(0), tempPosZ(0);
        double vX(0), vY(0), vZ(0), tempVX(0), tempVY(0), tempVZ(0);
        for(int k = 0; k < N; k++){
            scanf("%lf %lf %lf %lf %lf %lf", &tempPosX, &tempPosY, &tempPosZ, &tempVX, &tempVY, &tempVZ);
            posX += tempPosX; posY += tempPosY; posZ += tempPosZ;
            vX += tempVX; vY += tempVY; vZ += tempVZ;
        }

        posX /= N; posY /= N; posZ /= N; 
        vX /= N; vY /= N; vZ /= N;

        double minTime(0); if(vX !=0 || vY != 0 || vZ != 0){minTime = -(vX * posX + vY * posY + vZ * posZ) / (vX * vX + vY * vY + vZ * vZ);}

        double minDistance(0);
        if(minTime <= 0){minTime = 0; minDistance = sqrt(posX * posX + posY * posY + posZ * posZ);}
        else{ 
            double minX = posX + vX * minTime;
            double minY = posY + vY * minTime;
            double minZ = posZ + vZ * minTime;
            minDistance = sqrt(minX * minX + minY * minY + minZ * minZ);
        }

        printf("Case #%d: %.7lf %.7lf\n", currentCase, minDistance, minTime);
    }

    return 0;
}
