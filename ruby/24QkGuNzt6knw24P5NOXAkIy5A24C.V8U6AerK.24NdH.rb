
        
        # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
          def convert(content)
        document = Kramdown::Document.new(content, @config)
        html_output = document.to_html.chomp
        if @config['show_warnings']
          document.warnings.each do |warning|
            Jekyll.logger.warn 'Kramdown warning:', warning.sub(%r!^Warning:\s+!, '')
          end
        end
        html_output
      end
    end
  end
end

    
    module Jekyll
  module Deprecator
    extend self
    
          options[:only_patterns] = [/\Agetting-started\//, /\Alayout\//, /\Acontent\//, /\Acomponents\//, /\Autilities\//, /\Amigration\//]
    end
    
          options[:container] = '.container'
    end
  end
end

    
        version 'Java' do
      self.base_url = 'https://api.haxe.org/java/'
    end
    
      def test_hidden_key
    bug6899 = '[ruby-core:47253]'
    foo = 'foor'
    bar = 'bar'
    assert_nothing_raised(NotImplementedError, bug6899) do
      2000.times {eval %[(foo..bar) ? 1 : 2]}
    end
    foo = bar
  end
    
        line = __LINE__+5
    e = assert_raise(NoMethodError) do
      1.upto 0 do
      end
        .
        foo(
          1,
          2,
        )
    end
    assert_equal(line, e.backtrace_locations[0].lineno)
  end
    
      describe 'RDATA()' do
    it 'returns the struct data' do
      a = @s.wrap_struct(1024)
      @s.get_struct_rdata(a).should == 1024
    end
    
      def add_file(name, mode) # :yields: io
    check_closed
    
      def test_implicit_upper_case_proxy
    use_ui @stub_ui do
      ENV['HTTP_PROXY'] = @proxy_uri
      fetcher = Gem::RemoteFetcher.new nil
      @fetcher = fetcher
      assert_data_from_proxy fetcher.fetch_path(@server_uri)
    end
  end
    
      it 'decodes the remaining shorts when passed the '*' modifier' do
    'abcd'.unpack(unpack_format('*')).should == [25185, 25699]
  end
    
    module Jekyll
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
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