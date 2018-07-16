
        
              keg_only_deps.each do |dep|
        ENV.prepend_path 'PATH', dep.opt_bin.to_s
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_lib}/pkgconfig'
        ENV.prepend_path 'PKG_CONFIG_PATH', '#{dep.opt_share}/pkgconfig'
        ENV.prepend_path 'ACLOCAL_PATH', '#{dep.opt_share}/aclocal'
        ENV.prepend_path 'CMAKE_PREFIX_PATH', dep.opt_prefix.to_s
        ENV.prepend 'LDFLAGS', '-L#{dep.opt_lib}' if dep.opt_lib.directory?
        ENV.prepend 'CPPFLAGS', '-I#{dep.opt_include}' if dep.opt_include.directory?
      end
    end
    
      # True if a {Formula} is being built universally.
  # e.g. on newer Intel Macs this means a combined x86_64/x86 binary/library.
  # <pre>args << '--universal-binary' if build.universal?</pre>
  def universal?
    include?('universal') && option_defined?('universal')
  end
    
      # Finds the projects '@user' contributed to, limited to either public projects
  # or projects visible to the given user.
  #
  # current_user - When given the list of the projects is limited to those only
  #                visible by this user.
  #
  # Returns an ActiveRecord::Relation.
  def execute(current_user = nil)
    segments = all_projects(current_user)
    
          options[:only] = %w(getting-started/ css/ components/ javascript/)
    end
  end
end

    
        version 'Guide' do
      self.base_url = 'https://www.tensorflow.org/'
      self.root_path = 'get_started/get_started'
      self.initial_paths = %w(
        programmers_guide/reading_data
        tutorials/mandelbrot
        performance/performance_guide
        deploy/hadoop
        extend/architecture)
    
    module Metasploit
  module Framework
    class Application < Rails::Application
      include Metasploit::Framework::CommonEngine
    
      def register_sigs
    self.sigs = {
      :banner		=> /^(\*\s+OK[^\n\r]*)/i,
      :login		=> /^CAPABILITY\s+LOGIN\s+([^\s]+)\s+([^\n\r]+)/i,
      :login_pass => /^CAPABILITY\s+OK\s+(Login[^\n\r]*)/i,
      :login_bad	=> /^CAPABILITY\s+BAD\s+(Login[^\n\r]*)/i,
      :login_fail => /^CAPABILITY\s+NO\s+(Login[^\n\r]*)/i
    }
  end
    
                  s[:proto] = 'tcp'
              s[:name]  = 'pop3'
              s[:extra] = 'Successful Login. Banner: #{s[:banner]}'
              report_auth_info(s)
              print_status('Successful POP3 Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
    
    meterp = Rex::Post::Meterpreter::Client.new(sock)
    
    #keytool = clsKeyTool
#jarsigner = clsJarSigner
    
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
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
    require './plugins/pygments_code'
require './plugins/raw'
require 'pathname'
    
        if as == :json
      if api_error?(data)
        data = generate_error_hash(data)
      else
        selected_fields = extract_fields(filter.to_s.strip)
        data.select! { |k,v| selected_fields.include?(k) } unless selected_fields.empty?
        unless options.include?(:exclude_default_metadata)
          data = data.to_hash
          if data.values.size == 0 && selected_fields.size > 0
            raise LogStash::Api::NotFoundError
          end
          data = default_metadata.merge(data)
        end
      end
    
      def _nt_name
    start_index = index
    if node_cache[:name].has_key?(index)
      cached = node_cache[:name][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end