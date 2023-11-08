#include <bits/stdc++.h>
using namespace std;

const unsigned int BIT_FLAG_0 = (1 << 0);  // 0000 0000 0000 0001
const unsigned int BIT_FLAG_1 = (1 << 1);  // 0000 0000 0000 0010
const unsigned int BIT_FLAG_2 = (1 << 2);  // 0000 0000 0000 0100
const unsigned int BIT_FLAG_3 = (1 << 3);  // 0000 0000 0000 1000
const unsigned int BIT_FLAG_4 = (1 << 4);  // 0000 0000 0001 0000
const unsigned int BIT_FLAG_5 = (1 << 5);  // 0000 0000 0010 0000
const unsigned int BIT_FLAG_6 = (1 << 6);  // 0000 0000 0100 0000
const unsigned int BIT_FLAG_7 = (1 << 7);  // 0000 0000 1000 0000

void bit_operation() {
    // {1, 3, 5} にフラグの立ったビット
    unsigned int bit = BIT_FLAG_1 | BIT_FLAG_3 | BIT_FLAG_5;
    cout << "{1, 3, 5} = " << bitset<8>(bit) << endl;

    // ビット {1, 3, 5} について、3番目のフラグが立っていること
    if (bit & BIT_FLAG_3) {
        cout << "3 is in     " << bitset<8>(bit) << endl;
    }

    // ビット {1, 3, 5} について、0番目のフラグが立っていないこと
    if (!(bit & BIT_FLAG_0)) {
        cout << "0 is not in " << bitset<8>(bit) << endl;
    }

    unsigned int bit2 = BIT_FLAG_0 | BIT_FLAG_3 | BIT_FLAG_4;  // {0, 3, 4}
    cout << bitset<8>(bit) << " AND " << bitset<8>(bit2) << " = " << bitset<8>(bit & bit2) << endl;
    cout << bitset<8>(bit) << " OR  " << bitset<8>(bit2) << " = " << bitset<8>(bit | bit2) << endl;

    // bitに6番目のフラグを立てる
    cout << "before: " << bitset<8>(bit) << endl;
    bit |= BIT_FLAG_6;
    cout << "after: " << bitset<8>(bit) << " (6 included)" << endl;

    // bit2 から3番目のフラグを消す
    cout << "before: " << bitset<8>(bit2) << endl;
    bit2 &= ~BIT_FLAG_3;
    cout << "after: " << bitset<8>(bit2) << " (3 excluded)" << endl;
}

void mask_bit() {
    const unsigned int BIT_FLAG_DAMAGE = (1 << 0);     // HP が満タンでないか
    const unsigned int BIT_FLAG_DOKU = (1 << 1);       // 毒状態になっているか
    const unsigned int BIT_FLAG_MAHI = (1 << 2);       // 麻痺状態になっているか
    const unsigned int BIT_FLAG_SENTOFUNO = (1 << 3);  // 戦闘不能状態になっているか

    const unsigned int MASK_ATTACK = BIT_FLAG_DAMAGE;
    const unsigned int MASK_PUNCH = BIT_FLAG_DAMAGE | BIT_FLAG_MAHI;
    const unsigned int MASK_DEFEAT = BIT_FLAG_DAMAGE | BIT_FLAG_SENTOFUNO;
    const unsigned int MASK_DOKU_MAHI = BIT_FLAG_DOKU | BIT_FLAG_MAHI;

    unsigned int status = 0;
    cout << "start: " << bitset<4>(status) << endl;

    status |= MASK_ATTACK;
    cout << "attacked: " << bitset<4>(status) << endl;

    status |= MASK_PUNCH;
    cout << "punched: " << bitset<4>(status) << endl;

    if (status & MASK_DOKU_MAHI) {
        cout << "You are doku or mahi." << endl;
    }

    status &= ~MASK_DOKU_MAHI;
    cout << "kaihuku: " << bitset<4>(status) << endl;

    status |= MASK_DEFEAT;
    cout << "sentofuno: " << bitset<4>(status) << endl;

    status &= ~MASK_DOKU_MAHI;
    cout << "sentofuno no mama: " << bitset<4>(status) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // bit_operation();
    mask_bit();
    return 0;
}
