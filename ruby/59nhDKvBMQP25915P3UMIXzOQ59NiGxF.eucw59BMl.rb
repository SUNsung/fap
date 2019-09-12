
        
            context 'running workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
        stub.instance_of(HuginnScheduler).setup
        stub.instance_of(DelayedJobWorker).setup
      end
    
          it 'works with OSX line endings' do
        event = event_with_contents('one,two\r1,2\r2,3')
        expect { @checker.receive([event]) }.to change(Event, :count).by(2)
        expect(Event.last.payload).to eq(@checker.options['data_key'] => {'one' => '2', 'two' => '3'})
      end
    
      class FrozenData < LoadData
    def marshal_load(data)
      super
      data.instance_variables.each do |iv|
        instance_variable_set(iv, data.instance_variable_get(iv))
      end
      freeze
    end
  end
    
    
if ARGV.delete '--print' then
  $raccs_print_type = true
  printonly = true
else
  printonly = false
end
    
      def test_sqrt
    assert_equal 1, CMath.sqrt(1)
    assert_equal CMath.sqrt(1i), CMath.sqrt(1.0i), '[ruby-core:31672]'
    assert_equal Complex(0,2), CMath.sqrt(-4.0)
    assert_equal Complex(0,2), CMath.sqrt(-4)
    assert_equal Complex(0,2), CMath.sqrt(Rational(-4))
    assert_equal Complex(0,3), CMath.sqrt(-9.0)
    assert_equal Complex(0,3), CMath.sqrt(-9)
    assert_equal Complex(0,3), CMath.sqrt(Rational(-9))
    assert_in_delta (1.272019649514069+0.7861513777574233i), CMath.sqrt(1+2i)
    assert_in_delta 3.0i, CMath.sqrt(-9)
    assert_raise_with_message(TypeError, 'Numeric Number required') { CMath.sqrt('1') }
  end
    
        @inflator.finish do |chunk|
      @chunks << chunk
    end
  end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        # Outputs a single category as an <a> link.
    #
    #  +category+ is a category string to format as an <a> link
    #
    # Returns string
    #
    def category_link(category)
      dir = @context.registers[:site].config['category_dir']
      '<a class='category' href='/#{dir}/#{category.to_url}/'>#{category}</a>'
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
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
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