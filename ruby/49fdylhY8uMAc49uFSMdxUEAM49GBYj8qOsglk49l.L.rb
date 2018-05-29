
        
          include TestEOF
  def open_file(content)
    Tempfile.create('test-eof') {|f|
      f << content
      f.rewind
      yield f
    }
  end
  alias open_file_rw open_file
    
        assert_raise(ArgumentError) {
      set.subset?([2])
    }
    
      it 'handles bad leap seconds by carrying values forward' do
    with_timezone 'UTC' do
      time = Time.send(@method, 2017, 7, 5, 23, 59, 60)
      time.sec.should == 0
      time.min.should == 0
      time.hour.should == 0
      time.day.should == 6
      time.month.should == 7
    end
  end
    
    ###
### dependencies
###
    
        def define
      define_flush_errors
      define_getters
      define_setter
      define_query
      register_new_attachment
      add_active_record_callbacks
      add_paperclip_callbacks
      add_required_validations
    end