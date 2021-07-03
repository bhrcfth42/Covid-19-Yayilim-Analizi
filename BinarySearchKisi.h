#ifndef BinarySearchKisi_H
#define BinarySearchKisi_H
int binarySearchKisi(int start, int end, int aranan) 
{ 
    if (end >= start) { 
        int mid = start + (end - start) / 2; 
  
        if (kisi[mid].id == aranan) 
            return mid; 

        if (kisi[mid].id > aranan) 
            return binarySearchKisi(start, mid - 1, aranan); 
            
        return binarySearchKisi(mid + 1, end, aranan); 
    }
    return -1; 
}
#endif
