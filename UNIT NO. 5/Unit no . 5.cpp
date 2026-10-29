#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n, e;
    string u, v, name;

    map<string, vector<string> >adj;

    cout << "Enter number of substations: ";
    cin >> n;

    cout << "Enter substation names:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        adj[name];
    }

    cout << "Enter number of transmission lines: ";
    cin >> e;

    cout << "Enter connected substation names:\n";
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << "Enter substation name to display connections: ";
    cin >> name;

    cout << "Connected substations: ";
    for (int i = 0; i < adj[name].size(); i++)
    {
    	cout << adj[name][i] << " ";
	}

    return 0;
}
