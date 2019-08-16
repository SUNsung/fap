
        
        # Searches and reads file present on GitLab installation directory
module Gitlab
  module Template
    module Finders
      class GlobalTemplateFinder < BaseTemplateFinder
        def initialize(base_dir, extension, categories = {})
          @categories = categories
          @extension  = extension
          super(base_dir)
        end
    
        # Ensure the file is removed
    project.bfg_object_map.remove!
    notification_service.repository_cleanup_failure(project, user, error)
  end
    
        context 'when user cannot update_project_member' do
      before do
        allow(presenter).to receive(:can?).with(user, :update_project_member, presenter).and_return(false)
        allow(presenter).to receive(:can?).with(user, :override_project_member, presenter).and_return(false)
      end
    
      def test_display_eh_ignore
    assert @co.display?
    
        const = RDoc::Constant.new 'CONST', nil, nil
    top_level.add_constant const
    
    end
    
      def test_completion_journey
    @line_editor.completion_proc = proc { |word|
      %w{
        foo_bar
        foo_bar_baz
      }
    }
    input_keys('foo')
    assert_byte_pointer_size('foo')
    assert_cursor(3)
    assert_cursor_max(3)
    assert_line('foo')
    input_keys('\C-n')
    assert_byte_pointer_size('foo')
    assert_cursor(3)
    assert_cursor_max(3)
    assert_line('foo')
    input_keys('\C-n')
    assert_byte_pointer_size('foo_bar')
    assert_cursor(7)
    assert_cursor_max(7)
    assert_line('foo_bar')
    input_keys('\C-n')
    assert_byte_pointer_size('foo_bar_baz')
    assert_cursor(11)
    assert_cursor_max(11)
    assert_line('foo_bar_baz')
    input_keys('\C-n')
    assert_byte_pointer_size('foo')
    assert_cursor(3)
    assert_cursor_max(3)
    assert_line('foo')
    input_keys('\C-n')
    assert_byte_pointer_size('foo_bar')
    assert_cursor(7)
    assert_cursor_max(7)
    assert_line('foo_bar')
    input_keys('_\C-n')
    assert_byte_pointer_size('foo_bar_')
    assert_cursor(8)
    assert_cursor_max(8)
    assert_line('foo_bar_')
    input_keys('\C-n')
    assert_byte_pointer_size('foo_bar_baz')
    assert_cursor(11)
    assert_cursor_max(11)
    assert_line('foo_bar_baz')
    input_keys('\C-n')
    assert_byte_pointer_size('foo_bar_')
    assert_cursor(8)
    assert_cursor_max(8)
    assert_line('foo_bar_')
  end
    
    class Reline::MacroTest < Reline::TestCase
  def setup
    @config = Reline::Config.new
    @line_editor = Reline::LineEditor.new(@config)
    @line_editor.instance_variable_set(:@screen_size, [24, 80])
    @output = @line_editor.output = File.open(IO::NULL, 'w')
  end
    
        private
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      # Use default logging formatter so that PID and timestamp are not suppressed.
  config.log_formatter = ::Logger::Formatter.new
end

    
      namespace :install do
    GEMS_AND_ROOT_DIRECTORIES.each do |gem, directory|
      desc 'Build and install #{gem} as local gem'
      task gem => package(gem, '.gem') do
        sh 'gem install #{package(gem, '.gem')}'
      end
    end
    
          def mask_authenticity_token(session)
        token = set_token(session)
        mask_token(token)
      end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
              if node.blockarg_type?
            correct_for_blockarg_type(node)
          else
            lambda do |corrector|
              variable_name = if node.optarg_type?
                                node.node_parts[0]
                              else
                                # Extract only a var name without splat (`*`)
                                node.source.gsub(/\A\*+/, '')
                              end
              corrector.replace(node.loc.name, '_#{variable_name}')
            end
          end
        end
    
            private
    
        context 'in head position in a sequence against literal (bug #5470)' do
      let(:pattern) { '(int ($_ ...))' }
      let(:ruby) { '42' }
    
          expect_offense(<<~RUBY)
        def method(arg)
                   ^^^ #{message}
          1
        end
      RUBY
    end
    
        def any_symlink?(path)
      while path != File.dirname(path)
        if File.symlink?(path)
          warn 'Warning: #{path} is a symlink, which is not allowed.'
          return true
        end
        path = File.dirname(path)
      end
      false
    end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
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
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end