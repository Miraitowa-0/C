#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"
void InitContact(struct Contact* ps)
{
	ps->data = (struct PeoInfo*)malloc(3 * sizeof(struct PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;//����ͨѶ¼�������Ϊ3��Ԫ��
}
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity)
	{
		struct PeoInfo* ptr = realloc(ps->data, (ps->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			ps->data = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
void AddContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼����
	//������ˣ������ӿռ�
	//���û����ʲô�����ø�
	CheckCapacity(ps);
	printf("���������֣�\n");
	scanf("%s", ps->data[ps->size].name);
	printf("���������䣺\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰��\n");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ��\n");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		//��ӡ����
		printf("%-6s\t%-4s\t%-5s\t%-12s\t%-18s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		int i = 0;
		for (i = 0; i < ps->size; i++)
		{
			//��ӡ����
			printf("%-6s\t%-2d\t%-4s\t%-12s\t%-20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

//FindByName()��ѯ���� ��ѯ��������Ӧ���±�
static int FindByName(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;//�ҵ� �����±�i
		}
	}
	return -1;//�Ҳ��� ����-1
}

void DelContact(struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("������Ҫɾ�������֣�");
	scanf("%s", &name);
	//1.����Ҫɾ������ �������ĸ�λ��
	//�ҵ��˷�����������ӦԪ�ص��±�
	//�Ҳ�������-1
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫɾ�����˲�����\n");
	}
	else
	{
		//ɾ��
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}

}

void SearchContact(const struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("������Ҫ��ѯ�����֣�");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	else
	{
		////��ӡ
		printf("%-6s\t%-4s\t%-5s\t%-12s\t%-18s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-6s\t%-2d\t%-4s\t%-12s\t%-20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}

}

void ModifyContact(struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("������Ҫ�޸ĵ����֣�");
	scanf("%s", name);
	pos = FindByName(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸�����Ϣ������\n");

	}
	else
	{
		printf("���������֣�\n");
		scanf("%s", ps->data[pos].name);
		printf("���������䣺\n");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�\n");
		scanf("%s", ps->data[pos].sex);
		printf("������绰��\n");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ��\n");
		scanf("%s", ps->data[pos].addr);
		ps->size++;
		printf("�޸ĳɹ�\n");
	}
}

void DestoryContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;

}