#include <iostream>

using namespace std;

// 창고지기 sokoban
// 게임 만들기
//		 <규칙>
//		WASD - 상하좌우 이동 
//		벽   -  #
//		플레이어 - p
//		상자 - o O
//		목적지 .
//		모든 상자를 목적지에 배치하면 게임 종료
//		상자는 밀수만 있고, 당길 수 없음.


//\n - 개행
//\ - 띄어쓰기

//	초기화()
//	{
//		문자열 배열 -> 열거형으로 저장
//	}

//	그리기()
//	{
//		for (세로)
//		{
//			for (가로)
//			{
//				배열 그리기;
//			}
//			줄바꿈
//		}
//	}

//	게임 종료()
//	{
//		for (배열 전체)
//		{
//			0가 하나라도 있으면 실패
//		}
//		성공;
//	}
//
//	입력 처리()
//	{
//		w,a,s,d 입력을 받아서 확인
//	}
//	
//	로직()
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
