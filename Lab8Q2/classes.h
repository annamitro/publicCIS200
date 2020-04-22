#pragma once

template <class ItemType>
class A 
{
    ItemType valuea;

public:  
        ItemType getValuea() const { return valuea; }
        void setValuea(ItemType x) { valuea = x; }
        A(ItemType aVal);
        // copy constructor  
        A(const A<ItemType>& x);
};

template <class ItemType>
class B : public A<ItemType>
{
    ItemType valueb;

public:  
        ItemType getValueb() const { return valueb; }  
        void setValueb(ItemType x) { valueb = x; }
        B(ItemType aVal, ItemType bVal) : A<ItemType>{ aVal }
        {
            setValueb(bVal);
        }
      // copy constructor  
        B(const B& x) : A<ItemType>(x)
        {
            setValueb(x.valueb);
        }
};

template<class ItemType>
A<ItemType>::A(ItemType aVal)
{
    setValuea(aVal);
}
template<class ItemType>
A<ItemType>::A(const A<ItemType>& x)
{
    setValuea(x.valuea);
}