
        
          it 'returns subclass instances when called on a subclass' do
    StringSpecs::MyString.new('').swapcase.should be_an_instance_of(StringSpecs::MyString)
    StringSpecs::MyString.new('hello').swapcase.should be_an_instance_of(StringSpecs::MyString)
  end
end
    
      it 'allows for underscores, even in the decimal side' do
    '1_234_567.890_1'.to_f.should == 1_234_567.890_1
  end
    
      it 'ignores trailing characters' do
    '2 foo'.to_r.should == Rational(2, 1)
    '1765, '.to_r.should == Rational(1765, 1)
  end
    
      it 'taints the result when self is tainted' do
    ['h', 'hello'].each do |str|
      tainted_str = str.dup.taint
    
    describe 'String#tr!' do
  it 'modifies self in place' do
    s = 'abcdefghijklmnopqR'
    s.tr!('cdefg', '12').should == 'ab12222hijklmnopqR'
    s.should == 'ab12222hijklmnopqR'
  end
    
      it 'normalizes code points in the string according to the form that is specified' do
    @accented_f.unicode_normalize(:nfc).should == '\u1e9b\u0323'
    @accented_f.unicode_normalize(:nfd).should == '\u017f\u0323\u0307'
    @accented_f.unicode_normalize(:nfkc).should == '\u1e69'
    @accented_f.unicode_normalize(:nfkd).should == '\u0073\u0323\u0307'
  end
    
    describe 'String#unpack with format 'A'' do
  it_behaves_like :string_unpack_basic, 'A'
  it_behaves_like :string_unpack_no_platform, 'A'
  it_behaves_like :string_unpack_string, 'A'
  it_behaves_like :string_unpack_Aa, 'A'
    
      it 'decodes the number of bits specified by the count modifier' do
    [ ['\x00',     'B0',  ['']],
      ['\x80',     'B1',  ['1']],
      ['\x7f',     'B2',  ['01']],
      ['\x8f',     'B3',  ['100']],
      ['\x7f',     'B4',  ['0111']],
      ['\xff',     'B5',  ['11111']],
      ['\xf8',     'B6',  ['111110']],
      ['\x9c',     'B7',  ['1001110']],
      ['\xbd',     'B8',  ['10111101']],
      ['\x80\x80', 'B9',  ['100000001']],
      ['\x80\x70', 'B10', ['1000000001']],
      ['\x80\x20', 'B11', ['10000000001']],
      ['\x8f\x10', 'B12', ['100011110001']],
      ['\x8f\x0f', 'B13', ['1000111100001']],
      ['\x80\x0f', 'B14', ['10000000000011']],
      ['\x80\x8f', 'B15', ['100000001000111']],
      ['\x0f\x81', 'B16', ['0000111110000001']]
    ].should be_computed_by(:unpack)
  end
    
      desc 'Rollback to previous release.'
  task :rollback do
    %w{ starting started
        reverting reverted
        publishing published
        finishing_rollback finished }.each do |task|
      invoke 'deploy:#{task}'
    end
  end
end