#include <iostream>
#include <vector>
#include <queue>
#include <array>

using namespace std;



int main()
{
    const int x[] = {-1, -1, 1, 1, 0, -1, 1, 0};
    const int y[] = {-1, 0, 1, 0, 1, 1, -1, -1};

    std::array < std::array < bool, 8 >, 8> field;

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            field[i][j] = 0;

    int x1, y1;
    cin >> x1 >> y1;
    field[x1-1][y1-1] = 1;
    int x2, y2;
    cin >> x2 >> y2;

    vector <pair <int, int> > moves;

    queue <pair <pair <int, int>, vector <pair <int, int> > > > way;

    way.push(make_pair(make_pair(x1-1, y1-1), moves));

    while(!way.empty())
    {
        pair <int, int> now = way.front().first;
        moves = way.front().second;

        if(now.first == x2-1 && now.second == y2-1) break;

        way.pop();

        for (int d = 0; d < 8; d++)
        {
                if(now.first+x[d] < 8 && now.first+x[d] >= 0 &&
                   now.second+y[d] < 8 && now.second+y[d] >= 0 &&
                   field[now.first + x[d]][now.second+y[d]] == 0) {

                        vector <pair <int, int> > xod2 = moves;
                        xod2.push_back(make_pair(now.first+x[d], now.second+y[d]));
                        way.push(make_pair(make_pair(now.first+x[d], now.second+y[d]), xod2));
                        field[now.first+x[d]][now.second+y[d]] = 1;

                }
        }
    }
    cout << moves.size() << endl;

   return 0;
}

