# for i in range(24):
#     for j in range(60):
#         for k in range(60):
#             if i <10 and j<10 and k <10 :
#                 print(f'0{i}:0{j}:0{k}')
#                 # print ('case1')
#                 continue
#             if j<10 and k<10 : 
#                 print(f'{i}:0{j}:0{k}')
#                 # print ('case2')
#                 continue
            
#             if i <10 and k<10 : 
#                 print(f'0{i}:{j}:0{k}')
#                 # print ('case4')
#                 continue

#             if i <10 and j<10:
#                 print(f'0{i}:0{j}:{k}')
#             # print ('case7')
#                 continue
#             if i <10:
#                 print(f'0{i}:{j}:{k}')
#                 #print ('case5')
#                 continue
#             if j <10:
#                 print(f'{i}:0{j}:{k}')
#                 # print ('case6')
#                 continue

#             if k <10:
#                 print(f'{i}:{j}:0{k}')
#                 continue
#             # print ('case3')


for i in range(24):
    for j in range(60):
        
        if i <10 and j<10:
            print(f'0{i}:0{j}')
            # print ('case1')
            
        elif i >=10 and j<10:
            print(f'{i}:0{j}')
            # print("case2")

        elif i<10 and j>=10:
            print(f'0{i}:{j}')
            
        else :
            print(f'{i}:{j}')
            # print('case3')
            

        
