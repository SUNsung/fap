
        
        describe 'Kernel#taint' do
  it 'returns self' do
    o = Object.new
    o.taint.should equal(o)
  end
    
        it 'returns the time at which the file was created when passed ?C' do
      Kernel.test(?C, @tmp_file).should == @tmp_file.ctime
    end
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true