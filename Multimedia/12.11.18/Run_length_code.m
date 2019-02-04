clear;
clc;

img = imread('new.bmp');
%img = im2bw(img);
img = rgb2gray(img);
figure, imshow(img);

[r, c] = size(img);

% m = containers.Map;
% m('one') = 1;
% m('2');

% ans = zeros(256);
fileID = fopen('test.txt', 'w');
for i = 1:r
    x = 0;
    y = -1;
    for j = 1:c
        if j == 1
            y = img(i, j);
            x = 0;
        end
        if(y == img(i, j) )
            x = x + 1;
        end
        if(y ~= img(i, j))
            
            if(y ~= -1)
                
                spec = '%d %d ';
                fprintf(fileID, '%d %d\n', y, x);
            end
            y = img(i, j);
            x = 1;
        end
        if j == c
            spec = '%d %d ';
            fprintf(fileID, '%d %d\n', y, x);
        end
        
    end
end
fclose(fileID);
            
                
fileID = fopen('test.txt', 'r');
%sizeA = [Inf 2];
formatSpec = '%d %d';

rex = fscanf(fileID, formatSpec);
fclose(fileID);

nimg = zeros(r, c);
k = 1;
p = 0;
i = 1;
while i <= r
   j = 1;
   while j <= c
        nimg(i, j:j+rex(k+1)-1) = rex(k);
        j = j + rex(k+1)
        k = k + 2;
        %j = j + 1;
   end
   i = i + 1;
end
nimg = uint8(nimg);
figure, imshow(nimg);
imwrite(nimg, 'new_file.bmp');
