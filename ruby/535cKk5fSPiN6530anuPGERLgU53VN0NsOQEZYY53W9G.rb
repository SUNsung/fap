
        
            @set.should_not include('one')
    @set.should_not include('two')
    @set.should include('three')
  end
    
      it 'returns an Enumerator when passed no block' do
    enum = @set.send(@method)
    enum.should be_an_instance_of(Enumerator)
    
      def test_permutation
    a = @cls[]
    assert_equal(1, a.permutation(0).size)
    assert_equal(0, a.permutation(1).size)
    a = @cls[1,2,3]
    assert_equal(1, a.permutation(0).size)
    assert_equal(3, a.permutation(1).size)
    assert_equal(6, a.permutation(2).size)
    assert_equal(6, a.permutation(3).size)
    assert_equal(0, a.permutation(4).size)
    assert_equal(6, a.permutation.size)
    assert_equal(@cls[[]], a.permutation(0).to_a)
    assert_equal(@cls[[1],[2],[3]], a.permutation(1).to_a.sort)
    assert_equal(@cls[[1,2],[1,3],[2,1],[2,3],[3,1],[3,2]],
                 a.permutation(2).to_a.sort)
    assert_equal(@cls[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]],
                 a.permutation(3).sort.to_a)
    assert_equal(@cls[], a.permutation(4).to_a)
    assert_equal(@cls[], a.permutation(-1).to_a)
    assert_equal('abcde'.each_char.to_a.permutation(5).sort,
                 'edcba'.each_char.to_a.permutation(5).sort)
    assert_equal(@cls[].permutation(0).to_a, @cls[[]])
    
        assert_equal(-4427700000, Time.utc(-4427700000,12,1).year)
    assert_equal(-2**30+10, Time.utc(-2**30+10,1,1).year)
  end
    
      it 'understands 'a-bi' to mean a complex number with 'a' as the real part, '-b' as the imaginary' do
    '79-4i'.to_c.should == Complex(79,-4)
  end
    
      it 'allows for varying signs' do
    '+123.45e1'.to_f.should == +123.45e1
    '-123.45e1'.to_f.should == -123.45e1
    '123.45e+1'.to_f.should == 123.45e+1
    '123.45e-1'.to_f.should == 123.45e-1
    '+123.45e+1'.to_f.should == +123.45e+1
    '+123.45e-1'.to_f.should == +123.45e-1
    '-123.45e+1'.to_f.should == -123.45e+1
    '-123.45e-1'.to_f.should == -123.45e-1
  end
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
    end
Liquid::Template.register_filter OctopressLiquidFilters