
        
            def top_level_tasks
      if tasks_without_stage_dependency.include?(@top_level_tasks.first)
        @top_level_tasks
      else
        @top_level_tasks.unshift(ensure_stage.to_s)
      end
    end
    
          def warn_set_scm_is_deprecated
        $stderr.puts(<<-MESSAGE)
[Deprecation Notice] `set :scm, #{scm_name.inspect}` is deprecated.
To ensure your project is compatible with future versions of Capistrano,
remove the :scm setting and instead add these lines to your Capfile after
`require 'capistrano/deploy'`:
    
          def add_property(key, value)
        if respond_to?('#{key}=')
          send('#{key}=', value)
        else
          set(key, value)
        end
      end
    
          def left_diff_line_number(id, line)
        if line =~ /^@@/
          m, li                  = *line.match(/\-(\d+)/)
          @left_diff_line_number = li.to_i
          @current_line_number   = @left_diff_line_number
          ret                    = '...'
        elsif line[0] == ?-
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        elsif line[0] == ?+
          ret = ' '
        else
          ret                    = @left_diff_line_number.to_s
          @left_diff_line_number += 1
          @current_line_number   = @left_diff_line_number - 1
        end
        ret
      end
    
      test 'creating page is blocked' do
    Precious::App.set(:wiki_options, { allow_editing: false})
    post '/create', :content => 'abc', :page => 'D',
         :format             => 'markdown', :message => 'def'
    assert !last_response.ok?
    
        @wiki.clear_cache
    page2 = @wiki.page('B')
    assert_not_equal page1.version.sha, page2.version.sha
    assert_equal 'INITIAL', page2.raw_data.strip
#    assert_equal 'Revert commit #7c45b5f', page2.version.message
  end
    
      def self.assets_path
    ::File.expand_path('gollum/public', ::File.dirname(__FILE__))
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
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)
    
      let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }
    
            expect(cop.highlights).to eq([close])
        expect(cop.messages)
          .to eq([described_class::SAME_LINE_MESSAGE])
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode