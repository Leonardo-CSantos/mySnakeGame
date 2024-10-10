#pragma once

template <class T>
class myList
{
private:
    class Element
    {
    private:
        T* data;
        Element* nextElement;

    public:
        Element (): data (nullptr), nextElement (nullptr)
        {
        }
        ~Element ()
        {
            data = nullptr;
            nextElement = nullptr;
        }

        void setData (T* data)
        {
            this->data = data;
        }

        T* getData ()
        {
            return data;
        }

        void setNext (Element* next)
        {
            nextElement = next;
        }

        Element* getNext ()
        {
            return nextElement;
        }
    };

    Element* firstElement;
    Element* lastElement;
    int nElements; //Length of the list

public:
    myList (): firstElement(nullptr), lastElement(nullptr), nElements(0)
    {
    }

    ~myList ()
    {
        clearList ();
    }

    void pushBack (T* data)
    {
        if (data != nullptr)
        {
            Element* aux = new Element ();
            aux->setData (data);
            if (firstElement == nullptr)
                firstElement = aux;
            else
                lastElement->setNext(aux);
            lastElement = aux;
        }
        nElements++;
    }

    int getLength ()
    {
        return nElements;
    }

    //Returns the item in the given position, starting from 0
    T* getData (int position)
    {
        if (firstElement == nullptr || position < 0 || position > nElements)
            return nullptr;
        Element* aux = firstElement;
        for (int i = 0; i < position; i++)
            aux = aux->getNext();
        return aux->getData();
    }

    //Removes an item from the list, returns true if the item was removed
    bool removeFromList (T* data)
    {
        Element* aux = firstElement;
        Element* previous = nullptr;
        while (aux != nullptr)
        {
            if (aux->getData() == data)
            {
                if (previous != nullptr)
                    previous->setNext(aux->getNext());
                delete aux;
                nElements--;
                return true;
            }
            previous = aux;
            aux = aux->getNext();
        }
        return false;
    }

    void clearList ()
    {
        for(int i = 0; i < nElements; i++)
        {
            Element* aux = firstElement;
            firstElement = firstElement->getNext();
            delete aux;
        }
        nElements = 0;
    }
};
