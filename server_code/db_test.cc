#include"db.hpp"

using namespace blog_system;

void TestBlogTable()
{
  Json::StyledWriter writer;
  MYSQL* mysql = blog_system::MySQLInit();
  blog_system::BlogTable blog_table(mysql);
  bool ret = false;
  Json::Value blog;
  //测试插入
  blog["title"] = "我的第一篇博客";
  blog["content"] = "学习'拉啊拉'";
  blog["tag_id"] = 6;
  blog_table.Insert(blog);
  
  //测试查找
  //Json::Value blogs;
  //ret = blog_table.SelectAll(&blogs);
  //printf("secect all %d\n", ret);
  //printf("%s\n",writer.write(blogs).c_str());
  
  //测试查找2
  //ret = blog_table.SelectOne(1,&blog);
  //printf("select one %d\n",ret);
  //printf("blog:%s\n", writer.write(blog).c_str());

  //测试修改
  //blog["blog_id"] = 1;
  //blog["title"] = "第一篇 C";
  //blog["content"] = "1. scaca \n 'sdasd'";
  //ret = blog_table.Update(blog);
  //printf("updata %d",ret);
  
  //测试删除
  //ret = blog_table.Delete(1); 
  //printf("delete %d",ret);

  //blog_system::MySQLRelease(mysql);
}
void TestTagTable()
{
  Json::StyledWriter writer;
  MYSQL* mysql = blog_system::MySQLInit();
  blog_system::TagTable tag_table(mysql);
  bool ret = false;
  //测试插入
  Json::Value tag;
  tag["tag_name"] = "编程语言";
  ret = tag_table.Insert(tag);
  printf("insert %d\n",ret);
  
  //测试查找
  //Json::Value tags;
  //ret = tag_table.SelectAll(&tags);
  //printf("SelectAll %d\n", ret);
  //printf("tags:%s\n", writer.write(tags).c_str());

  //测试查找
  //ret = tag_table.Delete(1);
  //printf("delete %d\n",ret);

  blog_system::MySQLRelease(mysql);
}
int main()
{
  //TestBlogTable();
  TestTagTable();
  return 0;
}
