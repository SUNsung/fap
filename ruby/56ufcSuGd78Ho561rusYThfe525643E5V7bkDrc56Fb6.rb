
        
            def ==(other)
      other.is_a?(self.class) && filters == other.filters
    end
    
            css('a.is-button > h3').each do |node|
          node.parent.content = node.content
        end
    
            if mod
          if name == 'Index'
            return slug.split('/')[1..-2].join('/')
          elsif name == 'Angular'
            return slug.split('/').last.split('-').first
          end
        end
    
        private
    
        def create
      authorize ReportNote, :create?
    
    class Api::PushController < Api::BaseController
  include SignatureVerification
    
        context 'on a post from a stranger' do
      before do
        @target = eve.post :status_message, text: 'AWESOME', to: eve.aspects.first.id
      end
    
      describe '#read_all' do
    let(:post) { FactoryGirl.create(:status_message) }
    
        if run? && ARGV.any?
      require 'optparse'
      OptionParser.new { |op|
        op.on('-p port',   'set the port (default is 4567)')                { |val| set :port, Integer(val) }
        op.on('-o addr',   'set the host (default is #{bind})')             { |val| set :bind, val }
        op.on('-e env',    'set the environment (default is development)')  { |val| set :environment, val.to_sym }
        op.on('-s server', 'specify rack server/handler (default is thin)') { |val| set :server, val }
        op.on('-q',        'turn on quiet mode (default is off)')           {       set :quiet, true }
        op.on('-x',        'turn on the mutex lock (default is off)')       {       set :lock, true }
      }.parse!(ARGV.dup)
    end
  end
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to be_nil
    expect(headers['Content-Security-Policy-Report-Only']).to eq('connect-src 'self'; default-src none; img-src 'self'; report-uri /my_amazing_csp_report_parser; script-src 'self'; style-src 'self'')
  end
    
          def is_edit_page
        true
      end
    
          def next_link
        label = 'Next &raquo;'
        if @versions.size == Gollum::Page.per_page
          link = '/history/#{@page.name}?page=#{@page_num+1}'
          %(<a href='#{link}' hotkey='l'>#{label}</a>)
        else
          %(<span class='disabled'>#{label}</span>)
        end
      end
    end
  end
end

    
      test 'clean path without leading slash' do
    assert_equal '/Mordor', clean_path('Mordor')
  end
    
    # external
require 'github/markup'
require 'sanitize'
    
      let(:prefix) { '' } # A prefix before the opening brace.
  let(:suffix) { '' } # A suffix for the line after the closing brace.
  let(:open) { nil } # The opening brace.
  let(:close) { nil } # The closing brace.
  let(:a) { 'a' } # The first element.
  let(:b) { 'b' } # The second element.
  let(:b_comment) { '' } # Comment after the second element.
  let(:multi_prefix) { '' } # Prefix multi and heredoc with this.
  let(:multi) do # A viable multi-line element.
    <<-RUBY.strip_indent.chomp
      {
      foo: bar
      }
    RUBY
  end
  # This heredoc is unsafe to edit around because it ends on the same line as
  # the node itself.
  let(:heredoc) do
    <<-RUBY.strip_indent.chomp
      <<-EOM
      baz
      EOM
    RUBY
  end
  # This heredoc is safe to edit around because it ends on a line before the
  # last line of the node.
  let(:safe_heredoc) do
    <<-RUBY.strip_indent.chomp
      {
      a: <<-EOM
      baz
      EOM
      }
    RUBY
  end
    
      context 'when arguments to a method' do
    let(:prefix) { 'bar(' }
    let(:suffix) { ')' }
    let(:source) { construct(false, true) }
    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
          # Checks whether any argument of the node is a splat
      # argument, i.e. `*splat`.
      #
      # @return [Boolean] whether the node is a splat argument
      def splat_argument?
        arguments? &&
          (arguments.any?(&:splat_type?) || arguments.any?(&:restarg_type?))
      end
      alias rest_argument? splat_argument?
    
          # Returns the index of the `when` branch within the `case` statement.
      #
      # @return [Integer] the index of the `when` branch
      def branch_index
        parent.when_branches.index(self)
      end
    
    # usage rake isolate[my-post]
desc 'Move all other posts than the one currently being worked on to a temporary stash location (stash) so regenerating the site happens much more quickly.'
task :isolate, :filename do |t, args|
  stash_dir = '#{source_dir}/#{stash_dir}'
  FileUtils.mkdir(stash_dir) unless File.exist?(stash_dir)
  Dir.glob('#{source_dir}/#{posts_dir}/*.*') do |post|
    FileUtils.mv post, stash_dir unless post.include?(args.filename)
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
    
          scripts_path(filename).tap do |pkgscript|
        logger.info('Writing pkg script', :source => filename, :target => pkgscript)
        File.write(pkgscript, script(scriptname))
        # scripts are required to be executable
        File.chmod(0755, pkgscript)
      end
    end
  end # def write_scripts