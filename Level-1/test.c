int main() {
    printf("Level 2\n");

    int user1 = create_user_account(false, "pwned");
    printf("0. Non-admin (admin:%d) username called '%s' has been created\n", is_admin(user1), username(user1));

    update_setting(user1, "-7", "1");
    printf("1. A dummy setting has been set to dummy number '1'\n");

    printf("2. Making sure user '%s' is not an admin by performing a check -> [Result] Admin:%d\n",
           username(user1), is_admin(user1));

    if (is_admin(user1))
        printf("<SOS> PRIVILEGE ESCALATION ATTACK DETECTED\n");
    else
        printf("CONGRATULATIONS LEVEL 2 PASSED!\n");

    return 0;
}
