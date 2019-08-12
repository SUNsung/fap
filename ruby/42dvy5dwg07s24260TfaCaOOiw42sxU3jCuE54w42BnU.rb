
        
        # Mimic how Jekyll's LiquidRenderer would process a non-static file, with
# some dummy payload
def always_liquid(content)
  Liquid::Template.error_mode = :warn
  Liquid::Template.parse(content, :line_numbers => true).render(
    'author' => 'John Doe',
    'title'  => 'FooBar'
  )
end
    
    require 'benchmark/ips'
require 'pathutil'
    
        args = msg['args'] + [msg['error_message']]
    
          def filter_options(**options)
        @filter_options.merge!(options)
      end
    
          def decoded
        secret =
          case options.algorithm
          when *%w[RS256 RS384 RS512]
            OpenSSL::PKey::RSA.new(options.secret).public_key
          when *%w[ES256 ES384 ES512]
            OpenSSL::PKey::EC.new(options.secret).tap { |key| key.private_key = nil }
          when *%w(HS256 HS384 HS512)
            options.secret
          else
            raise NotImplementedError, 'Unsupported algorithm: #{options.algorithm}'
          end
    
        def handle_disabled_by_default(config, new_default_configuration)
      department_config = config.to_hash.reject { |cop| cop.include?('/') }
      department_config.each do |dept, dept_params|
        next unless dept_params['Enabled']
    
        def autocorrect_unneeded_disables(source, cop)
      cop.processed_source = source
    
        content << '\n<!-- END_COP_LIST -->'
    
          it_behaves_like 'invalid'
    end
    
    RSpec.describe RuboCop::Cop::Layout::DefEndAlignment, :config do
  subject(:cop) { described_class.new(config) }
    
          it 'registers an offense for String.new' do
        expect_offense(<<~RUBY)
          test = String.new
                 ^^^^^^^^^^ Use string literal `''` instead of `String.new`.
        RUBY
      end
    
    
    {      # Checks whether the `block` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `block` literal is enclosed in braces
      def braces?
        loc.end&.is?('}')
      end
    
          # Calls the given block for each `key` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_key
        return pairs.map(&:key).to_enum unless block_given?
    
    def blog_url(user, project, source_dir)
  cname = '#{source_dir}/CNAME'
  url = if File.exists?(cname)
    'http://#{IO.read(cname).strip}'
  else
    'http://#{user.downcase}.github.io'
  end
  url += '/#{project}' unless project == ''
  url
end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
        def render(context)
      file_dir = (context.registers[:site].source || 'source')
      file_path = Pathname.new(file_dir).expand_path
      file = file_path + @file