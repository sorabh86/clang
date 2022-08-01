struct apt{
       int MBedroom;
       int Bedroom;
       int Den;
       float Bath;
       double MBath;
};

struct apt MyPlace = {400, 200, 100, 125.50, 175.50};

int main(int argc, char *argv[])
{
    printf("My Bedroom: %d\n", MyPlace.MBedroom);
    printf("Bedroom: %d\n", MyPlace.Bedroom);
    printf("Den: %d\n", MyPlace.Den);
    printf("Bath: %f\n", MyPlace.Bath);
    printf("My Bath: %f\n", MyPlace.MBath);
    
    getch();
}
