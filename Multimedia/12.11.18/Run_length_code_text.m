clear;
clc;

fileID = fopen('D:\Horidas\Multimedia\12.11.18\test.txt', 'r');
formatSpec = '%c';
fl = fscanf(fileID, formatSpec);

fclose(fileID);

[x,r] = size(fl);


fileID = fopen('D:\Horidas\Multimedia\12.11.18\test2.txt', 'w');
    x = 0;
    y = '_';
    for j = 1:r
        if j == 1
            y = fl(j);
            x = 0;
        end
        if(y == fl(j) )
            x = x + 1;
        end
        if(y ~= fl(j))
            
            if(y ~= '_')
                
                spec = '%c %d ';
                fprintf(fileID, '%c %d\n', y, x);
            end
            y = fl(j);
            x = 1;
        end
        if j == r
            spec = '%d %d ';
            fprintf(fileID, '%c %d\n', y, x);
        end
        
    end

fclose(fileID);
            
                
fileID = fopen('D:\Horidas\Multimedia\12.11.18\test2.txt', 'r');
formatSpec = '%c %d%*c';

rex = fscanf(fileID, formatSpec);
fclose(fileID);

k = 1;
p = 0;
i = 1;
j = 1;
while j <= r
    nimg(j:j+rex(k+1)-1) = rex(k);
    j = j + rex(k+1)
    k = k + 2;
end

fileID = fopen('output.txt', 'w');
formatSpec = '%c';

for i = 1:r
    fprintf(fileID, formatSpec, nimg(i));
end

fclose(fileID);

