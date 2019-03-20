
        
              it 'displays character if argument is a single character string' do
        format('%c', 'a').should == 'a'
      end
    
    describe 'Kernel.sleep' do
  it 'needs to be reviewed for spec completeness'
end

    
      it 'sets the tainted bit' do
    o = Object.new
    o.taint
    o.tainted?.should == true
  end