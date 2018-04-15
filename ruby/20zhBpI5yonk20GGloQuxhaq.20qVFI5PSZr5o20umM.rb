
        
          def test_bom_16be
    assert_bom(['\xFE', '\xFF'], __method__)
  end
    
        h[1] = 1
    h[nil] = 99
    h['nil'] = nil
    z = [1,2]
    h[z] = 256
    assert_equal(1,       h[1])
    assert_equal('two',   h[2])
    assert_equal('three', h[3])
    assert_equal('self',  h[self])
    assert_equal('time',  h[t])
    assert_equal(99,      h[nil])
    assert_equal(nil,     h['nil'])
    assert_equal(nil,     h['koala'])
    assert_equal(256,     h[z])
  end
    
      it 'decodes the remaining doubles when passed the '*' modifier after another directive' do
    array = '333333\x15@ffffff\x22@'.unpack(unpack_format()+unpack_format('*'))
    array.should == [5.3, 9.2]
  end
    
      it 'decodes the number of bytes specified by the count modifier including whitespace bytes' do
    [ ['a bc',  ['a b', 'c']],
      ['a\fbc', ['a\fb', 'c']],
      ['a\nbc', ['a\nb', 'c']],
      ['a\rbc', ['a\rb', 'c']],
      ['a\tbc', ['a\tb', 'c']],
      ['a\vbc', ['a\vb', 'c']]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end
    
        respond_to do |format|
      format.html do
        serializable_resource = ActiveModelSerializers::SerializableResource.new(InitialStatePresenter.new(initial_state_params), serializer: InitialStateSerializer)
        @initial_state_json   = serializable_resource.to_json
      end
    
      context 'expands active buttons' do
    it 'finds selectors' do
      list = @buttons_list.map { |input| '#{input}:active' }
      list = list.join(', ')
      ruleset = 'content: #{list};'
    
    describe 'modular-scale' do
  before(:all) do
    ParserSupport.parse_file('library/modular-scale')
  end
    
          expect('.padding-implied-left').to have_rule(rule)
    end
  end
    
    describe 'size' do
  before(:all) do
    ParserSupport.parse_file('library/size')
  end