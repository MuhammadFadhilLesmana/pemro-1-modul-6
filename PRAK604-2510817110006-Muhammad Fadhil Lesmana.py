kode = input() 
pesan = input() 

if len(kode)!=len(pesan): 
    print("Panjang Kalimat berbeda, pesan palsu") 
else :
    hasil = "" 
    bintang = 0 
    pagar = 0 
    
    for i,j in zip(kode, pesan): 
        if i==" " and j==" ": 
            continue 
 
        if i==j: 
            hasil += "*" 
            bintang += 1
        else : 
            hasil+= "#" 
            pagar += 1 
 
    print(hasil) 
    print(f"* = {bintang}") 
    print(f"# = {pagar}") 
 
    if bintang >= pagar: 
        print("Pesan Asli") 
    else: 
        print("Pesan Palsu")
