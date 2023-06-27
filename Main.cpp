#include <iostream>

using namespace std;

// â������ sokoban
// ���� �����
//		 <��Ģ>
//		WASD - �����¿� �̵� 
//		��   -  #
//		�÷��̾� - p
//		���� - o O
//		������ .
//		��� ���ڸ� �������� ��ġ�ϸ� ���� ����
//		���ڴ� �м��� �ְ�, ��� �� ����.


//\n - ����
//\ - ����

//	�ʱ�ȭ()
//	{
//		���ڿ� �迭 -> ���������� ����
//	}

//	�׸���()
//	{
//		for (����)
//		{
//			for (����)
//			{
//				�迭 �׸���;
//			}
//			�ٹٲ�
//		}
//	}

//	���� ����()
//	{
//		for (�迭 ��ü)
//		{
//			0�� �ϳ��� ������ ����
//		}
//		����;
//	}
//
//	�Է� ó��()
//	{
//		w,a,s,d �Է��� �޾Ƽ� Ȯ��
//	}
//	
//	����()
//	{
//	
//	}

const char gStagedata[]
{
	"\
########\n\
# .. p #\n\
# oo   #\n\
#      #\n\
########"
};

const int gStageWidth = 8;
const int gStageHeight = 5;

enum Object
{
	OBJ_SPACE,
	OBJ_WALL,
	OBJ_GOAS,
	OBJ_BLOCK,
	OBJ_BLOCK_ON_GOAL,
	OBJ_PLAYER,
	OBJ_PLAYER_ON_GOAL,

	OBJ_UNKNOWN
};

void Initialize(Object* stage, int w, int h, const char* data);
void Draw(const Object* stage, int w, int h);
void Update(Object* stage, int w, int h);
bool IsClear(const Object* stage, int w, int h);


int main()
{
	Object* stage = new Object[gStageWidth * gStageHeight];

	Initialize(stage, gStageWidth, gStageHeight, gStagedata);

	while (true)
	{
		Draw(stage, gStageWidth, gStageHeight);

		if (IsClear(stage, gStageWidth, gStageHeight))
		{
			break;
		}

		cout << "a:Left, d:Right, w:Up, s:Down. command?" << endl;
		
		char input;
		cin >> input;

		Update(stage, input, gStageWidth, gStageHeight);

	}

	cout << "Congraturation! You Win!" << endl;

	delete[] stage;
	stage = nullptr;
}

void Initialize(Object* stage, int w, int h, const char* data)
{
}

void Draw(const Object* stage, int w, int h)
{
}

void Update(Object* stage, int w, int h)
{
}

bool IsClear(const Object* stage, int w, int h)
{
	return false;
}
