image = bytearray:new(30,30)
fill(image,0)
image:put(10,10,255)
dilate_rect(image,18,18)
write_png("out_o.png",image)
