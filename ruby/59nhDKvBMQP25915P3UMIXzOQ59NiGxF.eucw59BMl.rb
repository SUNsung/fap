
        
              def []=(key, value)
        super(convert_key(key), value)
      end
    
            while true
          begin
            if Platform.windows?
              # Windows doesn't support non-blocking reads on
              # file descriptors or pipes so we have to get
              # a bit more creative.
    
        set = Set.new(1..10)
    enum = set.keep_if
    assert_equal(set.size, enum.size)
    assert_same(set, enum.each { |i| i % 3 != 0 })
    assert_equal(Set[1,2,4,5,7,8,10], set)
  end
    
    describe :string_unpack_32bit_be, shared: true do
  it 'decodes one int for a single format character' do
    'dcba'.unpack(unpack_format).should == [1684234849]
  end
    
        t.join
  end
    
      describe '::binary_osxfuse_installed?' do
    it 'returns false if fuse.h does not exist' do
      allow(File).to receive(:exist?).and_return(false)
      expect(described_class).not_to be_binary_osxfuse_installed
    end
    
            unless guarded && environment.var(name)
          environment.set_var(name, val.perform(environment))
        end
    
          def started?
        true
      end