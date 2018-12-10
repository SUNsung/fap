
        
                  # Generate default options for collection helpers, such as :checked and
          # :disabled.
          def default_html_options_for_collection(item, value)
            html_options = @html_options.dup
    
    module Gitlab
  module Ci
    module Pipeline
      # Class for preloading data associated with pipelines such as commit
      # authors.
      class Preloader
        def self.preload!(pipelines)
          ##
          # This preloads all commits at once, because `Ci::Pipeline#commit` is
          # using a lazy batch loading, what results in only one batched Gitaly
          # call.
          #
          pipelines.each(&:commit)
    
        describe '-' do
      it 'left-justifies the result of conversion if width is specified' do
        format('%-10b', 10).should == '1010      '
        format('%-10B', 10).should == '1010      '
        format('%-10d', 112).should == '112       '
        format('%-10i', 112).should == '112       '
        format('%-10o', 87).should == '127       '
        format('%-10u', 112).should == '112       '
        format('%-10x', 196).should == 'c4        '
        format('%-10X', 196).should == 'C4        '
    
    describe 'Kernel#taint' do
  it 'returns self' do
    o = Object.new
    o.taint.should equal(o)
  end
    
      it 'sets the return value of the catch block to a value specified as second parameter' do
    res = catch :blah do
      throw :blah, :return_value
    end
    res.should == :return_value
  end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end