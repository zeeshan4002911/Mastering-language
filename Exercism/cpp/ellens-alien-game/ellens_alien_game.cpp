namespace targets {
    class Alien {
        public: Alien(int x, int y) {
             x_coordinate = x;
             y_coordinate = y;
         }
        public: int x_coordinate;
        public: int y_coordinate;
        private: int health{3};
        public: int get_health() {
            return health;
        }
        bool hit() {
            if(health > 0) {
                health--;
            }
            return true;
        }
        bool is_alive() {
            return health;
        }
        bool teleport(int x_new, int y_new) {
            x_coordinate = x_new;
            y_coordinate = y_new;
            return true;
        }
        bool collision_detection(Alien alien) {
            if (alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate) {
                return true;
            }
            return false;
        }
    };

}  // namespace targets