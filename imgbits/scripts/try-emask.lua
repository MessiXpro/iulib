function time(f) start = user_time(); f() return user_time()-start end

function rle_to_pix(ri)
    local temp = bytearray:new()
    rle.convert(temp,ri)
    local temppix = lepton.of_array(temp)
    return lepton.pixConvertTo1(temppix,128)
end

dinit(700,700)

ri_orig = RLEImage:new()
rle.read(ri_orig,"images/twocol600.png")
mask = RLEImage:new()
ri = RLEImage:new()

pix_orig = lepton.pixRead("images/twocol.png")
pix_orig = lepton.pixConvertTo1(pix_orig,128)
pix_orig = lepton.pixInvert(pix_orig,pix_orig)

for r=1,200,7 do
    rle.circular_mask(mask,r)
    rle.dshow(mask)
    ri:copy(ri_orig)
    t_mask = time(function() rle.erode_mask(ri,mask,0,0) end)
    rle.dshow(ri)
    ri:copy(ri_orig)
    t_rect = time(function() rle.erode_rect(ri,r,r) end)
    rle.dshow(ri)

    pix = lepton.pixClone(pix_orig)
    t_lept = time(function() lepton.pixErodeCompBrick(pix,pix,r,r) end)
    lepton.pixDestroy(pix)

    pix = lepton.pixClone(pix_orig)
    pixmask = rle_to_pix(mask)
    sel = lepton.selCreateFromPix(pixmask,0,0,"c"..r)
    t_leptmask = time(function() lepton.pixErode(pix,pix,sel) end)
    lepton.pixDestroy(pix)

    print(r,t_mask,t_rect,t_lept,t_leptmask)
end
