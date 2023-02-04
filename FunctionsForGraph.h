#pragma once
#include <vector>
using namespace std;

//���� - �����������������, �� ����� - �� ����������

//������� ��������� � ������ ����� (����, �� ����� ����)
vector <vector <int> > adjacencyMatrixToListOfEdges(vector <vector <int> > am);

//������� ��������� � C����� ��������� (����, �� ����� ����)
vector <vector <int> > adjacencyMatrixToAdjacencyList(vector <vector <int> > am);

//������ ��������� � ������� ��������� (����, �� ����� ����)
vector <vector <int> > adjacencyListToAdjacenctMatrix(vector <vector <int> > al);

//������ ��������� � ������ ����� (����, �� ����� ����)
vector <vector <int> > adjacencyListToListOfEdges(vector <vector <int> > al);

//������ ����� � ������� ��������� (����, �� ����� ����)
vector <vector <int> > listOfEdgesToAdjacencyMatrix(vector <vector <int> > loe);

//������ ����� � ������ ��������� (����, �� ����� ����)
vector <vector <int> > listOfEdgesToAdjacencyList(vector <vector <int> > loe);

//������� �� ��� �������. �������� �� ������� ���������
bool isVerticesConnectedAM(vector <vector <int> > am, int v, int u);

//������� �� ��� �������. �������� �� ������ �����
bool isVerticesConnectedLOE(vector <vector <int> > loe, int v, int u);

//������� �� ��� �������. �������� �� ������ ���������
bool isVerticesConnectedAL(vector <vector <int> > al, int v, int u);

//���������� ����� �� ������� ��������� (����, �� ����� ����)
int countEdgesAM(vector <vector <int> > am);

//���������� ����� �� ������ ���������
int countEdgesAL(vector <vector <int> > al);

//������� ������� �� ������� ��������� (����, �� ����� ����)
int vertexDegreeAM(vector <vector <int> > am, int v);

//������� ������� �� ������ ���������
int vertexDegreeAL(vector <vector <int> > al, int v);

//���������� ������� ����. �������� �� ������� ���������
bool isThereEulirianPathAM(vector <vector <int> > am);

//���������� ������� ����. �������� �� ������ ���������
bool isThereEulirianPathAL(vector <vector <int> > al);

//�������� �� �����. �������� �� ������� ��������� 
bool containsLoopAM(vector <vector <int> > am);

//����� � ������� �� ������� ���������
bool DFS_am(vector <vector <int> > am, int v, int u, bool* visited = NULL);

//����� � ������� �� ������ ���������
bool DFS_al(vector <vector <int> > al, int v, int u, bool* visited = NULL);

//����� � ������ �� ������� ���������
bool BFS_am(vector <vector <int> > am, int v, int u);

//����� � ������ �� ������ ���������
bool BFS_al(vector <vector <int> > al, int v, int u);

//�������� �������� (�� ������ ����� ����) (�� �������� � ����� ������ �����)
vector <int> dijkstra(vector <vector <int> > am, int v);

//����� ������������� ����� �� ������� ���������/������ ���������/������ �����
void print(vector <vector <int> > vec);