/* * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                 */
/*  Program:  Simple Inventory System              */
/*  Author:   Christine Laurendeau                 */
/*  Date:     28-JUN-2016                          */
/*                                                 */
/*  (c) 2016 Christine Laurendeau                  */
/*  All rights reserved.  Distribution and         */
/*  reposting, in part or in whole, without the    */
/*  written consent of the author, is illegal.     */
/*                                                 */
/* * * * * * * * * * * * * * * * * * * * * * * * * */

#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

#include "CustArray.h"


CustArray::~CustArray()
{
	//cout<<"destruct CustArray: " << size <<endl;
	for (int i = 0; i < size; ++i)
	{
		delete elements[i];
	}
}

CustArray::CustArray()
{
  size = 0;
}

int CustArray::getSize() { return size; }

Customer* CustArray::get(int index)
{
  if (index < 0 || index >= size){
	return NULL;
  } else{
	return elements[index];
  }
}

void CustArray::add(Customer* cust)
{
  if (size >= MAX_ARR)
    return;

  elements[size++] = cust;
}


