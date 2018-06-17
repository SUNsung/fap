
        
              topic.feature_topic_users(args)
    end
    
      def set_permission(permission_name, value)
    self.send('#{permission_name}=', value)
    save_and_refresh_staff_groups!
  end
    
    class TC_Enumerable < Test::Unit::TestCase
  def test_to_set
    ary = [2,5,4,3,2,1,3]
    
      def test_strftime_flags
    t = Time.mktime(2001, 10, 1, 2, 0, 0)
    assert_equal('01', t.strftime('%d'))
    assert_equal('01', t.strftime('%0d'))
    assert_equal(' 1', t.strftime('%_d'))
    assert_equal(' 1', t.strftime('%e'))
    assert_equal('01', t.strftime('%0e'))
    assert_equal(' 1', t.strftime('%_e'))
    assert_equal('AM', t.strftime('%p'))
    assert_equal('am', t.strftime('%#p'))
    assert_equal('am', t.strftime('%P'))
    assert_equal('AM', t.strftime('%#P'))
    assert_equal('02', t.strftime('%H'))
    assert_equal('02', t.strftime('%0H'))
    assert_equal(' 2', t.strftime('%_H'))
    assert_equal('02', t.strftime('%I'))
    assert_equal('02', t.strftime('%0I'))
    assert_equal(' 2', t.strftime('%_I'))
    assert_equal(' 2', t.strftime('%k'))
    assert_equal('02', t.strftime('%0k'))
    assert_equal(' 2', t.strftime('%_k'))
    assert_equal(' 2', t.strftime('%l'))
    assert_equal('02', t.strftime('%0l'))
    assert_equal(' 2', t.strftime('%_l'))
    t = Time.mktime(2001, 10, 1, 14, 0, 0)
    assert_equal('PM', t.strftime('%p'))
    assert_equal('pm', t.strftime('%#p'))
    assert_equal('pm', t.strftime('%P'))
    assert_equal('PM', t.strftime('%#P'))
    assert_equal('14', t.strftime('%H'))
    assert_equal('14', t.strftime('%0H'))
    assert_equal('14', t.strftime('%_H'))
    assert_equal('02', t.strftime('%I'))
    assert_equal('02', t.strftime('%0I'))
    assert_equal(' 2', t.strftime('%_I'))
    assert_equal('14', t.strftime('%k'))
    assert_equal('14', t.strftime('%0k'))
    assert_equal('14', t.strftime('%_k'))
    assert_equal(' 2', t.strftime('%l'))
    assert_equal('02', t.strftime('%0l'))
    assert_equal(' 2', t.strftime('%_l'))
    assert_equal('MON', t.strftime('%^a'))
    assert_equal('OCT', t.strftime('%^b'))
    
      it 'does not decode an int when fewer bytes than an int remain and the '*' modifier is passed' do
    'abc'.unpack(unpack_format('*')).should == []
  end
    
      it 'ignores spaces between directives' do
    '\x01\x02'.unpack('U U').should == [1, 2]
  end
end

    
          sleep
      after_sleep2 = true
    end
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end