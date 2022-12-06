#include <stdio.h>

int main(void) {
	long long user_hp, user_atk, boss_hp, boss_atk;
	long long skill_time, skill_effect;
	int turn = 0;

	scanf("%lld %lld %lld %lld", &user_hp, &user_atk, &boss_hp, &boss_atk);
	scanf("%lld %lld", &skill_time, &skill_effect);
	while (boss_hp > skill_time) {
		boss_hp -= user_atk;
		turn ++;
	}
	if (boss_hp <= 0) {
		printf("Victory!");
		return 0;
	}
	user_hp -= boss_atk * turn;
	if (user_hp <= 0) {
		printf("gg");
		return 0;
	}
	boss_hp += skill_effect;
	turn = 0;
	while (boss_hp > 0) {
		boss_hp -= user_atk;
		turn ++;
	}
	user_hp -= boss_atk * turn;
	if (user_hp >= boss_hp) {
		printf("Victory!");
		return 0;
	} else {
		printf("gg");
		return 0;
	}
}