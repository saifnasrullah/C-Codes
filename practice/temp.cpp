#include <
class BulletHellApp : public IPlugAPP {
private:
  struct Bullet {
    float x, y;
    float vx, vy;
    bool active;
  };

  std::vector<Bullet> bullets;
  float playerX, playerY;

public:
  BulletHellApp() : IPlugAPP(/*...*/) {
    // Initialize player position
    playerX = 400.f;
    playerY = 300.f;
  }

  void OnKeyDown(int key) override {
    // Handle player movement/shooting
    if (key == 'W') playerY -= 5.f;
    if (key == 'S') playerY += 5.f;
    if (key == ' ') ShootBullet();
  }

  void ShootBullet() {
    // Spawn a bullet (simple example)
    bullets.push_back({playerX, playerY, 0.f, -5.f, true});
  }

  void UpdateBullets() {
    for (auto& bullet : bullets) {
      bullet.x += bullet.vx;
      bullet.y += bullet.vy;
      // Simple boundary check
      if (bullet.y < 0) bullet.active = false;
    }
    // Remove inactive bullets
    bullets.erase(std::remove_if(bullets.begin(), bullets.end(),
                  [](const Bullet& b) { return !b.active; }), bullets.end());
  }

  void Draw(IGraphics& g) override {
    g.ClearBackground(COLOR_WHITE);
    // Draw player
    g.FillCircle(COLOR_BLUE, playerX, playerY, 10.f);
    // Draw bullets
    for (const auto& bullet : bullets) {
      g.FillCircle(COLOR_RED, bullet.x, bullet.y, 3.f);
    }
  }
};