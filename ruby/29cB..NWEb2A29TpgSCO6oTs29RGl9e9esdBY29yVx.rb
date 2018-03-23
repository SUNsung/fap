
        
        describe :string_unpack_64bit_le_signed, shared: true do
  it 'decodes a long with most significant bit set as a negative number' do
    '\x00\xcc\x00\xbb\x00\xaa\x00\xff'.unpack(unpack_format()).should == [-71870673923814400]
  end
end
    
      it 'does not result in a deadlock' do
    t = Thread.new do
      100.times { Thread.stop }
    end