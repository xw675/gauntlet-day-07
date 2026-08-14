#include "catch_amalgamated.hpp"
#include "Dice.hpp"

class FakeRandom : public RandomSource {
public:
    explicit FakeRandom(int value) : m_value(value) {}
    int next(int) override { return m_value; }
private:
    int m_value;
};

TEST_CASE("an rng value of 0 rolls 1") {
    FakeRandom rng(0);
    Dice dice(rng);
    CHECK(dice.roll() == 1);
}

TEST_CASE("an rng value of 5 rolls 6") {
    FakeRandom rng(5);
    Dice dice(rng);
    CHECK(dice.roll() == 6);
}